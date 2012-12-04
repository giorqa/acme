<?php


/**
 * Helper function for enabling and disabling batches of modules.
 *
 * @param array $modules_enabled
 * 	The module names to be enabled
 * @param array $modules_disable
 * 	The module names to be disabled
 *
 * @return An array of modules enabled and disabled
 */
function acme_central_system_enable_and_disable_modules($modules_enabled, $modules_disabled = array()) {
  if (!count($modules_enabled) && !count($modules_disabled)) {
		throw new DrupalUpdateException('acme_central_system_enable_and_disable_modules() called, but no modules to disable or enable!');
  }

  system_rebuild_module_data();

  if (count($modules_enabled)) {
    module_enable($modules_enabled);
  }
  if (count($modules_disabled)) {
    module_disable($modules_disabled);
  }

  if (count($modules_enabled)) {
    features_install_modules($modules_enabled);
  }
  if (count($modules_disabled)) {
		drupal_uninstall_modules($modules_disabled, FALSE);
  }

  // Additional functions called when admin/build/modules is submitted
  menu_rebuild();
  node_types_rebuild();
  drupal_clear_css_cache();

  $enabled_list = '<ul><li>' . implode('</li><li>', $modules_enabled) . '</li></ul>';
  $disabled_list = '<ul><li>' . implode('</li><li>', $modules_disabled) . '</li></ul>';
	return t(
		'<ul><li>Enabling: !enabled_list</li><li>Disabling: !disabled_list</li></ul>',
		array('!enabled_list' => $enabled_list, '!disabled_list' => $disabled_list)
	);
}

<?php
/**
 * @file
 * acme_discussion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acme_discussion_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function acme_discussion_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function acme_discussion_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('Discussion'),
      'base' => 'node_content',
      'description' => t('Show discussions'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

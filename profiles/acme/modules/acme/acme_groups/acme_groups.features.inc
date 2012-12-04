<?php
/**
 * @file
 * acme_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acme_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function acme_groups_views_api() {
  return array("version" => "3.0");
}

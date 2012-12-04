<?php
/**
 * @file
 * acme_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function acme_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-acme-footer.
  $menus['menu-acme-footer'] = array(
    'menu_name' => 'menu-acme-footer',
    'title' => 'ACME Footer',
    'description' => '',
  );
  // Exported menu: menu-acme-main.
  $menus['menu-acme-main'] = array(
    'menu_name' => 'menu-acme-main',
    'title' => 'ACME Main',
    'description' => '',
  );
  // Exported menu: menu-acme-top.
  $menus['menu-acme-top'] = array(
    'menu_name' => 'menu-acme-top',
    'title' => 'ACME Top',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ACME Footer');
  t('ACME Main');
  t('ACME Top');


  return $menus;
}

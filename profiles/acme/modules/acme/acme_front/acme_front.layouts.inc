<?php
/**
 * @file
 * acme_front.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function acme_front_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'custom_homepage';
  $layout->admin_title = 'Custom Homepage';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'responsive';
  $layout->settings = array(
    'regions' => array(
      'header_a' => 'header_a',
      'header_b' => 'header_b',
      'body' => 'body',
      'sidebar_a' => 'sidebar_a',
      'footer_a' => 'footer_a',
    ),
    'overrides' => array(
      'smartphone' => array(),
      'tablet' => array(),
      'standard' => array(
        0 => array(
          'name' => 'header_a',
          'columns' => 9,
        ),
        1 => array(
          'name' => 'header_b',
          'columns' => 3,
        ),
        2 => array(
          'name' => 'body',
          'columns' => 6,
        ),
        3 => array(
          'name' => 'sidebar_a',
          'columns' => 6,
        ),
      ),
    ),
  );
  $export['custom_homepage'] = $layout;

  return $export;
}

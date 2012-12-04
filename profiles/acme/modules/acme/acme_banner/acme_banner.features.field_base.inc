<?php
/**
 * @file
 * acme_banner.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function acme_banner_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_front_banner_image'
  $field_bases['field_front_banner_image'] = array(
    'active' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_front_banner_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => '0',
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => '0',
    'type' => 'image',
  );

  // Exported field_base: 'field_front_banner_weight'
  $field_bases['field_front_banner_weight'] = array(
    'active' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_front_banner_weight',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => '0',
    'module' => 'number',
    'settings' => array(),
    'translatable' => '0',
    'type' => 'number_integer',
  );

  return $field_bases;
}

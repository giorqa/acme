<?php
/**
 * @file
 * acme_profile_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function acme_profile_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_interests'
  $field_bases['field_user_interests'] = array(
    'active' => '1',
    'cardinality' => '-1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_user_interests',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => '0',
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'interests',
          'parent' => '0',
        ),
      ),
    ),
    'translatable' => '0',
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_user_location'
  $field_bases['field_user_location'] = array(
    'active' => '1',
    'cardinality' => '1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_user_location',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => '0',
    'module' => 'addressfield',
    'settings' => array(),
    'translatable' => '0',
    'type' => 'addressfield',
  );

  return $field_bases;
}

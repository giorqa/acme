<?php
/**
 * @file
 * acme_profile_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function acme_profile_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_interests'
  $field_instances['user-user-field_user_interests'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editability' => 'form',
            'wysiwyg' => FALSE,
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_interests',
    'label' => 'Interests',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '9',
    ),
  );

  // Exported field_instance: 'user-user-field_user_location'
  $field_instances['user-user-field_user_location'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'element_key' => 'user|user|field_user_location|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'CA' => 'CA',
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => '7',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Interests');
  t('Location');

  return $field_instances;
}

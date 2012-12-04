<?php
/**
 * @file
 * acme_banner.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function acme_banner_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-front_banner-field_front_banner_image'
  $field_instances['node-front_banner-field_front_banner_image'] = array(
    'bundle' => 'front_banner',
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'edit' => array(
            'editability' => 'form',
            'wysiwyg' => FALSE,
          ),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_front_banner_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'front-banner',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'flexslider_full',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => '-4',
    ),
  );

  // Exported field_instance: 'node-front_banner-field_front_banner_weight'
  $field_instances['node-front_banner-field_front_banner_weight'] = array(
    'bundle' => 'front_banner',
    'default_value' => array(
      0 => array(
        'value' => '0',
      ),
    ),
    'deleted' => '0',
    'description' => 'Used for banner sorting.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'edit' => array(
            'editability' => 'form',
            'wysiwyg' => FALSE,
          ),
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_front_banner_weight',
    'label' => 'Weight',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => '-3',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Used for banner sorting.');
  t('Weight');

  return $field_instances;
}

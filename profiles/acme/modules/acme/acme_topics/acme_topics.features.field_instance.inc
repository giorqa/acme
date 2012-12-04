<?php
/**
 * @file
 * acme_topics.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function acme_topics_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_article_interests'
  $field_instances['node-article-field_article_interests'] = array(
    'bundle' => 'article',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_interests',
    'label' => 'Interests',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '11',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Interests');

  return $field_instances;
}

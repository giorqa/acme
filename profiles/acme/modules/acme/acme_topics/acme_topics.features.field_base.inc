<?php
/**
 * @file
 * acme_topics.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function acme_topics_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_article_interests'
  $field_bases['field_article_interests'] = array(
    'active' => '1',
    'cardinality' => '-1',
    'deleted' => '0',
    'entity_types' => array(),
    'field_name' => 'field_article_interests',
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

  return $field_bases;
}

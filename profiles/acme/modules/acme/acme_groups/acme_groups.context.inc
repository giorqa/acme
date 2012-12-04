<?php
/**
 * @file
 * acme_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acme_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acme_groups_group_page';
  $context->description = 'Group/Show page';
  $context->tag = 'acme_groups';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'acme_groups-acme_groups_group_count' => array(
          'module' => 'acme_groups',
          'delta' => 'acme_groups_group_count',
          'region' => 'group_top_left',
          'weight' => '-22',
        ),
        'views-acme_group_contributors-block_1' => array(
          'module' => 'views',
          'delta' => 'acme_group_contributors-block_1',
          'region' => 'group_top_left',
          'weight' => '-21',
        ),
        'acme_groups-acme_groups_group_admin' => array(
          'module' => 'acme_groups',
          'delta' => 'acme_groups_group_admin',
          'region' => 'group_top_left',
          'weight' => '-20',
        ),
        'acme_episode-acme_episode_latest_episode' => array(
          'module' => 'acme_episode',
          'delta' => 'acme_episode_latest_episode',
          'region' => 'group_top_middle',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'group_top_right',
          'weight' => '-10',
        ),
        'acme_profile_base-acme_profile_base_map' => array(
          'module' => 'acme_profile_base',
          'delta' => 'acme_profile_base_map',
          'region' => 'group_top_right',
          'weight' => '-9',
        ),
        'acme_poll-acme_poll_group_poll' => array(
          'module' => 'acme_poll',
          'delta' => 'acme_poll_group_poll',
          'region' => 'group_bottom_left',
          'weight' => '-10',
        ),
        'acme_discussion-acme_discussion_discussion' => array(
          'module' => 'acme_discussion',
          'delta' => 'acme_discussion_discussion',
          'region' => 'group_bottom_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group/Show page');
  t('acme_groups');
  $export['acme_groups_group_page'] = $context;

  return $export;
}

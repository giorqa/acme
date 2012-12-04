<?php
/**
 * @file
 * acme_poll.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function acme_poll_user_default_permissions() {
  $permissions = array();

  // Exported permission: cancel own vote.
  $permissions['cancel own vote'] = array(
    'name' => 'cancel own vote',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'poll',
  );

  // Exported permission: inspect all votes.
  $permissions['inspect all votes'] = array(
    'name' => 'inspect all votes',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'poll',
  );

  // Exported permission: vote on polls.
  $permissions['vote on polls'] = array(
    'name' => 'vote on polls',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'poll',
  );

  return $permissions;
}

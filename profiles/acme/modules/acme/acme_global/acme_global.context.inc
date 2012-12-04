<?php
/**
 * @file
 * acme_global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function acme_global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'acme_global';
  $context->description = 'Sets menus and footer blocks';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'top_header',
          'weight' => '-10',
        ),
        'menu-menu-acme-top' => array(
          'module' => 'menu',
          'delta' => 'menu-acme-top',
          'region' => 'top_header',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu-menu-acme-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-acme-footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sets menus and footer blocks');
  $export['acme_global'] = $context;

  return $export;
}

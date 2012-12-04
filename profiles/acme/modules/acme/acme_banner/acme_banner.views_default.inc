<?php
/**
 * @file
 * acme_banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acme_banner_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acme_banner_frontpage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'acme_banner_frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'acme_banner_frontpage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_front_banner_image']['id'] = 'field_front_banner_image';
  $handler->display->display_options['fields']['field_front_banner_image']['table'] = 'field_data_field_front_banner_image';
  $handler->display->display_options['fields']['field_front_banner_image']['field'] = 'field_front_banner_image';
  $handler->display->display_options['fields']['field_front_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_front_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_banner_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Sort criterion: Content: Weight (field_front_banner_weight) */
  $handler->display->display_options['sorts']['field_front_banner_weight_value']['id'] = 'field_front_banner_weight_value';
  $handler->display->display_options['sorts']['field_front_banner_weight_value']['table'] = 'field_data_field_front_banner_weight';
  $handler->display->display_options['sorts']['field_front_banner_weight_value']['field'] = 'field_front_banner_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_banner' => 'front_banner',
  );

  /* Display: Front page banner */
  $handler = $view->new_display('block', 'Front page banner', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Front page banner';
  $export['acme_banner_frontpage'] = $view;

  return $export;
}

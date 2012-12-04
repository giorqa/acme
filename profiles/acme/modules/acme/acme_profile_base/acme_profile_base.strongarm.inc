<?php
/**
 * @file
 * acme_profile_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function acme_profile_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_api_key_0';
  $strongarm->value = '';
  $export['addressfield_staticmap_api_key_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_api_key_1';
  $strongarm->value = '';
  $export['addressfield_staticmap_api_key_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_directions_link_0';
  $strongarm->value = 0;
  $export['addressfield_staticmap_directions_link_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_directions_link_1';
  $strongarm->value = 0;
  $export['addressfield_staticmap_directions_link_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_directions_text_0';
  $strongarm->value = 'Get Directions';
  $export['addressfield_staticmap_directions_text_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_directions_text_1';
  $strongarm->value = 'Get Directions';
  $export['addressfield_staticmap_directions_text_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_field_kml';
  $strongarm->value = array();
  $export['addressfield_staticmap_field_kml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_field_names';
  $strongarm->value = array(
    'field_user_location' => 'field_user_location',
  );
  $export['addressfield_staticmap_field_names'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_icon_url_0';
  $strongarm->value = '';
  $export['addressfield_staticmap_gmap_icon_url_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_icon_url_1';
  $strongarm->value = '';
  $export['addressfield_staticmap_gmap_icon_url_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_link_0';
  $strongarm->value = 0;
  $export['addressfield_staticmap_gmap_link_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_link_1';
  $strongarm->value = 0;
  $export['addressfield_staticmap_gmap_link_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_link_target_0';
  $strongarm->value = '';
  $export['addressfield_staticmap_gmap_link_target_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_link_target_1';
  $strongarm->value = '';
  $export['addressfield_staticmap_gmap_link_target_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_size_0';
  $strongarm->value = '258x380';
  $export['addressfield_staticmap_gmap_size_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_size_1';
  $strongarm->value = '400x400';
  $export['addressfield_staticmap_gmap_size_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_type_0';
  $strongarm->value = 'roadmap';
  $export['addressfield_staticmap_gmap_type_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_type_1';
  $strongarm->value = 'roadmap';
  $export['addressfield_staticmap_gmap_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_zoom_0';
  $strongarm->value = '14';
  $export['addressfield_staticmap_gmap_zoom_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addressfield_staticmap_gmap_zoom_1';
  $strongarm->value = '14';
  $export['addressfield_staticmap_gmap_zoom_1'] = $strongarm;

  return $export;
}

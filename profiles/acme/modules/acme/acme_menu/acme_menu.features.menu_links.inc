<?php
/**
 * @file
 * acme_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function acme_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-acme-footer:advertise
  $menu_links['menu-acme-footer:advertise'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'advertise',
    'router_path' => 'advertise',
    'link_title' => 'Advertise',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-acme-footer:contact-us
  $menu_links['menu-acme-footer:contact-us'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'contact-us',
    'router_path' => 'contact-us',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-acme-footer:corporate-info
  $menu_links['menu-acme-footer:corporate-info'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'corporate-info',
    'router_path' => 'corporate-info',
    'link_title' => 'Corporate Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-acme-footer:jobs
  $menu_links['menu-acme-footer:jobs'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'jobs',
    'router_path' => 'jobs',
    'link_title' => 'Jobs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-acme-footer:privacy
  $menu_links['menu-acme-footer:privacy'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'privacy',
    'router_path' => 'privacy',
    'link_title' => 'Privacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-acme-footer:technical-support
  $menu_links['menu-acme-footer:technical-support'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'technical-support',
    'router_path' => 'technical-support',
    'link_title' => 'Technical Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-acme-footer:terms-of-use
  $menu_links['menu-acme-footer:terms-of-use'] = array(
    'menu_name' => 'menu-acme-footer',
    'link_path' => 'terms-of-use',
    'router_path' => 'terms-of-use',
    'link_title' => 'Terms of use',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-acme-main:products
  $menu_links['menu-acme-main:products'] = array(
    'menu_name' => 'menu-acme-main',
    'link_path' => 'products',
    'router_path' => 'products',
    'link_title' => 'Products',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-acme-main:schedule
  $menu_links['menu-acme-main:schedule'] = array(
    'menu_name' => 'menu-acme-main',
    'link_path' => 'schedule',
    'router_path' => 'schedule',
    'link_title' => 'Schedule',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-acme-main:shows
  $menu_links['menu-acme-main:shows'] = array(
    'menu_name' => 'menu-acme-main',
    'link_path' => 'shows',
    'router_path' => 'shows',
    'link_title' => 'Shows',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-acme-main:videos
  $menu_links['menu-acme-main:videos'] = array(
    'menu_name' => 'menu-acme-main',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-acme-top:about
  $menu_links['menu-acme-top:about'] = array(
    'menu_name' => 'menu-acme-top',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-acme-top:shop
  $menu_links['menu-acme-top:shop'] = array(
    'menu_name' => 'menu-acme-top',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-acme-top:support
  $menu_links['menu-acme-top:support'] = array(
    'menu_name' => 'menu-acme-top',
    'link_path' => 'support',
    'router_path' => 'support',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-acme-top:user
  $menu_links['menu-acme-top:user'] = array(
    'menu_name' => 'menu-acme-top',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-acme-top:user/logout
  $menu_links['menu-acme-top:user/logout'] = array(
    'menu_name' => 'menu-acme-top',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-acme-top:watch-tv
  $menu_links['menu-acme-top:watch-tv'] = array(
    'menu_name' => 'menu-acme-top',
    'link_path' => 'watch-tv',
    'router_path' => 'watch-tv',
    'link_title' => 'Watch TV',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Advertise');
  t('Contact Us');
  t('Corporate Info');
  t('Jobs');
  t('Logout');
  t('My Account');
  t('Privacy');
  t('Products');
  t('Schedule');
  t('Shop');
  t('Shows');
  t('Support');
  t('Technical Support');
  t('Terms of use');
  t('Videos');
  t('Watch TV');


  return $menu_links;
}

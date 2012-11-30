<?php
/**
 * @file
 * base_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function base_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:http://localrootswooster.com
  $menu_links['main-menu:http://localrootswooster.com'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localrootswooster.com',
    'router_path' => '',
    'link_title' => '<< Back to LR Market',
    'options' => array(
      'attributes' => array(
        'title' => 'Local Roots Market and Cafe Website',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About page of the Local Roots Community Kitchen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:updates
  $menu_links['main-menu:updates'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'updates',
    'router_path' => 'updates',
    'link_title' => 'Kitchen Updates',
    'options' => array(
      'attributes' => array(
        'title' => 'Updates about the Kitchen Progress',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-footer-menu:node/3
  $menu_links['menu-footer-menu:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
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
    'weight' => '0',
  );
  // Exported menu link: menu-footer-menu:updates
  $menu_links['menu-footer-menu:updates'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'updates',
    'router_path' => 'updates',
    'link_title' => 'Updates',
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
  // Translatables
  // Included for use with string extractors like potx.
  t('<< Back to LR Market');
  t('About');
  t('Home');
  t('Kitchen Updates');
  t('Updates');


  return $menu_links;
}

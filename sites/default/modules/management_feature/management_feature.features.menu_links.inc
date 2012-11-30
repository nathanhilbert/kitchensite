<?php
/**
 * @file
 * management_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function management_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:management
  $menu_links['main-menu:management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'management',
    'router_path' => 'management',
    'link_title' => 'Management',
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
  t('Management');


  return $menu_links;
}

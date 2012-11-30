<?php
/**
 * @file
 * management_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function management_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function management_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function management_feature_node_info() {
  $items = array(
    'potential_tenant' => array(
      'name' => t('Potential Tenant'),
      'base' => 'node_content',
      'description' => t('Used to record contact history with potential tenants'),
      'has_title' => '1',
      'title_label' => t('Potential Tenants'),
      'help' => '',
    ),
  );
  return $items;
}

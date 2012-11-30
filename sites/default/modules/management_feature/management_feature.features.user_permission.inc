<?php
/**
 * @file
 * management_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function management_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create potential_tenant content.
  $permissions['create potential_tenant content'] = array(
    'name' => 'create potential_tenant content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any potential_tenant content.
  $permissions['delete any potential_tenant content'] = array(
    'name' => 'delete any potential_tenant content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own potential_tenant content.
  $permissions['delete own potential_tenant content'] = array(
    'name' => 'delete own potential_tenant content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any potential_tenant content.
  $permissions['edit any potential_tenant content'] = array(
    'name' => 'edit any potential_tenant content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own potential_tenant content.
  $permissions['edit own potential_tenant content'] = array(
    'name' => 'edit own potential_tenant content',
    'roles' => array(
      0 => 'administrator',
      1 => 'manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}

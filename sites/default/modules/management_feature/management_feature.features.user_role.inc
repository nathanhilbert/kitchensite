<?php
/**
 * @file
 * management_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function management_feature_user_default_roles() {
  $roles = array();

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => '3',
  );

  return $roles;
}

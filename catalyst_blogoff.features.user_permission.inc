<?php
/**
 * @file
 * catalyst_blogoff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function catalyst_blogoff_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer catalyst status'.
  $permissions['administer catalyst status'] = array(
    'name' => 'administer catalyst status',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'catalyst_blogoff',
  );

  return $permissions;
}

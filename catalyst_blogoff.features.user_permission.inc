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

  // Exported permission: 'create catalyst_blogoff content'.
  $permissions['create catalyst_blogoff content'] = array(
    'name' => 'create catalyst_blogoff content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any catalyst_blogoff content'.
  $permissions['delete any catalyst_blogoff content'] = array(
    'name' => 'delete any catalyst_blogoff content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own catalyst_blogoff content'.
  $permissions['delete own catalyst_blogoff content'] = array(
    'name' => 'delete own catalyst_blogoff content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any catalyst_blogoff content'.
  $permissions['edit any catalyst_blogoff content'] = array(
    'name' => 'edit any catalyst_blogoff content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own catalyst_blogoff content'.
  $permissions['edit own catalyst_blogoff content'] = array(
    'name' => 'edit own catalyst_blogoff content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}

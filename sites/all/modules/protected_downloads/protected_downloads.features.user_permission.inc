<?php
/**
 * @file
 * protected_downloads.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function protected_downloads_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access protected node overview page'.
  $permissions['access protected node overview page'] = array(
    'name' => 'access protected node overview page',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'protected_node',
  );

  // Exported permission: 'access protected node password form'.
  $permissions['access protected node password form'] = array(
    'name' => 'access protected node password form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'protected_node',
  );

  // Exported permission: 'edit any protected node password'.
  $permissions['edit any protected node password'] = array(
    'name' => 'edit any protected node password',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'protected_node',
  );

  // Exported permission: 'edit article password'.
  $permissions['edit article password'] = array(
    'name' => 'edit article password',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'protected_node',
  );

  // Exported permission: 'edit downloads password'.
  $permissions['edit downloads password'] = array(
    'name' => 'edit downloads password',
    'roles' => array(),
    'module' => 'protected_node',
  );

  // Exported permission: 'edit page password'.
  $permissions['edit page password'] = array(
    'name' => 'edit page password',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'protected_node',
  );

  // Exported permission: 'edit protected content'.
  $permissions['edit protected content'] = array(
    'name' => 'edit protected content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'protected_node',
  );

  // Exported permission: 'view protected content'.
  $permissions['view protected content'] = array(
    'name' => 'view protected content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'protected_node',
  );

  return $permissions;
}

<?php
/**
 * @file
 * fe_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fe_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format html_filter
  $permissions['use text format html_filter'] = array(
    'name' => 'use text format html_filter',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format html_full
  $permissions['use text format html_full'] = array(
    'name' => 'use text format html_full',
    'roles' => array(),
  );

  return $permissions;
}

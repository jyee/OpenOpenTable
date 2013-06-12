<?php
/**
 * @file
 * oot_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function oot_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer MERCI.
  $permissions['administer MERCI'] = array(
    'name' => 'administer MERCI',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'merci',
  );

  // Exported permission: create chefs_table content.
  $permissions['create chefs_table content'] = array(
    'name' => 'create chefs_table content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create confirmed reservations.
  $permissions['create confirmed reservations'] = array(
    'name' => 'create confirmed reservations',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'merci',
  );

  // Exported permission: create merci_reservation content.
  $permissions['create merci_reservation content'] = array(
    'name' => 'create merci_reservation content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create reservations.
  $permissions['create reservations'] = array(
    'name' => 'create reservations',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'merci',
  );

  // Exported permission: create reservations outside hours of operation.
  $permissions['create reservations outside hours of operation'] = array(
    'name' => 'create reservations outside hours of operation',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'merci',
  );

  // Exported permission: create table_for_2 content.
  $permissions['create table_for_2 content'] = array(
    'name' => 'create table_for_2 content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create table_for_4 content.
  $permissions['create table_for_4 content'] = array(
    'name' => 'create table_for_4 content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any chefs_table content.
  $permissions['delete any chefs_table content'] = array(
    'name' => 'delete any chefs_table content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any merci_reservation content.
  $permissions['delete any merci_reservation content'] = array(
    'name' => 'delete any merci_reservation content',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any table_for_2 content.
  $permissions['delete any table_for_2 content'] = array(
    'name' => 'delete any table_for_2 content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any table_for_4 content.
  $permissions['delete any table_for_4 content'] = array(
    'name' => 'delete any table_for_4 content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own chefs_table content.
  $permissions['delete own chefs_table content'] = array(
    'name' => 'delete own chefs_table content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own merci_reservation content.
  $permissions['delete own merci_reservation content'] = array(
    'name' => 'delete own merci_reservation content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own table_for_2 content.
  $permissions['delete own table_for_2 content'] = array(
    'name' => 'delete own table_for_2 content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own table_for_4 content.
  $permissions['delete own table_for_4 content'] = array(
    'name' => 'delete own table_for_4 content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any chefs_table content.
  $permissions['edit any chefs_table content'] = array(
    'name' => 'edit any chefs_table content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any merci_reservation content.
  $permissions['edit any merci_reservation content'] = array(
    'name' => 'edit any merci_reservation content',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any table_for_2 content.
  $permissions['edit any table_for_2 content'] = array(
    'name' => 'edit any table_for_2 content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any table_for_4 content.
  $permissions['edit any table_for_4 content'] = array(
    'name' => 'edit any table_for_4 content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own chefs_table content.
  $permissions['edit own chefs_table content'] = array(
    'name' => 'edit own chefs_table content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own merci_reservation content.
  $permissions['edit own merci_reservation content'] = array(
    'name' => 'edit own merci_reservation content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own table_for_2 content.
  $permissions['edit own table_for_2 content'] = array(
    'name' => 'edit own table_for_2 content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own table_for_4 content.
  $permissions['edit own table_for_4 content'] = array(
    'name' => 'edit own table_for_4 content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: manage reservations.
  $permissions['manage reservations'] = array(
    'name' => 'manage reservations',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'merci',
  );

  // Exported permission: override max hours over closed days.
  $permissions['override max hours over closed days'] = array(
    'name' => 'override max hours over closed days',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'merci',
  );

  // Exported permission: suspend MERCI access.
  $permissions['suspend MERCI access'] = array(
    'name' => 'suspend MERCI access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'merci',
  );

  // Exported permission: view all reservations.
  $permissions['view all reservations'] = array(
    'name' => 'view all reservations',
    'roles' => array(
      'administrator' => 'administrator',
      'site editor' => 'site editor',
    ),
    'module' => 'merci',
  );

  return $permissions;
}

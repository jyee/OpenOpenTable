<?php
/**
 * @file
 * oot_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oot_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_chefs_table';
  $strongarm->value = 'edit-merci';
  $export['additional_settings__active_tab_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_table_for_2';
  $strongarm->value = 'edit-merci';
  $export['additional_settings__active_tab_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_table_for_4';
  $strongarm->value = 'edit-merci';
  $export['additional_settings__active_tab_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_chefs_table';
  $strongarm->value = array();
  $export['menu_options_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_table_for_2';
  $strongarm->value = array();
  $export['menu_options_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_table_for_4';
  $strongarm->value = array();
  $export['menu_options_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_chefs_table';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_table_for_2';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_table_for_4';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_closed_dates';
  $strongarm->value = '';
  $export['merci_closed_dates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_default_reservation_status';
  $strongarm->value = '1';
  $export['merci_default_reservation_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_equipment_grouping_vid';
  $strongarm->value = '1';
  $export['merci_equipment_grouping_vid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_friday_is_weekend';
  $strongarm->value = 1;
  $export['merci_friday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_grouping_chefs_table';
  $strongarm->value = '';
  $export['merci_grouping_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_grouping_table_for_2';
  $strongarm->value = '';
  $export['merci_grouping_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_grouping_table_for_4';
  $strongarm->value = '';
  $export['merci_grouping_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_admin';
  $strongarm->value = '16:00-23:59';
  $export['merci_hours_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_friday';
  $strongarm->value = '17:00-23:00';
  $export['merci_hours_friday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_monday';
  $strongarm->value = '';
  $export['merci_hours_monday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_operation';
  $strongarm->value = array(
    0 => array(
      'open' => '17:00',
      'close' => '23:00',
    ),
    1 => NULL,
    2 => array(
      'open' => '17:00',
      'close' => '23:00',
    ),
    3 => array(
      'open' => '17:00',
      'close' => '23:00',
    ),
    4 => array(
      'open' => '17:00',
      'close' => '23:00',
    ),
    5 => array(
      'open' => '17:00',
      'close' => '23:00',
    ),
    6 => array(
      'open' => '17:00',
      'close' => '23:00',
    ),
    'closed_days' => array(),
  );
  $export['merci_hours_operation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_saturday';
  $strongarm->value = '17:00-23:00';
  $export['merci_hours_saturday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_sunday';
  $strongarm->value = '17:00-23:00';
  $export['merci_hours_sunday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_thursday';
  $strongarm->value = '17:00-23:00';
  $export['merci_hours_thursday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_tuesday';
  $strongarm->value = '17:00-23:00';
  $export['merci_hours_tuesday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_hours_wednesday';
  $strongarm->value = '17:00-23:00';
  $export['merci_hours_wednesday'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_lock';
  $strongarm->value = 1;
  $export['merci_lock'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_max_days_advance_reservation';
  $strongarm->value = '0';
  $export['merci_max_days_advance_reservation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_monday_is_weekend';
  $strongarm->value = 0;
  $export['merci_monday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_saturday_is_weekend';
  $strongarm->value = 1;
  $export['merci_saturday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_sunday_is_weekend';
  $strongarm->value = 1;
  $export['merci_sunday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_thursday_is_weekend';
  $strongarm->value = 0;
  $export['merci_thursday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_tuesday_is_weekend';
  $strongarm->value = 0;
  $export['merci_tuesday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_type_setting_chefs_table';
  $strongarm->value = 'resource';
  $export['merci_type_setting_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_type_setting_table_for_2';
  $strongarm->value = 'bucket';
  $export['merci_type_setting_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_type_setting_table_for_4';
  $strongarm->value = 'bucket';
  $export['merci_type_setting_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_verbose_logging';
  $strongarm->value = 0;
  $export['merci_verbose_logging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'merci_wednesday_is_weekend';
  $strongarm->value = 0;
  $export['merci_wednesday_is_weekend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_chefs_table';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_table_for_2';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_table_for_4';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_chefs_table';
  $strongarm->value = '0';
  $export['node_preview_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_table_for_2';
  $strongarm->value = '0';
  $export['node_preview_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_table_for_4';
  $strongarm->value = '0';
  $export['node_preview_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_chefs_table';
  $strongarm->value = 0;
  $export['node_submitted_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_table_for_2';
  $strongarm->value = 0;
  $export['node_submitted_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_table_for_4';
  $strongarm->value = 0;
  $export['node_submitted_table_for_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_chefs_table';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_chefs_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_table_for_2';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_table_for_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_table_for_4';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_table_for_4'] = $strongarm;

  return $export;
}

<?php
/**
 * @file
 * oot_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oot_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function oot_core_node_info() {
  $items = array(
    'chefs_table' => array(
      'name' => t('Chef\'s Table'),
      'base' => 'node_content',
      'description' => t('A special reservable table in the kitchen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'table_for_2' => array(
      'name' => t('2 Guests'),
      'base' => 'node_content',
      'description' => t('A reservable table for 2 guests'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'table_for_4' => array(
      'name' => t('4 Guests'),
      'base' => 'node_content',
      'description' => t('A reservable table for 4'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

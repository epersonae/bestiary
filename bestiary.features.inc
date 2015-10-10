<?php
/**
 * @file
 * bestiary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bestiary_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bestiary_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bestiary_node_info() {
  $items = array(
    'monster' => array(
      'name' => t('Monster'),
      'base' => 'node_content',
      'description' => t('This is a creature to be used in role-playing games.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

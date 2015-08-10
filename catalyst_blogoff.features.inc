<?php
/**
 * @file
 * catalyst_blogoff.features.inc
 */

/**
 * Implements hook_views_api().
 */
function catalyst_blogoff_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function catalyst_blogoff_node_info() {
  $items = array(
    'catalyst_blogoff' => array(
      'name' => t('Catalyst blogoff'),
      'base' => 'node_content',
      'description' => t('General blog content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

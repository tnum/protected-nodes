<?php
/**
 * @file
 * protected_downloads.features.inc
 */

/**
 * Implements hook_node_info().
 */
function protected_downloads_node_info() {
  $items = array(
    'downloads' => array(
      'name' => t('Downloads'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

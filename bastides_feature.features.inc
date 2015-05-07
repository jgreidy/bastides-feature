<?php
/**
 * @file
 * bastides_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bastides_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bastides_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bastides_feature_node_info() {
  $items = array(
    'image_metadata' => array(
      'name' => t('Image Metadata'),
      'base' => 'node_content',
      'description' => t('Fields based on the metadata spreadsheet - associated with an image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

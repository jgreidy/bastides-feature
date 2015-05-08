<?php
/**
 * @file
 * bastides_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bastides_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_metadata:metadata
  $menu_links['main-menu_metadata:metadata'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'metadata',
    'router_path' => 'metadata',
    'link_title' => 'Metadata',
    'options' => array(
      'attributes' => array(
        'title' => 'Imported data from the spreadsheet',
      ),
      'identifier' => 'main-menu_metadata:metadata',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Metadata');


  return $menu_links;
}

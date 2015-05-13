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

  // Exported menu link: main-menu_geocode-villages:geocode-vilages
  $menu_links['main-menu_geocode-villages:geocode-vilages'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'geocode-vilages',
    'router_path' => 'geocode-vilages',
    'link_title' => 'Geocode Villages',
    'options' => array(
      'attributes' => array(
        'title' => 'Look up the lat,lon of villages',
      ),
      'identifier' => 'main-menu_geocode-villages:geocode-vilages',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_image-api:http://bastides.dd:8084/api/v1.0/image_metadata
  $menu_links['main-menu_image-api:http://bastides.dd:8084/api/v1.0/image_metadata'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://bastides.dd:8084/api/v1.0/image_metadata',
    'router_path' => '',
    'link_title' => 'Image API',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_image-api:http://bastides.dd:8084/api/v1.0/image_metadata',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_image-download:import-images
  $menu_links['main-menu_image-download:import-images'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import-images',
    'router_path' => 'import-images',
    'link_title' => 'Image Download',
    'options' => array(
      'attributes' => array(
        'title' => 'Download images from sharedshelf',
      ),
      'identifier' => 'main-menu_image-download:import-images',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
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
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_missing-photos:missing-photos
  $menu_links['main-menu_missing-photos:missing-photos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'missing-photos',
    'router_path' => 'missing-photos',
    'link_title' => 'Missing Photos',
    'options' => array(
      'identifier' => 'main-menu_missing-photos:missing-photos',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_village-api:http://bastides.dd:8084/api/v1.0/village_metadata
  $menu_links['main-menu_village-api:http://bastides.dd:8084/api/v1.0/village_metadata'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://bastides.dd:8084/api/v1.0/village_metadata',
    'router_path' => '',
    'link_title' => 'Village API',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_village-api:http://bastides.dd:8084/api/v1.0/village_metadata',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_villages:village-metadata
  $menu_links['main-menu_villages:village-metadata'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'village-metadata',
    'router_path' => 'village-metadata',
    'link_title' => 'Villages',
    'options' => array(
      'identifier' => 'main-menu_villages:village-metadata',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Geocode Villages');
  t('Home');
  t('Image API');
  t('Image Download');
  t('Metadata');
  t('Missing Photos');
  t('Village API');
  t('Villages');


  return $menu_links;
}

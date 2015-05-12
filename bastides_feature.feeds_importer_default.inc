<?php
/**
 * @file
 * bastides_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function bastides_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'photo_metadata';
  $feeds_importer->config = array(
    'name' => 'Photo Metadata',
    'description' => 'Only the fields related to the photo and the village name for entity reference.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'SSID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'SSID',
            'target' => 'field_ssid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Filename',
            'target' => 'field_filename',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'ID Number',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'ID Number',
            'target' => 'field_id_number',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Date',
            'target' => 'field_photo_year',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Image View Description',
            'target' => 'field_image_view',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Village',
            'target' => 'field_village',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Village',
            'target' => 'field_village_reference:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Original Filename',
            'target' => 'field_original_filename',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Reps Sequence No.',
            'target' => 'field_reps_sequence',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Media URL',
            'target' => 'field_media_url:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'EXIFRAW:GPSImgDirection',
            'target' => 'field_view_angle',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'image_metadata',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['photo_metadata'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'village_metadata';
  $feeds_importer->config = array(
    'name' => 'Village Metadata',
    'description' => 'Village info from photo data',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Founder',
            'target' => 'field_village_founder',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Senechal',
            'target' => 'field_village_senechal',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Date Founded',
            'target' => 'field_village_founded',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Village',
            'target' => 'title',
            'unique' => 1,
          ),
          4 => array(
            'source' => 'Village',
            'target' => 'field_village_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Notes',
            'target' => 'field_village_notes',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Market Square Details',
            'target' => 'field_village_market_square',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Plan and Site Details',
            'target' => 'field_village_plan_and_site',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Special Features',
            'target' => 'field_village_special_features',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'village_metadata',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['village_metadata'] = $feeds_importer;

  return $export;
}

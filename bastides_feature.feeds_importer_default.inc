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
  $feeds_importer->id = 'metadata';
  $feeds_importer->config = array(
    'name' => 'Metadata',
    'description' => 'CSV spereadsheet of metadata into Image Metadata nodes',
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
            'source' => 'Founder',
            'target' => 'field_founder',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Senechal',
            'target' => 'field_senechal',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Date',
            'target' => 'field_photo_year',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Date Founded',
            'target' => 'field_date_founded',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Image View Description',
            'target' => 'field_image_view',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Village',
            'target' => 'field_village',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Original Filename',
            'target' => 'field_original_filename',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Notes',
            'target' => 'field_notes',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Market Square Details',
            'target' => 'field_market_square_details',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Plan and Site Details',
            'target' => 'field_plan_and_site_details',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Reps Sequence No.',
            'target' => 'field_reps_sequence',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Media URL',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'EXIFRAW:GPSImgDirection',
            'target' => 'field_view_angle',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'junk1',
            'target' => 'field_media_url:url',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'junk2',
            'target' => 'field_media_file',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
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
  $export['metadata'] = $feeds_importer;

  return $export;
}

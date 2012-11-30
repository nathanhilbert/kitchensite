<?php
/**
 * @file
 * base_feature.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function base_feature_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'frontpage';
  $layout->admin_title = 'Frontpage';
  $layout->admin_description = 'This is the front age';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image_rotator',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'blurb',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'updates',
          1 => 'info_panels',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'image_rotator' => array(
        'type' => 'region',
        'title' => 'Image rotator',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'blurb' => array(
        'type' => 'region',
        'title' => 'Blurb',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'info_panels' => array(
        'type' => 'region',
        'title' => 'Info panels',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'updates' => array(
        'type' => 'region',
        'title' => 'updates',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $export['frontpage'] = $layout;

  return $export;
}

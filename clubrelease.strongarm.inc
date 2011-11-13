<?php
/**
 * @file
 * clubrelease.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function clubrelease_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab__gonggao';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous__gonggao';
  $strongarm->value = 0;
  $export['comment_anonymous__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode__gonggao';
  $strongarm->value = 1;
  $export['comment_default_mode__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page__gonggao';
  $strongarm->value = '50';
  $export['comment_default_per_page__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location__gonggao';
  $strongarm->value = 1;
  $export['comment_form_location__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview__gonggao';
  $strongarm->value = '1';
  $export['comment_preview__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field__gonggao';
  $strongarm->value = 1;
  $export['comment_subject_field__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment__gonggao';
  $strongarm->value = '2';
  $export['comment__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type__gonggao';
  $strongarm->value = '0';
  $export['language_content_type__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options__gonggao';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent__gonggao';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options__gonggao';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview__gonggao';
  $strongarm->value = '1';
  $export['node_preview__gonggao'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted__gonggao';
  $strongarm->value = 1;
  $export['node_submitted__gonggao'] = $strongarm;

  return $export;
}

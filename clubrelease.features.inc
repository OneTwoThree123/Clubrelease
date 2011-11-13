<?php
/**
 * @file
 * clubrelease.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clubrelease_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function clubrelease_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function clubrelease_node_info() {
  $items = array(
    '_gonggao' => array(
      'name' => t('社团公告'),
      'base' => 'node_content',
      'description' => t('发布社团通知、公告'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

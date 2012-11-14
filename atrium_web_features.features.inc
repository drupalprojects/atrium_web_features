<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_web_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_web_features_node_info() {
  $items = array(
    'web_feature' => array(
      'name' => t('Atrium Web Feature'),
      'module' => 'features',
      'description' => t('A link to a remotely hosted feature you wish to add to Atrium\'s Feature menu.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

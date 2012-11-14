<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_web_features_content_default_fields() {
  $fields = array();

  // Exported field: field_web_feature_icon
  $fields['web_feature-field_web_feature_icon'] = array(
    'field_name' => 'field_web_feature_icon',
    'type_name' => 'web_feature',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'icons',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '40x40',
      'min_resolution' => '40x40',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Icon',
      'weight' => '-3',
      'description' => 'Upload an icon for your Feature.  It must be exactly 40x40 and should preferably have a bit of transparent padding.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_web_feature_url
  $fields['web_feature-field_web_feature_url'] = array(
    'field_name' => 'field_web_feature_url',
    'type_name' => 'web_feature',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'iframeonly',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'iframeonly',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'iframe',
    'required' => '1',
    'multiple' => '0',
    'module' => 'iframe',
    'active' => '1',
    'attributes' => array(
      'class' => 'atrium-web-feature',
      'width' => '100%',
      'height' => '700',
      'frameborder' => '0',
      'scrolling' => 'yes',
      'transparency' => '0',
    ),
    'display' => '',
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
          'attributes' => array(
            'width' => '',
            'height' => '',
            'frameborder' => '0',
            'scrolling' => 'auto',
            'transparency' => '0',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'URL',
      'weight' => '-4',
      'description' => 'Enter the URL of your web feature.',
      'type' => 'iframe',
      'module' => 'iframe',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Icon');
  t('URL');

  return $fields;
}

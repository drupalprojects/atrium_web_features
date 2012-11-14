<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_web_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: create web_feature content
  $permissions['create web_feature content'] = array(
    'name' => 'create web_feature content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any web_feature content
  $permissions['delete any web_feature content'] = array(
    'name' => 'delete any web_feature content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own web_feature content
  $permissions['delete own web_feature content'] = array(
    'name' => 'delete own web_feature content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any web_feature content
  $permissions['edit any web_feature content'] = array(
    'name' => 'edit any web_feature content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own web_feature content
  $permissions['edit own web_feature content'] = array(
    'name' => 'edit own web_feature content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}

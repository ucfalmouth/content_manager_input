<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function content_manager_input_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor
  $permissions['access ckeditor'] = array(
    'name' => 'access ckeditor',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'super',
    ),
  );

  return $permissions;
}

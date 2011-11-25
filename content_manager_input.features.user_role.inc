<?php

/**
 * Implementation of hook_user_default_roles().
 */
function content_manager_input_user_default_roles() {
  $roles = array();

  // Exported role: Content Manager
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
  );

  return $roles;
}

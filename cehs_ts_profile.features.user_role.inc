<?php
/**
 * @file
 * cehs_ts_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cehs_ts_profile_user_default_roles() {
  $roles = array();

  // Exported role: payroll supervisor.
  $roles['payroll supervisor'] = array(
    'name' => 'payroll supervisor',
    'weight' => '2',
  );

  return $roles;
}

<?php
/**
 * @file
 * cehs_ts_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function cehs_ts_profile_default_profile2_type() {
  $items = array();
  $items['payroll_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "payroll_profile",
    "label" : "Payroll Profile",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}

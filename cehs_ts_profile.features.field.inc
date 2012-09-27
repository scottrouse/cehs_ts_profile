<?php
/**
 * @file
 * cehs_ts_profile.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function cehs_ts_profile_field_default_fields() {
  $fields = array();

  // Exported field: 'profile2-payroll_profile-field_direct_supervisor'.
  $fields['profile2-payroll_profile-field_direct_supervisor'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_direct_supervisor',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'uid' => array(
          'columns' => array(
            'uid' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'uid' => array(
          0 => 'uid',
        ),
      ),
      'locked' => '0',
      'module' => 'user_reference',
      'settings' => array(
        'profile2_private' => 1,
        'referenceable_roles' => array(
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
          14 => '14',
        ),
        'referenceable_status' => array(
          0 => '0',
          1 => '1',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '0',
      'type' => 'user_reference',
    ),
    'field_instance' => array(
      'bundle' => 'payroll_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p>Choose your <strong>Direct Supervisor</strong> from the drop-down list. This would be the person to whom your Payroll should be submitted for approval.</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_direct_supervisor',
      'label' => 'Direct Supervisor',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'profile2-payroll_profile-field_pay_cycle'.
  $fields['profile2-payroll_profile-field_pay_cycle'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pay_cycle',
      'field_permissions' => array(
        'type' => '1',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'biweekly' => 'Bi-Weekly',
          'semimonthly' => 'Semi-Monthly',
          'monthly' => 'Monthly',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 1,
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'payroll_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<p>Please select your <strong>Pay Cycle</strong>.</p>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_pay_cycle',
      'label' => 'Pay Cycle',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'profile2-payroll_profile-field_um_id'.
  $fields['profile2-payroll_profile-field_um_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_um_id',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 1,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'payroll_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_um_id',
      'label' => 'UM ID#',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => 0,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>Choose your <strong>Direct Supervisor</strong> from the drop-down list. This would be the person to whom your Payroll should be submitted for approval.</p>');
  t('<p>Please select your <strong>Pay Cycle</strong>.</p>');
  t('Direct Supervisor');
  t('Pay Cycle');
  t('UM ID#');

  return $fields;
}

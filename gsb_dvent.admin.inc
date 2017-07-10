<?php

/**
 * Functions related to dvent admin 
 */
/**
 * Admin configuration form for dvent
 */
function gsb_dvent_settings_form($form, $form_state) {

    $form['salesforce'] = array(
      '#title'=>'Salesforce DVent related configuration',
      '#type' => 'fieldset',
     );
    $form['salesforce']['grant_type'] = array(
      '#title'=>'Grant Type',
      '#type' => 'textfield',
      '#default_value' =>variable_get('grant_type'),
      '#required' => TRUE,
    );
    $form['salesforce']['client_id'] = array(
      '#title'=>'Client ID',
      '#type' => 'textfield',
      '#default_value' =>variable_get('client_id'),
      '#required' => TRUE,
    );
    $form['salesforce']['client_secret'] = array(
      '#title'=>'Client Secret',
      '#type' => 'textfield',
      '#default_value' =>variable_get('client_secret'),
      '#required' => TRUE,
    );
    $form['salesforce']['sf_username'] = array(
      '#title'=>'Username',
      '#type' => 'textfield',
      '#default_value' =>variable_get('sf_username'),
      '#required' => TRUE,
    );
    $form['salesforce']['sf_password'] = array(
      '#title'=>'Password',
      '#type' => 'textfield',
      '#default_value' =>variable_get('sf_password'),
      '#required' => TRUE,
    );
    $form['salesforce']['sf_token'] = array(
      '#title'=>'Security Token',
      '#type' => 'textfield',
      '#default_value' =>variable_get('sf_token'),
      '#required' => TRUE,
    );
    $form['salesforce']['login_url'] = array(
      '#title'=>'Login URL',
      '#type' => 'textfield',
      '#default_value' =>variable_get('login_url'),
      '#required' => TRUE,
    );
    $form['salesforce']['filter_ge'] = array(
      '#title'=>'Greater Than Equal Filter',
      '#type' => 'textfield',
      '#default_value' =>variable_get('filter_ge'),
      '#required' => TRUE,
    );
    $form['salesforce']['filter_le'] = array(
      '#title'=>'Less Than Equal Filter',
      '#type' => 'textfield',
      '#default_value' =>variable_get('filter_le'),
      '#required' => TRUE,
    );   
    return system_settings_form($form, $form_state);
}

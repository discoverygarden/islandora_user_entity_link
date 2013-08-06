<?php

/**
 * @file
 * Administration functionality for islandora_user_entity_link.
 */

/**
 * Admin form for islandora_user_entity_link.
 *
 * @param array $form
 *   The Drupal form definition.
 * @param array $form_state
 *   The Drupal form state.
 *
 * @return array
 *   The Drupal form definition.
 */
function islandora_user_entity_link_admin(array $form, array &$form_state) {
  return system_settings_form($form);
}

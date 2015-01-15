<?php
/**
 * @file
 * se_news_article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function se_news_article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news_article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news_article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_se_publication_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'descriptor',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_se_newsarticle_image' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|news_article|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function se_news_article_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'article_image_right';
  $ds_layout->settings = array(
    'regions' => array(
      'text' => array(
        0 => 'title',
        1 => 'field_se_publication_date',
        2 => 'body',
      ),
      'image' => array(
        3 => 'field_se_newsarticle_image',
      ),
    ),
    'fields' => array(
      'title' => 'text',
      'field_se_publication_date' => 'text',
      'body' => 'text',
      'field_se_newsarticle_image' => 'image',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news_article|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news_article';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_se_newsarticle_title',
        1 => 'field_se_publication_date',
        2 => 'body',
      ),
      'hidden' => array(
        3 => 'field_se_newsclip_image',
        6 => 'title',
        7 => 'redirect',
        8 => 'path',
      ),
      'right' => array(
        4 => 'field_se_newsarticle_image',
        5 => 'field_se_images',
        9 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_se_newsarticle_title' => 'left',
      'field_se_publication_date' => 'left',
      'body' => 'left',
      'field_se_newsclip_image' => 'hidden',
      'field_se_newsarticle_image' => 'right',
      'field_se_images' => 'right',
      'title' => 'hidden',
      'redirect' => 'hidden',
      'path' => 'hidden',
      '_add_existing_field' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news_article|form'] = $ds_layout;

  return $export;
}

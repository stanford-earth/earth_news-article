<?php
/**
 * @file
 * se_news_article.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function se_news_article_field_default_fields() {
  $fields = array();

  // Exported field: 'node-news_article-body'.
  $fields['node-news_article-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
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
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'news_article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-news_article-field_se_images'.
  $fields['node-news_article-field_se_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_se_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'news_article',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'default',
          ),
          'type' => 'file_rendered',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_se_images',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'image_field_caption' => 0,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 1,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'image_med-square',
          'insert_styles' => array(
            'auto' => 'auto',
            'icon_link' => 0,
            'image' => 'image',
            'image_12-col-banner' => 0,
            'image_3-col-header' => 0,
            'image_3-col-well-header' => 0,
            'image_3-col-well-profile' => 0,
            'image_4-col-header' => 0,
            'image_6-col-banner' => 0,
            'image_6-col-banner-short' => 0,
            'image_6-col-banner-tall' => 0,
            'image_6-col-header' => 0,
            'image_6-col-header-short' => 0,
            'image_8-col-banner' => 0,
            'image_8-col-banner-short' => 0,
            'image_8-col-banner-tall' => 0,
            'image_9-col-banner' => 0,
            'image_9-col-banner-short' => 0,
            'image_card' => 0,
            'image_full-page' => 0,
            'image_icon' => 0,
            'image_icon-square' => 0,
            'image_large' => 'image_large',
            'image_large-landscape' => 'image_large-landscape',
            'image_large-landscape-scaled' => 0,
            'image_large-profile' => 'image_large-profile',
            'image_large-profile-scaled' => 0,
            'image_large-scaled' => 0,
            'image_large-square' => 'image_large-square',
            'image_med-icon' => 0,
            'image_med-landscape' => 'image_med-landscape',
            'image_med-landscape-scaled' => 0,
            'image_med-profile' => 'image_med-profile',
            'image_med-profile-scaled' => 0,
            'image_med-square' => 'image_med-square',
            'image_medium' => 'image_medium',
            'image_medlg-profile' => 0,
            'image_page-width' => 0,
            'image_sm-landscape' => 0,
            'image_sm-profile' => 0,
            'image_sm-square' => 0,
            'image_square_thumbnail' => 0,
            'image_thmb-landscape' => 0,
            'image_thmb-profile' => 0,
            'image_thmb-square' => 0,
            'image_thumbnail' => 0,
            'image_xlarge-landscape' => 0,
            'image_xs-landscape' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'medium',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-news_article-field_se_newsarticle_image'.
  $fields['node-news_article-field_se_newsarticle_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_se_newsarticle_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'news_article',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'large',
          ),
          'type' => 'image',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_se_newsarticle_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'image_field_caption' => 0,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'icon_link' => 0,
            'image' => 0,
            'image_12-col-banner' => 0,
            'image_3-col-header' => 0,
            'image_3-col-well-header' => 0,
            'image_3-col-well-profile' => 0,
            'image_4-col-header' => 0,
            'image_6-col-banner' => 0,
            'image_6-col-banner-short' => 0,
            'image_6-col-banner-tall' => 0,
            'image_6-col-header' => 0,
            'image_6-col-header-short' => 0,
            'image_8-col-banner' => 0,
            'image_8-col-banner-short' => 0,
            'image_8-col-banner-tall' => 0,
            'image_9-col-banner' => 0,
            'image_9-col-banner-short' => 0,
            'image_card' => 0,
            'image_full-page' => 0,
            'image_icon' => 0,
            'image_icon-square' => 0,
            'image_large' => 0,
            'image_large-landscape' => 0,
            'image_large-landscape-scaled' => 0,
            'image_large-profile' => 0,
            'image_large-profile-scaled' => 0,
            'image_large-scaled' => 0,
            'image_large-square' => 0,
            'image_med-icon' => 0,
            'image_med-landscape' => 0,
            'image_med-landscape-scaled' => 0,
            'image_med-profile' => 0,
            'image_med-profile-scaled' => 0,
            'image_med-square' => 0,
            'image_medium' => 0,
            'image_medlg-profile' => 0,
            'image_page-width' => 0,
            'image_sm-landscape' => 0,
            'image_sm-profile' => 0,
            'image_sm-square' => 0,
            'image_square_thumbnail' => 0,
            'image_thmb-landscape' => 0,
            'image_thmb-profile' => 0,
            'image_thmb-square' => 0,
            'image_thumbnail' => 0,
            'image_xlarge-landscape' => 0,
            'image_xs-landscape' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'medium',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-news_article-field_se_newsarticle_title'.
  $fields['node-news_article-field_se_newsarticle_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_se_newsarticle_title',
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
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'news_article',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_se_newsarticle_title',
      'label' => 'Title',
      'required' => 1,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'content_editor_text_format' => 'content_editor_text_format',
            'ds_code' => 'ds_code',
            'filtered_html' => 'filtered_html',
            'full_html' => 'full_html',
            'plain_text' => 'plain_text',
          ),
          'allowed_formats_toggle' => 0,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'content_editor_text_format' => array(
                'weight' => '-10',
              ),
              'ds_code' => array(
                'weight' => '12',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '1',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
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
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-news_article-field_se_newsclip_image'.
  $fields['node-news_article-field_se_newsclip_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_se_newsclip_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'news_article',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'default',
          ),
          'type' => 'file_rendered',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_se_newsclip_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'image_field_caption' => 0,
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'icon_link' => 0,
            'image' => 0,
            'image_12-col-banner' => 0,
            'image_3-col-header' => 0,
            'image_3-col-well-header' => 0,
            'image_3-col-well-profile' => 0,
            'image_4-col-header' => 0,
            'image_6-col-banner' => 0,
            'image_6-col-banner-short' => 0,
            'image_6-col-banner-tall' => 0,
            'image_6-col-header' => 0,
            'image_6-col-header-short' => 0,
            'image_8-col-banner' => 0,
            'image_8-col-banner-short' => 0,
            'image_8-col-banner-tall' => 0,
            'image_9-col-banner' => 0,
            'image_9-col-banner-short' => 0,
            'image_card' => 0,
            'image_full-page' => 0,
            'image_icon' => 0,
            'image_icon-square' => 0,
            'image_large' => 0,
            'image_large-landscape' => 0,
            'image_large-landscape-scaled' => 0,
            'image_large-profile' => 0,
            'image_large-profile-scaled' => 0,
            'image_large-scaled' => 0,
            'image_large-square' => 0,
            'image_med-icon' => 0,
            'image_med-landscape' => 0,
            'image_med-landscape-scaled' => 0,
            'image_med-profile' => 0,
            'image_med-profile-scaled' => 0,
            'image_med-square' => 0,
            'image_medium' => 0,
            'image_medlg-profile' => 0,
            'image_page-width' => 0,
            'image_sm-landscape' => 0,
            'image_sm-profile' => 0,
            'image_sm-square' => 0,
            'image_square_thumbnail' => 0,
            'image_thmb-landscape' => 0,
            'image_thmb-profile' => 0,
            'image_thmb-square' => 0,
            'image_thumbnail' => 0,
            'image_xlarge-landscape' => 0,
            'image_xs-landscape' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'medium',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-news_article-field_se_publication_date'.
  $fields['node-news_article-field_se_publication_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_se_publication_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => '0',
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'news_article',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'date_only',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_se_publication_date',
      'label' => 'Publication Date',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-10:+3',
        ),
        'type' => 'date_popup',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Images');
  t('Publication Date');
  t('Title');

  return $fields;
}

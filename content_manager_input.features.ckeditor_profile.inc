<?php

/**
 * Implementation of hook_ckeditor_profile_defaults().
 */
function content_manager_input_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'rank' => array(
          '0' => '6',
          '1' => '5',
        ),
        'excl_mode' => '0',
        'excl' => 'admin/user/settings.edit-user-mail-*
*.edit-pages
*.edit-pathauto-ignore-words
*.edit-recipients
*.edit-reply
*.edit-description
*.edit-synonyms
*.edit-img-assist-textareas
*.edit-img-assist-paths
*.edit-nodewords-description
*.edit-nodewords-description-value
admin/content/nodewords/global*
*.edit-relatedlinks-fieldset-relatedlinks
*.edit-allowed-values-php
*.edit-allowed-values
*.edit-update-notify-emails
*.edit-googleanalytics-*
*.edit-piwik-*
*.edit-feedburner-useragents
*@*.edit-webform-*
webform@*.edit-extra-items
admin/*/logintoboggan
admin/settings/actions/configure/*
*.edit-target
*.edit-wysiwyg-filter-*
admin/build/views/*
admin/*',
        'simple_incl' => '*.edit-signature
admin/settings/site-information.*
admin/settings/site-maintenance.*
*.edit-page-help
*.edit-user-registration-help
*.edit-user-picture-guidelines
',
        'ckeditor_path' => '%m/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'show_fieldnamehint' => 't',
        'loadPlugins' => array(),
        'excl_regex' => '#(?:^.*:.*@admin/user/settings\\.edit-user-mail-.*$)|(?:^.*:.*@.*\\.edit-pages$)|(?:^.*:.*@.*\\.edit-pathauto-ignore-words$)|(?:^.*:.*@.*\\.edit-recipients$)|(?:^.*:.*@.*\\.edit-reply$)|(?:^.*:.*@.*\\.edit-description$)|(?:^.*:.*@.*\\.edit-synonyms$)|(?:^.*:.*@.*\\.edit-img-assist-textareas$)|(?:^.*:.*@.*\\.edit-img-assist-paths$)|(?:^.*:.*@.*\\.edit-nodewords-description$)|(?:^.*:.*@.*\\.edit-nodewords-description-value$)|(?:^.*:.*@admin/content/nodewords/global.*\\..*$)|(?:^.*:.*@.*\\.edit-relatedlinks-fieldset-relatedlinks$)|(?:^.*:.*@.*\\.edit-allowed-values-php$)|(?:^.*:.*@.*\\.edit-allowed-values$)|(?:^.*:.*@.*\\.edit-update-notify-emails$)|(?:^.*:.*@.*\\.edit-googleanalytics-.*$)|(?:^.*:.*@.*\\.edit-piwik-.*$)|(?:^.*:.*@.*\\.edit-feedburner-useragents$)|(?:^.*:.*@.*\\.edit-webform-.*$)|(?:^.*:webform@.*\\.edit-extra-items$)|(?:^.*:.*@admin/.*/logintoboggan\\..*$)|(?:^.*:.*@admin/settings/actions/configure/.*\\..*$)|(?:^.*:.*@.*\\.edit-target$)|(?:^.*:.*@.*\\.edit-wysiwyg-filter-.*$)|(?:^.*:.*@admin/build/views/.*\\..*$)|(?:^.*:.*@admin/.*\\..*$)#',
        'simple_incl_regex' => '#(?:^.*:.*@.*\\.edit-signature$)|(?:^.*:.*@admin/settings/site-information\\..*$)|(?:^.*:.*@admin/settings/site-maintenance\\..*$)|(?:^.*:.*@.*\\.edit-page-help$)|(?:^.*:.*@.*\\.edit-user-registration-help$)|(?:^.*:.*@.*\\.edit-user-picture-guidelines$)#',
      ),
      'roles' => array(),
    ),
    'content_manager_input' => array(
      'name' => 'content_manager_input',
      'settings' => array(
        'allow_user_conf' => 'f',
        'filters' => array(
          'filter/3' => 0,
          'filter/0' => 1,
          'messaging/1' => 0,
          'messaging/0' => 0,
        ),
        'ss' => '2',
        'min_rows' => '1',
        'excl_mode' => '0',
        'excl' => '',
        'simple_incl' => '',
        'default' => 't',
        'show_toggle' => 'f',
        'popup' => 'f',
        'skin' => 'kama',
        'uicolor' => 'default',
        'uicolor_textarea' => '<p>
	Click the <strong>UI Color Picker</strong> button to set your color preferences.</p>
',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Format\'],
    [\'BulletedList\',\'NumberedList\'],
    [\'Link\',\'Unlink\'],
    [\'HorizontalRule\',\'CreateDiv\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h1;h2;h3',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'default',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'tableresize' => array(
            'name' => 'tableresize',
            'desc' => 'Table Resize plugin',
            'path' => '%base_path%%editor_path%plugins/tableresize/',
            'buttons' => FALSE,
            'default' => 't',
          ),
        ),
        'excl_regex' => '',
        'simple_incl_regex' => '',
      ),
      'roles' => array(
        'Content Manager' => 'Content Manager',
      ),
    ),
  );
  return $data;
}

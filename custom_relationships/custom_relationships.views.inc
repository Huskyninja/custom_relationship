<?php

// @codingStandardsIgnoreFile

/**
 * @file
 * Quick start module for creating custom relationships with Views Database Connector in Drupal 8 Views.
 *
 * The single function in this includes module is to connect different external databases
 * brought into Drupal Views using Views Database Connector. It was built using information available
 * on drupal.org's support forum and the readme file contained in the Views Database Connector
 * module. The forum entry can be found at the following URL:
 *
 *   https://www.drupal.org/project/views_database_connector/issues/2487453
 *
 * Because the information contained in these sources can be confusing, the author of this module
 * is attempting to add clarification, below.
 * 
 * When constructing a new relationship, use the following format:
 *
 * @code
 * $data['DB_table_associated_with_view']['target_column_in_DB_table_associated_with_view'] = [
 *   'title' => t('Label Displayed in Add Relationship Screen'),
 *   'relationship' => [
 *     'base' => 'other_DB_table_to_connect_relationship_to',
 *     'base field' => 'column_in_other_DB_listed_above_under_base',
 *     'field' => 'target_column_in_DB_table_associated_with_view',
 *     'id' => 'views_database_connector_relationship',
 *     'label' => t('Label Displayed in Views of Relationship Once Established'),
 *   ],
 * ];
 * @endcode
 *
 * Please note that the id field is always set to 'views_database_connector_relationship'.
 */

/**
 * @param array $data
 */
function custom_relationships_views_data_alter(array &$data) {

  /**
   * Example relationships - this will create a two level relationship - from item to other to foo
   */
  
  /**

  $data['item']['otherID'] = [
    'title' => t('Item to Other Relationship'),
    'relationship' => [
      'base' => 'other',
      'base field' => 'otherID',
      'field' => 'otherID',
      'id' => 'views_database_connector_relationship',
      'label' => t('Item Database To Other Database on otherID'),
    ],
  ];

  $data['other']['fooID'] = [
    'title' => t('Other to Foo Relationship'),
    'relationship' => [
      'base' => 'foo',
      'base field' => 'fooID',
      'field' => 'fooID',
      'id' => 'views_database_connector_relationship',
      'label' => t('Catalog Database to Foo Database on fooID'),
    ],
  ];
  
   */

}

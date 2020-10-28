# Custom Relationships in Views Database Connector

Quick start module for creating custom relationships with Views Database Connector in Drupal 8 Views.

## Requirements

Views Database Connector 8.x-1.2 or greater - https://www.drupal.org/project/views_database_connector

## Installation

Drop custom_relationships folder (the one with the .yml & .inc file) into the /modules/custom directory 
(so it would be /modules/custom/custom_relationships). Composer is not supported (you'll overwrite 
something).

## Use

The file custom_relationships.views.inc will need to be edited to meet the individual requirement of your
Views Database Connector custom database. This file contains clarified instructions and a sample to 
bootstrap your Views' relationships.

## Details

This module was built using information available on drupal.org's support forum and the readme file 
contained in the Views Database Connector module. The forum entry can be found at the following URL:

https://www.drupal.org/project/views_database_connector/issues/2487453

Because the information contained in these sources can be confusing, the author of this module is 
attempting to add clarification. If I had found somthing like this first when first working with 
Views Database Connector I would have saved myslelf a couple of hours.

This module is shared in the hope that it can assist you in your projects.

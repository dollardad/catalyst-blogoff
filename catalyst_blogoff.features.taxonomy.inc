<?php
/**
 * @file
 * catalyst_blogoff.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function catalyst_blogoff_taxonomy_default_vocabularies() {
  return array(
    'catalyst' => array(
      'name' => 'Catalyst',
      'machine_name' => 'catalyst',
      'description' => 'Tags for the blog',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

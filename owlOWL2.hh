#ifndef OWL2__GUARD
#define OWL2__GUARD
/*
From line 127 to 454
owlHasKeyLoop<owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y )> { owlDataPropertyAssertion<owlDataPropertyAssertion( X, P, V1 )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, V1 )> } --> owlHasKeyLoop<owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )>, owlSameIndividual<owlSameIndividual( X, Y )>
owlHasKey<owlHasKey( E, P, C )> { owlClassAssertion<owlClassAssertion( X, C, true )> } --> owlHasKeyLoop<owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y )>
owlOneOfLoop<owlOneOfLoop( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) )> --> owlOneOfLoop<owlOneOfLoop( C, ( std :: next )( ( *IT ) ), ITEND )>, owlClassAssertion<owlClassAssertion( ( *( *IT ) ), C, true )>
owlHasValueData<owlHasValueData( C, P, Y )> { owlDataPropertyAssertion<owlDataPropertyAssertion( U, P, Y )>, owlClassAssertion<owlClassAssertion( U, C, true )>, owlDataProperty<owlDataProperty( P )> } --> owlClassAssertion<owlClassAssertion( U, C, true )>, owlDataPropertyAssertion<owlDataPropertyAssertion( U, P, Y )>
owlMaxCardinality<owlMaxCardinality( C, P, 0 )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, _ )>, owlClassAssertion<owlClassAssertion( U, C, true )> } --> owlSameIndividual<owlSameIndividual( Y1, Y2 )>
owlSomeValuesFrom<owlSomeValuesFrom( C, P, Y )> { owlClassAssertion<owlClassAssertion( V, Y, true )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, V )> } --> logicalName<logicalName( emptyString, V )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, V )>, owlClassAssertion<owlClassAssertion( U, C, true )>
owlObjectPropertyChain<owlObjectPropertyChain( PC, P, 0, N )> { constructPropertyChain<constructPropertyChain( PC, I, X, Y, N )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )> } --> constructPropertyChain<constructPropertyChain( PC, 0, X, Y, N )>
logicalName<logicalName( emptyString, V )> { queryClassification<queryClassification( X )>, owlAllValuesFrom<owlAllValuesFrom( C, P, Y )>, logicalName<logicalName( emptyString, V )>, owlClassAssertion<owlClassAssertion( W, Y, true )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, W )> } --> built-in<afficher( "passage" )>, res<res( URIC )>
owlIntersectionClass<owlIntersectionClass( C, ( *( *IT ) ), I )> { owlCandidatsIntersection<owlCandidatsIntersection( X, C, I )>, owlClassAssertion<owlClassAssertion( X, V, true )> } --> owlClassAssertion<owlClassAssertion( X, C1, true )>, owlCandidatsIntersection<owlCandidatsIntersection( X, C, 0 )>
owlUnionClass<owlUnionClass( C, ( *( *IT ) ) )> { owlClassAssertion<owlClassAssertion( X, V, true )> } --> owlClassAssertion<owlClassAssertion( X, C, true )>
owlUnionOf<owlUnionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) )> --> owlUnionOf<owlUnionOf( C, ( std :: next )( ( *IT ) ), ITEND )>, owlUnionClass<owlUnionClass( C, ( *( *IT ) ) )>
owlOneOf<owlOneOf( C, S )> --> owlOneOfLoop<owlOneOfLoop( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) )>
owlUnionOf1<owlUnionOf1( C, S )> { owlUnionOf1<owlUnionOf1( C2, S )> } --> owlEquivalentClass<owlEquivalentClass( C1, C2 )>, owlUnionOf<owlUnionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) )>
queryClassification<queryClassification( X )> { logicalName<logicalName( URIC, C )>, owlClassAssertion<owlClassAssertion( X, C, true )> } --> built-in<afficher( "passage" )>, res<res( URIC )>
owlDataPropertyRange<owlDataPropertyRange( P, DR )> { owlDataPropertyAssertion<owlDataPropertyAssertion( _, P, Y )> } -->
owlDataPropertyDomain<owlDataPropertyDomain( P, DP )> { owlDataPropertyAssertion<owlDataPropertyAssertion( X, P, _ )> } --> owlClassAssertion<owlClassAssertion( X, DP, true )>
owlMaxQualifiedCardinality<owlMaxQualifiedCardinality( X, P, C, 0 )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, Y )>, owlClassAssertion<owlClassAssertion( U, X, true )> } --> owlSameIndividual<owlSameIndividual( Y1, Y2 )>
owlEquivalentDataProperty<owlEquivalentDataProperty( P, P )> --> owlDataSubPropertyOf<owlDataSubPropertyOf( A, B )>
owlComplementOf<owlComplementOf( A, NOTA )> { owlClassAssertion<owlClassAssertion( X, A, true )>, owlNamedIndividual<owlNamedIndividual( X )> } --> owlClassAssertion<owlClassAssertion( X, NOTA, false )>
owlInverseObjectProperty<owlInverseObjectProperty( P1, P2 )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P1, Y )>, owlInverseObjectProperty<owlInverseObjectProperty( P1, P2 )> } --> owlInverseObjectProperty<owlInverseObjectProperty( P2, P1 )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( Y, P2, X )>
owlCandidatsIntersection<owlCandidatsIntersection( X, C, 0 )> { owlIntersectionOf<owlIntersectionOf( C, ITEND, ITEND, I )>, owlClassAssertion<owlClassAssertion( X, V, true )>, owlIntersectionClass<owlIntersectionClass( C, V, I )> } --> owlClassAssertion<owlClassAssertion( X, C, true )>, owlCandidatsIntersection<owlCandidatsIntersection( X, C, ( I + 1 ) )>
owlSameIndividual<owlSameIndividual( X, Y )> { owlDifferentIndividual<owlDifferentIndividual( X, Y )>, owlSameIndividual<owlSameIndividual( X, Y )> } --> built-in<Y>
owlAsymmetricObjectProperty<owlAsymmetricObjectProperty( P )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlAsymmetricObjectProperty<owlAsymmetricObjectProperty( P )> } --> owlNegativeObjectAssertion<owlNegativeObjectAssertion( X, P, Y )>
owlDisjointClass<owlDisjointClass( L )> { owlClassAssertion<owlClassAssertion( X, A, true )>, owlDisjointClass<owlDisjointClass( L )> } -->
owlDataPropertyAssertion<owlDataPropertyAssertion( X, P, Y )> { owlHasValueData<owlHasValueData( C, P, Y )>, owlDataPropertyDomain<owlDataPropertyDomain( P, DP )>, owlDataPropertyAssertion<owlDataPropertyAssertion( X, P2, Y )>, owlHasKeyLoop<owlHasKeyLoop( IT, ITEND, X, Y )>, owlDisjointDataProperty<owlDisjointDataProperty( L )>, owlDataPropertyRange<owlDataPropertyRange( P, DR )>, owlNegativeDataAssertion<owlNegativeDataAssertion( X, P, Y )> } --> owlHasKeyLoop<owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )>, owlClassAssertion<owlClassAssertion( X, DP, true )>
owlObjectSubPropertyOf<owlObjectSubPropertyOf( A, B )> { owlObjectSubPropertyOf<owlObjectSubPropertyOf( A, B )> } -->
owlDifferentIndividual<owlDifferentIndividual( X, Y )> { owlSameIndividual<owlSameIndividual( X, Y )>, owlDifferentIndividual<owlDifferentIndividual( X, Y )> } -->
owlClassAssertion<owlClassAssertion( X, A, B )> { owlHasKey<owlHasKey( E, P, C )>, owlDataProperty<owlDataProperty( P )>, owlClassAssertion<owlClassAssertion( X, A, B )>, owlDisjointClass<owlDisjointClass( L )>, owlCandidatsIntersection<owlCandidatsIntersection( X, C, I )>, owlObjectProperty<owlObjectProperty( P )>, owlUnionClass<owlUnionClass( C, V )>, owlHasValueData<owlHasValueData( C, P, Y )>, queryClassification<queryClassification( X )>, owlMaxQualifiedCardinality<owlMaxQualifiedCardinality( X, P, C, 0 )>, owlComplementOf<owlComplementOf( A, NOTA )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, V )>, owlSomeValuesFrom<owlSomeValuesFrom( C, P, Y )>, owlIntersectionClass<owlIntersectionClass( C, V, 0 )>, owlMaxCardinality<owlMaxCardinality( C, P, 0 )>, logicalName<logicalName( URI, W )>, owlHasValueObject<owlHasValueObject( C, P, Y )>, owlAllValuesFrom<owlAllValuesFrom( C, P, Y )> } --> owlDataPropertyAssertion<owlDataPropertyAssertion( U, P, Y )>, res<res( URIC )>, logicalName<logicalName( emptyString, V )>, owlHasKeyLoop<owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y )>, owlSameIndividual<owlSameIndividual( Y1, Y2 )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, V )>, built-in<afficher( "passage" )>, owlCandidatsIntersection<owlCandidatsIntersection( X, C, 0 )>, owlNamedIndividual<owlNamedIndividual( X )>, owlClassAssertion<owlClassAssertion( X, C, true )>, owlClass<owlClass( C )>
constructPropertyChain<constructPropertyChain( PC, 0, X, Y, N )> { owlObjectPropertyChain<owlObjectPropertyChain( PC, P, J, N )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( Y, P, Z )> } --> owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, PC, Y )>, constructPropertyChain<constructPropertyChain( PC, ( I + 1 ), X, Z, N )>
owlNegativeObjectAssertion<owlNegativeObjectAssertion( X, P, Y )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlNegativeObjectAssertion<owlNegativeObjectAssertion( X, P, Y )> } -->
owlObjectProperty<owlObjectProperty( P )> { owlClassAssertion<owlClassAssertion( U, C, true )>, owlHasValueObject<owlHasValueObject( C, P, Y )>, owlObjectProperty<owlObjectProperty( P )> } --> owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, Y )>, owlEquivalentObjectProperty<owlEquivalentObjectProperty( P, P )>, owlObjectSubPropertyOf<owlObjectSubPropertyOf( P, P )>
owlReflexiveObjectProperty<owlReflexiveObjectProperty( P )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlReflexiveObjectProperty<owlReflexiveObjectProperty( P )> } --> owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, X )>
owlIntersectionOf<owlIntersectionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ), 0 )> { owlCandidatsIntersection<owlCandidatsIntersection( X, C, I )> } --> owlClassAssertion<owlClassAssertion( X, C, true )>, owlIntersectionOf<owlIntersectionOf( C, ( std :: next )( ( *IT ) ), ITEND, ( I + 1 ) )>, owlIntersectionClass<owlIntersectionClass( C, ( *( *IT ) ), I )>
owlObjectPropertyRange<owlObjectPropertyRange( P, C )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlObjectPropertyRange<owlObjectPropertyRange( P, C )> } --> owlClassAssertion<owlClassAssertion( Y, DP, true )>
owlClass<owlClass( C )> { owlClass<owlClass( C )> } --> owlEquivalentClass<owlEquivalentClass( C, C )>, owlSubclassOf<owlSubclassOf( A, A )>
owlObjectPropertyDomain<owlObjectPropertyDomain( P, C )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlObjectPropertyDomain<owlObjectPropertyDomain( P, C )> } --> owlClassAssertion<owlClassAssertion( X, DP, true )>
owlIntersectionOf1<owlIntersectionOf1( C, S )> --> owlIntersectionOf<owlIntersectionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ), 0 )>
owlTransitiveObjectProperty<owlTransitiveObjectProperty( P )> { owlTransitiveObjectProperty<owlTransitiveObjectProperty( P )> } -->
owlDisjointObjectProperty<owlDisjointObjectProperty( L )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P1, Y )>, owlDisjointObjectProperty<owlDisjointObjectProperty( L )> } -->
res<res( X )> { res<res( X )> } --> built-in<afficher( X )>
owlDataSubPropertyOf<owlDataSubPropertyOf( P, P )> { owlDataSubPropertyOf<owlDataSubPropertyOf( B, C )> } --> owlEquivalentDataProperty<owlEquivalentDataProperty( A, B )>, owlDataSubPropertyOf<owlDataSubPropertyOf( A, C )>
owlSymmetricObjectProperty<owlSymmetricObjectProperty( P )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlSymmetricObjectProperty<owlSymmetricObjectProperty( P )> } --> owlObjectPropertyAssertion<owlObjectPropertyAssertion( Y, P, X )>
owlDataProperty<owlDataProperty( P )> { owlClassAssertion<owlClassAssertion( U, C, true )>, owlHasValueData<owlHasValueData( C, P, Y )>, owlDataProperty<owlDataProperty( P )> } --> owlDataPropertyAssertion<owlDataPropertyAssertion( U, P, Y )>, owlDataSubPropertyOf<owlDataSubPropertyOf( P, P )>, owlEquivalentObjectProperty<owlEquivalentObjectProperty( P, P )>, owlEquivalentDataProperty<owlEquivalentDataProperty( P, P )>, owlObjectSubPropertyOf<owlObjectSubPropertyOf( P, P )>
owlIrreflexiveObjectProperty<owlIrreflexiveObjectProperty( P )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, X )>, owlIrreflexiveObjectProperty<owlIrreflexiveObjectProperty( P )> } -->
owlNamedIndividual<owlNamedIndividual( C )> { owlAllValuesFrom<owlAllValuesFrom( C, P, Y )>, owlComplementOf<owlComplementOf( A, NOTA )>, owlNamedIndividual<owlNamedIndividual( C )> } --> owlClassAssertion<owlClassAssertion( X, NOTA, false )>
owlFunctionalObjectProperty<owlFunctionalObjectProperty( P )> { owlFunctionalObjectProperty<owlFunctionalObjectProperty( P )> } -->
owlDisjointDataProperty<owlDisjointDataProperty( L )> { owlDataPropertyAssertion<owlDataPropertyAssertion( X, P1, Y )> } -->
owlInverseFunctionalObjectProperty<owlInverseFunctionalObjectProperty( P )> { owlInverseFunctionalObjectProperty<owlInverseFunctionalObjectProperty( P )> } -->
owlAllValuesFrom<owlAllValuesFrom( C, P, Y )> { logicalName<logicalName( URIV, V )>, owlNamedIndividual<owlNamedIndividual( X )>, owlClassAssertion<owlClassAssertion( U, C, true )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, V )> } --> owlClassAssertion<owlClassAssertion( V, Y, true )>
owlSubclassOf<owlSubclassOf( A, B )> { owlSubclassOf<owlSubclassOf( A, B )> } --> owlClass<owlClass( C1 )>
owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )> { owlMaxQualifiedCardinality<owlMaxQualifiedCardinality( X, P, C, 0 )>, owlMaxCardinality<owlMaxCardinality( C, P, 0 )>, owlClassAssertion<owlClassAssertion( V, Y, true )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( X, P, Y )>, owlHasKeyLoop<owlHasKeyLoop( IT, ITEND, X, Y )>, owlNegativeObjectAssertion<owlNegativeObjectAssertion( X, P, Y )>, owlReflexiveObjectProperty<owlReflexiveObjectProperty( P )>, logicalName<logicalName( URI, W )>, owlIrreflexiveObjectProperty<owlIrreflexiveObjectProperty( P )>, constructPropertyChain<constructPropertyChain( PC, I, X, Y, N )>, owlInverseObjectProperty<owlInverseObjectProperty( P1, P2 )>, owlDisjointObjectProperty<owlDisjointObjectProperty( L )>, owlAsymmetricObjectProperty<owlAsymmetricObjectProperty( P )>, owlHasValueObject<owlHasValueObject( C, P, Y )>, owlAllValuesFrom<owlAllValuesFrom( C, P, Y )>, owlObjectPropertyDomain<owlObjectPropertyDomain( P, DP )>, owlObjectPropertyChain<owlObjectPropertyChain( PC, P, 0, N )>, owlObjectPropertyRange<owlObjectPropertyRange( P, DP )>, owlSymmetricObjectProperty<owlSymmetricObjectProperty( P )>, owlSomeValuesFrom<owlSomeValuesFrom( C, P, Y )> } --> owlNegativeObjectAssertion<owlNegativeObjectAssertion( X, P, Y )>, owlHasKeyLoop<owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )>, owlSameIndividual<owlSameIndividual( Y1, Y2 )>, constructPropertyChain<constructPropertyChain( PC, 0, X, Y, N )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( Y, P2, X )>, owlClassAssertion<owlClassAssertion( X, DP, true )>
owlEquivalentClass<owlEquivalentClass( A, B )> { owlEquivalentClass<owlEquivalentClass( A, B )> } -->
owlNegativeDataAssertion<owlNegativeDataAssertion( X, P, Y )> { owlDataPropertyAssertion<owlDataPropertyAssertion( X, P, Y )> } -->
owlHasValueObject<owlHasValueObject( C, P, Y )> { owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, Y )>, owlClassAssertion<owlClassAssertion( U, C, true )>, owlObjectProperty<owlObjectProperty( P )> } --> owlClassAssertion<owlClassAssertion( U, C, true )>, owlObjectPropertyAssertion<owlObjectPropertyAssertion( U, P, Y )>
owlEquivalentObjectProperty<owlEquivalentObjectProperty( A, B )> { owlEquivalentObjectProperty<owlEquivalentObjectProperty( A, B )> } -->

(constraint) owlPrefix( ( ?( std :: string ) ), ( ?( std :: string ) ) ), persistent
(constraint) owlClass( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlDataProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlNamedIndividual( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlSubclassOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) owlEquivalentClass( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) owlObjectSubPropertyOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) owlDataSubPropertyOf( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <0>, <1>, <0,1> }, persistent
(constraint) owlEquivalentObjectProperty( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) owlEquivalentDataProperty( ( +( std :: string ) ), ( +( std :: string ) ) ), persistent
(constraint) owlObjectPropertyDomain( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1> }, persistent
(constraint) owlObjectPropertyRange( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1> }, persistent
(constraint) owlClassAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( +bool ) ), indexes: { <0,2>, <1,2>, <2>, <0,1,2> }, persistent
(constraint) owlDisjointClass( ( ?( std :: vector  )< ( std :: string ) > ) ), indexes: { <0> }, persistent
(constraint) owlNegativeObjectAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1,2> }, persistent
(constraint) owlObjectPropertyAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <2>, <0,1,2>, <0,2>, <1>, <1,2>, <0> }, persistent
(constraint) owlSameIndividual( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) owlDifferentIndividual( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) owlInverseObjectProperty( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <0> }, persistent
(constraint) owlSymmetricObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlAsymmetricObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlDisjointObjectProperty( ( ?( std :: vector  )< ( std :: string ) > ) ), indexes: { <0> }, persistent
(constraint) owlDisjointDataProperty( ( ?( std :: vector  )< ( std :: string ) > ) ), persistent
(constraint) owlReflexiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlIrreflexiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlFunctionalObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlFunctionalDataProperty( ( +( std :: string ) ) ), persistent
(constraint) owlInverseFunctionalObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlTransitiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlDataPropertyAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?Value ) ), indexes: { <0,2>, <1,2>, <1>, <0>, <0,1,2> }, persistent
(constraint) owlNegativeDataAssertion( ( +( std :: string ) ), ( +( std :: string ) ), ( +Value ) ), indexes: { <0,1,2> }, persistent
(constraint) owlDataPropertyRange( ( +( std :: string ) ), ( +( std :: shared_ptr )< AnySimpleType > ) ), indexes: { <0> }, persistent
(constraint) owlDataPropertyDomain( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) owlUnionClass( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <1> }, persistent
(constraint) owlUnionOf1( ( +( std :: string ) ), ( +set ) ), indexes: { <1> }, persistent
(constraint) ##owlUnionOf( ( +( std :: string ) ), ( +iterator ), ( +iterator ) ), persistent
(constraint) owlIntersectionOf1( ( +( std :: string ) ), ( +set ) ), persistent
(constraint) owlIntersectionClass( ( +( std :: string ) ), ( +( std :: string ) ), ( +int ) ), indexes: { <0,1,2>, <1,2>, <1>, <0> }, persistent
(constraint) owlIntersectionOf( ( +( std :: string ) ), ( +iterator ), ( +iterator ), ( +int ) ), indexes: { <0,3> }, persistent
(constraint) owlCandidatsIntersection( ( +( std :: string ) ), ( +( std :: string ) ), ( +int ) ), indexes: { <0,1,2>, <1,2> }, persistent
(constraint) owlTempClassAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ) ), persistent
(constraint) owlAllValuesFrom( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <0,2>, <0> }, persistent
(constraint) owlSomeValuesFrom( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <2>, <0>, <1,2> }, persistent
(constraint) owlObjectPropertyChain( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?int ), ( ?int ) ), indexes: { <0,3>, <1,2>, <0,1,3> }, persistent
(constraint) constructPropertyChain( ( ?( std :: string ) ), ( ?int ), ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?int ) ), indexes: { <3>, <0,4> }, persistent
(constraint) owlComplementOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint) querySuperClassOf( ( ?( std :: string ) ) ), persistent
(constraint) querySubClassOf( ( ?( std :: string ) ) ), persistent
(constraint) queryClassification( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) queryClassificationTemp( ( ?( std :: string ) ) ), persistent
(constraint) res( ( +( std :: string ) ) ), indexes: { <0> }, persistent
(constraint) queryFullUri( ( ?( std :: string ) ) ), persistent
(constraint) logicalName( ( +( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <1>, <0,1> }, persistent
(constraint) owlMaxCardinality( ( ?( std :: string ) ), ( ?( std :: string ) ), ( +int ) ), indexes: { <0,2>, <1,2> }, persistent
(constraint) owlMaxQualifiedCardinality( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ), ( +int ) ), indexes: { <0,3>, <2,3>, <1,3> }, persistent
(constraint) owlHasValueObject( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1>, <1,2> }, persistent
(constraint) owlHasValueData( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?Value ) ), indexes: { <0>, <0,1>, <1,2> }, persistent
(constraint) owlOneOf( ( ?( std :: string ) ), ( ?set ) ), persistent
(constraint) ##owlOneOfLoop( ( ?( std :: string ) ), ( +iteratorSet ), ( +iteratorSet ) ), persistent
(constraint) owlHasKey( ( ?( std :: string ) ), ( ?set ), ( ?( std :: string ) ) ), indexes: { <2> }, persistent
(constraint) owlHasKeyLoop( ( +iteratorSet ), ( +iteratorSet ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <2,3> }, persistent
(rule) res( X ) \ res( X ) <=> true ;;
(rule) owlClass( C ) \ owlClass( C ) <=> true ;;
(rule) owlNamedIndividual( C ) \ owlNamedIndividual( C ) <=> true ;;
(rule) owlObjectProperty( P ) \ owlObjectProperty( P ) <=> true ;;
(rule) owlDataProperty( P ) \ owlDataProperty( P ) <=> true ;;
(rule) owlObjectPropertyDomain( P, C ) \ owlObjectPropertyDomain( P, C ) <=> true ;;
(rule) owlObjectPropertyRange( P, C ) \ owlObjectPropertyRange( P, C ) <=> true ;;
(rule) owlDisjointClass( L ) \ owlDisjointClass( L ) <=> true ;;
(rule) owlNegativeObjectAssertion( X, P, Y ) \ owlNegativeObjectAssertion( X, P, Y ) <=> true ;;
(rule) owlDisjointObjectProperty( L ) \ owlDisjointObjectProperty( L ) <=> true ;;
(rule) owlSameIndividual( X, Y ) \ owlSameIndividual( X, Y ) <=> true ;;
(rule) owlDifferentIndividual( X, Y ) \ owlDifferentIndividual( X, Y ) <=> true ;;
(rule) owlInverseObjectProperty( P1, P2 ) \ owlInverseObjectProperty( P1, P2 ) <=> true ;;
(rule) owlSymmetricObjectProperty( P ) \ owlSymmetricObjectProperty( P ) <=> true ;;
(rule) owlAsymmetricObjectProperty( P ) \ owlAsymmetricObjectProperty( P ) <=> true ;;
(rule) owlReflexiveObjectProperty( P ) \ owlReflexiveObjectProperty( P ) <=> true ;;
(rule) owlIrreflexiveObjectProperty( P ) \ owlIrreflexiveObjectProperty( P ) <=> true ;;
(rule) owlFunctionalObjectProperty( P ) \ owlFunctionalObjectProperty( P ) <=> true ;;
(rule) owlInverseFunctionalObjectProperty( P ) \ owlInverseFunctionalObjectProperty( P ) <=> true ;;
(rule) owlTransitiveObjectProperty( P ) \ owlTransitiveObjectProperty( P ) <=> true ;;
(rule) owlSubclassOf( A, B ) \ owlSubclassOf( A, B ) <=> true ;;
(rule) owlObjectSubPropertyOf( A, B ) \ owlObjectSubPropertyOf( A, B ) <=> true ;;
(rule) owlClassAssertion( X, A, B ) \ owlClassAssertion( X, A, B ) <=> true ;;
(rule) owlObjectPropertyAssertion( X, P, Y ) \ owlObjectPropertyAssertion( X, P, Y ) <=> true ;;
(rule) owlEquivalentClass( A, B ) \ owlEquivalentClass( A, B ) <=> true ;;
(rule) owlEquivalentObjectProperty( A, B ) \ owlEquivalentObjectProperty( A, B ) <=> true ;;
(rule) DisjointClass @ owlDisjointClass( L ), owlClassAssertion( X, A, true ), owlClassAssertion( X, B, true ) <=> ( contains( A, L ) && contains( B, L ) ) | failure ;;
(rule) NegativeObjectAssertion @ owlNegativeObjectAssertion( X, P, Y ), owlObjectPropertyAssertion( X, P, Y ) <=> failure ;;
(rule) DisjointProperty @ owlDisjointObjectProperty( L ), owlObjectPropertyAssertion( X, P1, Y ), owlObjectPropertyAssertion( X, P2, Y ) <=> ( contains( P1, L ) && contains( P2, L ) ) | failure ;;
(rule) irreflexiveProperty @ owlIrreflexiveObjectProperty( P ), owlObjectPropertyAssertion( X, P, X ) <=> failure ;;
(rule) NegativeDataAssertion @ owlNegativeDataAssertion( X, P, Y ), owlDataPropertyAssertion( X, P, Y ) <=> failure ;;
(rule) DisjointDataProperty @ owlDisjointDataProperty( L ), owlDataPropertyAssertion( X, P1, Y ), owlDataPropertyAssertion( X, P2, Y ) <=> ( contains( P1, L ) && contains( P2, L ) ) | failure ;;
(rule) owlSubclassOf( C1, C2 ) ==> ( owlClass( C1 ), owlClass( C2 ) ) ;;
(rule) owlClassAssertion( X, C, true ) ==> ( owlClass( C ), owlNamedIndividual( X ) ) ;;
(rule) owlClass( A ) ==> owlSubclassOf( A, A ) ;;
(rule) owlClass( C ) ==> owlEquivalentClass( C, C ) ;;
(rule) owlClass( C ) ==> owlSubclassOf( C, owlThing ) ;;
(rule) owlClass( C ) ==> owlSubclassOf( owlNothing, C ) ;;
(rule) owlObjectProperty( P ) ==> ( owlObjectSubPropertyOf( P, P ), owlEquivalentObjectProperty( P, P ) ) ;;
(rule) owlDataProperty( P ) ==> ( owlObjectSubPropertyOf( P, P ), owlEquivalentObjectProperty( P, P ) ) ;;
(rule) owlDataProperty( P ) ==> ( owlDataSubPropertyOf( P, P ), owlEquivalentDataProperty( P, P ) ) ;;
(rule) owlDataSubPropertyOf( A, B ), owlDataSubPropertyOf( B, C ) ==> guard_condition( A, B, C ) | owlDataSubPropertyOf( A, C ) ;;
(rule) owlEquivalentDataProperty( A, B ) ==> different( A, B ) | ( owlDataSubPropertyOf( A, B ), owlDataSubPropertyOf( B, A ) ) ;;
(rule) owlDataSubPropertyOf( A, B ), owlDataSubPropertyOf( B, A ) ==> different( A, B ) | owlEquivalentDataProperty( A, B ) ;;
(rule) objectPropertydomain @ owlObjectPropertyDomain( P, DP ), owlObjectPropertyAssertion( X, P, Y ) ==> owlClassAssertion( X, DP, true ) ;;
(rule) objectPropertyCoDomain @ owlObjectPropertyRange( P, DP ), owlObjectPropertyAssertion( X, P, Y ) ==> owlClassAssertion( Y, DP, true ) ;;
(rule) DataPropertyDomain @ owlDataPropertyDomain( P, DP ), owlDataPropertyAssertion( X, P, _ ) ==> owlClassAssertion( X, DP, true ) ;;
(rule) DataPropertyRange @ owlDataPropertyRange( P, DR ), owlDataPropertyAssertion( _, P, Y ) <=> invalidType( DR, Y ) | failure ;;
(rule) sameIndividual @ owlSameIndividual( X, Y ) ==> ( !( X == Y ) ) | X %= Y ;;
(rule) DifferentIndividual @ owlDifferentIndividual( X, Y ), owlSameIndividual( X, Y ) <=> failure ;;
(rule) inverseProperty @ owlInverseObjectProperty( P1, P2 ), owlObjectPropertyAssertion( X, P1, Y ) ==> owlObjectPropertyAssertion( Y, P2, X ) ;;
(rule) owlInverseObjectProperty( P1, P2 ) ==> owlInverseObjectProperty( P2, P1 ) ;;
(rule) symmetricProperty @ owlSymmetricObjectProperty( P ), owlObjectPropertyAssertion( X, P, Y ) ==> owlObjectPropertyAssertion( Y, P, X ) ;;
(rule) AsymmetricProperty1 @ owlAsymmetricObjectProperty( P ), owlObjectPropertyAssertion( X, P, Y ) ==> owlNegativeObjectAssertion( X, P, Y ) ;;
(rule) reflexiveProperty @ owlReflexiveObjectProperty( P ), owlObjectPropertyAssertion( X, P, Y ) ==> ( owlObjectPropertyAssertion( X, P, X ), owlObjectPropertyAssertion( Y, P, Y ) ) ;;
(rule) owlUnionOf1( C, S ) ==> owlUnionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) ) ;;
(rule) owlUnionOf( C, ITEND, ITEND ) <=> success ;;
(rule) owlUnionOf( C, IT, ITEND ) <=> ( owlUnionClass( C, ( *( *IT ) ) ), owlUnionOf( C, ( std :: next )( ( *IT ) ), ITEND ) ) ;;
(rule) owlClassAssertion( X, V, true ) \ owlUnionClass( C, V ) <=> owlClassAssertion( X, C, true ) ;;
(rule) owlUnionOf1( C1, S ), owlUnionOf1( C2, S ) ==> owlEquivalentClass( C1, C2 ) ;;
(rule) r0 @ owlIntersectionOf1( C, S ) ==> owlIntersectionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ), 0 ) ;;
(rule) r1 @ owlIntersectionOf( C, IT, ITEND, I ) <=> ( IT != ITEND ) | ( owlIntersectionClass( C, ( *( *IT ) ), I ), owlIntersectionOf( C, ( std :: next )( ( *IT ) ), ITEND, ( I + 1 ) ) ) ;;
(rule) r2 @ owlClassAssertion( X, V, true ), owlIntersectionClass( C, V, 0 ) ==> owlCandidatsIntersection( X, C, 0 ) ;;
(rule) r3 @ owlIntersectionClass( C, V, I ), owlCandidatsIntersection( X, C, I ), owlClassAssertion( X, V, true ) ==> owlCandidatsIntersection( X, C, ( I + 1 ) ) ;;
(rule) r5 @ owlIntersectionOf( C, ITEND, ITEND, I ) \ owlCandidatsIntersection( X, C, I ) <=> owlClassAssertion( X, C, true ) ;;
(rule) r4 @ owlIntersectionOf( C, ITEND, ITEND, I ) <=> success ;;
(rule) owlIntersectionClass( C, C1, _ ), owlClassAssertion( X, C, true ) ==> owlClassAssertion( X, C1, true ) ;;
(rule) ObjectPropertyChain @ owlObjectPropertyChain( PC, P, 0, N ), owlObjectPropertyAssertion( X, P, Y ) ==> constructPropertyChain( PC, 0, X, Y, N ) ;;
(rule) chainStep @ owlObjectPropertyAssertion( Y, P, Z ), owlObjectPropertyChain( PC, P, J, N ) \ constructPropertyChain( PC, I, X, Y, N ) <=> ( ( I < N ) && equalIncrement( J, I ) ) | constructPropertyChain( PC, ( I + 1 ), X, Z, N ) ;;
(rule) finalChain @ constructPropertyChain( PC, N, X, Y, N ) <=> owlObjectPropertyAssertion( X, PC, Y ) ;;
(rule) owlComplementOf( A, NOTA ), owlNamedIndividual( X ) ==> owlClassAssertion( X, NOTA, false ) ;;
(rule) owlComplementOf( A, NOTA ), owlClassAssertion( X, A, true ) \ owlClassAssertion( X, NOTA, false ) <=> success ;;
(rule) owlComplementOf( A, NOTA ), owlClassAssertion( X, A, true ), owlClassAssertion( X, NOTA, true ) <=> failure ;;
(rule) owlSomeValuesFrom( C, P, Y ), owlObjectPropertyAssertion( U, P, V ), owlClassAssertion( V, Y, true ) ==> owlClassAssertion( U, C, true ) ;;
(rule) owlSomeValuesFrom( C, P, Y ), owlClassAssertion( U, C, true ) ==> ( owlObjectPropertyAssertion( U, P, V ), logicalName( emptyString, V ), owlClassAssertion( V, Y, true ) ) ;;
(rule) owlObjectPropertyAssertion( U, P, W ), logicalName( URI, W ), owlClassAssertion( W, Y, true ) \ owlObjectPropertyAssertion( U, P, V ), logicalName( emptyString, V ), owlClassAssertion( V, Y, true ) <=> ( !( URI == emptyString ) ) | success ;;
(rule) owlAllValuesFrom( C, P, Y ), owlObjectPropertyAssertion( U, P, V ), owlClassAssertion( U, C, true ) ==> owlClassAssertion( V, Y, true ) ;;
(rule) owlAllValuesFrom( C, P, Y ), owlNamedIndividual( X ) ==> owlClassAssertion( X, C, false ) ;;
(rule) owlAllValuesFrom( C, P, Y ), owlObjectPropertyAssertion( U, P, V ), logicalName( URIV, V ), logicalName( URIY, Y ) \ owlClassAssertion( U, C, false ) <=> ( !checkClassification( ( *this ), URIV, URIY ) ) | success ;;
(rule) res( X ) ==> afficher( X ) ;;
(rule) queryClassification( X ), owlClassAssertion( X, C, true ), logicalName( URIC, C ) ==> ( res( URIC ), afficher( "passage" ) ) ;;
(rule) queryClassification( X ) <=> success ;;
(rule) owlMaxCardinality( C, P, 0 ), owlClassAssertion( U, C, true ), owlObjectPropertyAssertion( U, P, _ ) <=> failure ;;
(rule) owlMaxCardinality( C, P, 1 ), owlClassAssertion( U, C, true ), owlObjectPropertyAssertion( U, P, Y1 ), owlObjectPropertyAssertion( U, P, Y2 ) <=> ( !( Y1 == Y2 ) ) | owlSameIndividual( Y1, Y2 ) ;;
(rule) owlMaxQualifiedCardinality( X, P, C, 0 ), owlClassAssertion( U, X, true ), owlObjectPropertyAssertion( U, P, Y ), owlClassAssertion( Y, C, true ) <=> failure ;;
(rule) owlMaxQualifiedCardinality( X, P, C, 1 ), owlClassAssertion( U, X, true ), owlObjectPropertyAssertion( U, P, Y1 ), owlClassAssertion( Y1, C, true ), owlObjectPropertyAssertion( U, P, Y2 ), owlClassAssertion( Y2, C, true ) <=> ( !( Y1 == Y2 ) ) | owlSameIndividual( Y1, Y2 ) ;;
(rule) owlHasValueObject( C, P, Y ), owlObjectProperty( P ), owlClassAssertion( U, C, true ) ==> owlObjectPropertyAssertion( U, P, Y ) ;;
(rule) owlHasValueData( C, P, Y ), owlDataProperty( P ), owlClassAssertion( U, C, true ) ==> owlDataPropertyAssertion( U, P, Y ) ;;
(rule) owlHasValueObject( C, P, Y ), owlObjectPropertyAssertion( U, P, Y ) ==> owlClassAssertion( U, C, true ) ;;
(rule) owlHasValueData( C, P, Y ), owlDataPropertyAssertion( U, P, Y ) ==> owlClassAssertion( U, C, true ) ;;
(rule) owlOneOf( C, S ) ==> owlOneOfLoop( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) ) ;;
(rule) owlOneOfLoop( C, ITEND, ITEND ) <=> success ;;
(rule) owlOneOfLoop( C, IT, ITEND ) <=> ( owlClassAssertion( ( *( *IT ) ), C, true ), owlOneOfLoop( C, ( std :: next )( ( *IT ) ), ITEND ) ) ;;
(rule) owlHasKey( E, P, C ), owlClassAssertion( X, C, true ), owlClassAssertion( Y, C, true ) ==> ( !( X == Y ) ) | owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y ) ;;
(rule) owlHasKeyLoop( ITEND, ITEND, X, Y ) <=> owlSameIndividual( X, Y ) ;;
(rule) owlObjectPropertyAssertion( X, P, V1 ), owlObjectPropertyAssertion( Y, P, V1 ) \ owlHasKeyLoop( IT, ITEND, X, Y ) <=> ( P == ( *( *IT ) ) ) | owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(rule) owlDataPropertyAssertion( X, P, V1 ), owlDataPropertyAssertion( Y, P, V1 ) \ owlHasKeyLoop( IT, ITEND, X, Y ) <=> ( P == ( *( *IT ) ) ) | owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) chainStep @ [-constructPropertyChain( PC, I, X, Y, N )#0][( I < N ), +owlObjectPropertyChain( PC, P, J, N )<idx#0>, equalIncrement( J, I ), +owlObjectPropertyAssertion( Y, P, Z )<idx#0>] --> constructPropertyChain( PC, ( I + 1 ), X, Z, N ) ;;
(occ rule) finalChain @ [-constructPropertyChain( PC, N, X, Y, N )#1][] --> owlObjectPropertyAssertion( X, PC, Y ) ;;
(occ rule) [-logicalName( emptyString, V )#0][-owlClassAssertion( V, Y, true )<idx#0>, +owlClassAssertion( W, Y, true )<idx#1>, +owlObjectPropertyAssertion( U, P, W )<idx#1>, -owlObjectPropertyAssertion( U, P, V )<idx#2>, +logicalName( URI, W )<idx#0>, ( !( URI == emptyString ) )] --> success ;;
(occ rule) [+logicalName( URI, W )#1][( !( URI == emptyString ) ), +owlClassAssertion( W, Y, true )<idx#0>, -owlClassAssertion( V, Y, true )<idx#1>, -logicalName( emptyString, V )<idx#1>, +owlObjectPropertyAssertion( U, P, W )<idx#1>, -owlObjectPropertyAssertion( U, P, V )<idx#2>] --> success ;;
(occ rule) [+logicalName( URIV, V )#2][-owlClassAssertion( U, C, false )<idx#2>, +owlObjectPropertyAssertion( U, P, V )<idx#3>, +owlAllValuesFrom( C, P, Y )<idx#0>, +logicalName( URIY, Y )<idx#0>, ( !checkClassification( ( *this ), URIV, URIY ) )] --> success ;;
(occ rule) [+logicalName( URIY, Y )#3][-owlClassAssertion( U, C, false )<idx#2>, +owlAllValuesFrom( C, P, Y )<idx#1>, +owlObjectPropertyAssertion( U, P, V )<idx#0>, +logicalName( URIV, V )<idx#0>, ( !checkClassification( ( *this ), URIV, URIY ) )] --> success ;;
(occ rule) [+logicalName( URIC, C )#4][+owlClassAssertion( X, C, true )<idx#1>, +queryClassification( X )<idx#0>] --> ( res( URIC ), afficher( "passage" ) ) ;;
(occ rule) [+owlAllValuesFrom( C, P, Y )#0][+owlClassAssertion( U, C, true )<idx#1>, +owlObjectPropertyAssertion( U, P, V )<idx#0>] --> owlClassAssertion( V, Y, true ) ;;
(occ rule) [+owlAllValuesFrom( C, P, Y )#1][+owlNamedIndividual( X )] --> owlClassAssertion( X, C, false ) ;;
(occ rule) [+owlAllValuesFrom( C, P, Y )#2][-owlClassAssertion( U, C, false )<idx#1>, +owlObjectPropertyAssertion( U, P, V )<idx#0>, +logicalName( URIV, V )<idx#0>, +logicalName( URIY, Y )<idx#0>, ( !checkClassification( ( *this ), URIV, URIY ) )] --> success ;;
(occ rule) [-owlAsymmetricObjectProperty( P )#0][+owlAsymmetricObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) AsymmetricProperty1 @ [+owlAsymmetricObjectProperty( P )#1][+owlObjectPropertyAssertion( X, P, Y )<idx#4>] --> owlNegativeObjectAssertion( X, P, Y ) ;;
(occ rule) r3 @ [+owlCandidatsIntersection( X, C, I )#0][+owlClassAssertion( X, V, true )<idx#0>, +owlIntersectionClass( C, V, I )<idx#0>] --> owlCandidatsIntersection( X, C, ( I + 1 ) ) ;;
(occ rule) r5 @ [-owlCandidatsIntersection( X, C, I )#1][+owlIntersectionOf( C, ITEND, ITEND, I )<idx#0>] --> owlClassAssertion( X, C, true ) ;;
(occ rule) [-owlClass( C )#0][+owlClass( C )<idx#0>#passive] --> true ;;
(occ rule) [+owlClass( A )#1][] --> owlSubclassOf( A, A ) ;;
(occ rule) [+owlClass( C )#2][] --> owlEquivalentClass( C, C ) ;;
(occ rule) [+owlClass( C )#3][] --> owlSubclassOf( C, owlThing ) ;;
(occ rule) [+owlClass( C )#4][] --> owlSubclassOf( owlNothing, C ) ;;
(occ rule) [-owlClassAssertion( X, A, B )#0][+owlClassAssertion( X, A, B )<idx#3>#passive] --> true ;;
(occ rule) DisjointClass @ [-owlClassAssertion( X, A, true )#1][-owlClassAssertion( X, B, true )<idx#0>, -owlDisjointClass( L ), contains( A, L ), contains( B, L )] --> failure ;;
(occ rule) DisjointClass @ [-owlClassAssertion( X, B, true )#2][-owlClassAssertion( X, A, true )<idx#0>, -owlDisjointClass( L ), contains( A, L ), contains( B, L )] --> failure ;;
(occ rule) [+owlClassAssertion( X, C, true )#3][] --> ( owlClass( C ), owlNamedIndividual( X ) ) ;;
(occ rule) [+owlClassAssertion( X, V, true )#4][-owlUnionClass( C, V )<idx#0>] --> owlClassAssertion( X, C, true ) ;;
(occ rule) r2 @ [+owlClassAssertion( X, V, true )#5][+owlIntersectionClass( C, V, 0 )<idx#1>] --> owlCandidatsIntersection( X, C, 0 ) ;;
(occ rule) r3 @ [+owlClassAssertion( X, V, true )#6][+owlIntersectionClass( C, V, I )<idx#2>, +owlCandidatsIntersection( X, C, I )<idx#0>] --> owlCandidatsIntersection( X, C, ( I + 1 ) ) ;;
(occ rule) [+owlClassAssertion( X, C, true )#7][+owlIntersectionClass( C, C1, _ )<idx#3>] --> owlClassAssertion( X, C1, true ) ;;
(occ rule) [-owlClassAssertion( X, NOTA, false )#8][+owlClassAssertion( X, A, true )<idx#0>, +owlComplementOf( A, NOTA )<idx#0>] --> success ;;
(occ rule) [+owlClassAssertion( X, A, true )#9][-owlClassAssertion( X, NOTA, false )<idx#0>, +owlComplementOf( A, NOTA )<idx#0>] --> success ;;
(occ rule) [-owlClassAssertion( X, A, true )#10][-owlClassAssertion( X, NOTA, true )<idx#0>, -owlComplementOf( A, NOTA )<idx#0>] --> failure ;;
(occ rule) [-owlClassAssertion( X, NOTA, true )#11][-owlClassAssertion( X, A, true )<idx#0>, -owlComplementOf( A, NOTA )<idx#0>] --> failure ;;
(occ rule) [+owlClassAssertion( V, Y, true )#12][+owlSomeValuesFrom( C, P, Y )<idx#0>, +owlObjectPropertyAssertion( U, P, V )<idx#5>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) [+owlClassAssertion( U, C, true )#13][+owlSomeValuesFrom( C, P, Y )<idx#1>] --> ( owlObjectPropertyAssertion( U, P, V ), logicalName( emptyString, V ), owlClassAssertion( V, Y, true ) ) ;;
(occ rule) [-owlClassAssertion( V, Y, true )#14][-logicalName( emptyString, V )<idx#1>, +owlClassAssertion( W, Y, true )<idx#1>, +owlObjectPropertyAssertion( U, P, W )<idx#1>, -owlObjectPropertyAssertion( U, P, V )<idx#2>, +logicalName( URI, W )<idx#0>, ( !( URI == emptyString ) )] --> success ;;
(occ rule) [+owlClassAssertion( W, Y, true )#15][-owlClassAssertion( V, Y, true )<idx#1>, -logicalName( emptyString, V )<idx#1>, -owlObjectPropertyAssertion( U, P, V )<idx#1>, +owlObjectPropertyAssertion( U, P, W )<idx#2>, +logicalName( URI, W )<idx#0>, ( !( URI == emptyString ) )] --> success ;;
(occ rule) [+owlClassAssertion( U, C, true )#16][+owlAllValuesFrom( C, P, Y )<idx#2>, +owlObjectPropertyAssertion( U, P, V )<idx#0>] --> owlClassAssertion( V, Y, true ) ;;
(occ rule) [-owlClassAssertion( U, C, false )#17][+owlAllValuesFrom( C, P, Y )<idx#2>, +owlObjectPropertyAssertion( U, P, V )<idx#0>, +logicalName( URIV, V )<idx#0>, +logicalName( URIY, Y )<idx#0>, ( !checkClassification( ( *this ), URIV, URIY ) )] --> success ;;
(occ rule) [+owlClassAssertion( X, C, true )#18][+queryClassification( X )<idx#0>, +logicalName( URIC, C )<idx#0>] --> ( res( URIC ), afficher( "passage" ) ) ;;
(occ rule) [-owlClassAssertion( U, C, true )#19][-owlMaxCardinality( C, P, 0 )<idx#0>, -owlObjectPropertyAssertion( U, P, _ )<idx#0>] --> failure ;;
(occ rule) [-owlClassAssertion( U, C, true )#20][-owlMaxCardinality( C, P, 1 )<idx#0>, -owlObjectPropertyAssertion( U, P, Y1 )<idx#0>, -owlObjectPropertyAssertion( U, P, Y2 )<idx#0>, ( !( Y1 == Y2 ) )] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlClassAssertion( U, X, true )#21][-owlMaxQualifiedCardinality( X, P, C, 0 )<idx#0>, -owlClassAssertion( Y, C, true )<idx#1>, -owlObjectPropertyAssertion( U, P, Y )<idx#2>] --> failure ;;
(occ rule) [-owlClassAssertion( Y, C, true )#22][-owlMaxQualifiedCardinality( X, P, C, 0 )<idx#1>, -owlClassAssertion( U, X, true )<idx#1>, -owlObjectPropertyAssertion( U, P, Y )<idx#2>] --> failure ;;
(occ rule) [-owlClassAssertion( U, X, true )#23][-owlMaxQualifiedCardinality( X, P, C, 1 )<idx#0>, -owlClassAssertion( Y1, C, true )<idx#1>, -owlClassAssertion( Y2, C, true )<idx#1>, ( !( Y1 == Y2 ) ), -owlObjectPropertyAssertion( U, P, Y2 )<idx#2>, -owlObjectPropertyAssertion( U, P, Y1 )<idx#2>] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlClassAssertion( Y1, C, true )#24][-owlMaxQualifiedCardinality( X, P, C, 1 )<idx#1>, -owlClassAssertion( U, X, true )<idx#1>, -owlClassAssertion( Y2, C, true )<idx#1>, ( !( Y1 == Y2 ) ), -owlObjectPropertyAssertion( U, P, Y2 )<idx#2>, -owlObjectPropertyAssertion( U, P, Y1 )<idx#2>] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlClassAssertion( Y2, C, true )#25][-owlMaxQualifiedCardinality( X, P, C, 1 )<idx#1>, -owlClassAssertion( U, X, true )<idx#1>, -owlClassAssertion( Y1, C, true )<idx#1>, ( !( Y1 == Y2 ) ), -owlObjectPropertyAssertion( U, P, Y1 )<idx#2>, -owlObjectPropertyAssertion( U, P, Y2 )<idx#2>] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [+owlClassAssertion( U, C, true )#26][+owlHasValueObject( C, P, Y )<idx#0>, +owlObjectProperty( P )<idx#0>] --> owlObjectPropertyAssertion( U, P, Y ) ;;
(occ rule) [+owlClassAssertion( U, C, true )#27][+owlHasValueData( C, P, Y )<idx#0>, +owlDataProperty( P )<idx#0>] --> owlDataPropertyAssertion( U, P, Y ) ;;
(occ rule) [+owlClassAssertion( X, C, true )#28][+owlClassAssertion( Y, C, true )<idx#1>, ( !( X == Y ) ), +owlHasKey( E, P, C )<idx#0>] --> owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y ) ;;
(occ rule) [+owlClassAssertion( Y, C, true )#29][+owlClassAssertion( X, C, true )<idx#1>, ( !( X == Y ) ), +owlHasKey( E, P, C )<idx#0>] --> owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y ) ;;
(occ rule) [+owlComplementOf( A, NOTA )#0][+owlNamedIndividual( X )] --> owlClassAssertion( X, NOTA, false ) ;;
(occ rule) [+owlComplementOf( A, NOTA )#1][-owlClassAssertion( X, NOTA, false )<idx#1>, +owlClassAssertion( X, A, true )<idx#3>] --> success ;;
(occ rule) [-owlComplementOf( A, NOTA )#2][-owlClassAssertion( X, A, true )<idx#1>, -owlClassAssertion( X, NOTA, true )<idx#3>] --> failure ;;
(occ rule) [-owlDataProperty( P )#0][+owlDataProperty( P )<idx#0>#passive] --> true ;;
(occ rule) [+owlDataProperty( P )#1][] --> ( owlObjectSubPropertyOf( P, P ), owlEquivalentObjectProperty( P, P ) ) ;;
(occ rule) [+owlDataProperty( P )#2][] --> ( owlDataSubPropertyOf( P, P ), owlEquivalentDataProperty( P, P ) ) ;;
(occ rule) [+owlDataProperty( P )#3][+owlClassAssertion( U, C, true )<idx#2>, +owlHasValueData( C, P, Y )<idx#1>] --> owlDataPropertyAssertion( U, P, Y ) ;;
(occ rule) NegativeDataAssertion @ [-owlDataPropertyAssertion( X, P, Y )#0][-owlNegativeDataAssertion( X, P, Y )<idx#0>] --> failure ;;
(occ rule) DisjointDataProperty @ [-owlDataPropertyAssertion( X, P1, Y )#1][-owlDataPropertyAssertion( X, P2, Y )<idx#0>, -owlDisjointDataProperty( L ), contains( P1, L ), contains( P2, L )] --> failure ;;
(occ rule) DisjointDataProperty @ [-owlDataPropertyAssertion( X, P2, Y )#2][-owlDataPropertyAssertion( X, P1, Y )<idx#0>, -owlDisjointDataProperty( L ), contains( P1, L ), contains( P2, L )] --> failure ;;
(occ rule) DataPropertyDomain @ [+owlDataPropertyAssertion( X, P, _ )#3][+owlDataPropertyDomain( P, DP )<idx#0>] --> owlClassAssertion( X, DP, true ) ;;
(occ rule) DataPropertyRange @ [-owlDataPropertyAssertion( _, P, Y )#4][-owlDataPropertyRange( P, DR )<idx#0>, invalidType( DR, Y )] --> failure ;;
(occ rule) [+owlDataPropertyAssertion( U, P, Y )#5][+owlHasValueData( C, P, Y )<idx#2>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) [+owlDataPropertyAssertion( X, P, V1 )#6][+owlDataPropertyAssertion( Y, P, V1 )<idx#1>, -owlHasKeyLoop( IT, ITEND, X, Y )<idx#0>, ( P == ( *( *IT ) ) )] --> owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) [+owlDataPropertyAssertion( Y, P, V1 )#7][+owlDataPropertyAssertion( X, P, V1 )<idx#1>, -owlHasKeyLoop( IT, ITEND, X, Y )<idx#0>, ( P == ( *( *IT ) ) )] --> owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) DataPropertyDomain @ [+owlDataPropertyDomain( P, DP )#0][+owlDataPropertyAssertion( X, P, _ )<idx#2>] --> owlClassAssertion( X, DP, true ) ;;
(occ rule) DataPropertyRange @ [-owlDataPropertyRange( P, DR )#0][-owlDataPropertyAssertion( _, P, Y )<idx#2>, invalidType( DR, Y )] --> failure ;;
(occ rule) [+owlDataSubPropertyOf( A, B )#0][+owlDataSubPropertyOf( B, C )<idx#0>, guard_condition( A, B, C )] --> owlDataSubPropertyOf( A, C ) ;;
(occ rule) [+owlDataSubPropertyOf( B, C )#1][+owlDataSubPropertyOf( A, B )<idx#1>, guard_condition( A, B, C )] --> owlDataSubPropertyOf( A, C ) ;;
(occ rule) [+owlDataSubPropertyOf( A, B )#2][different( A, B ), +owlDataSubPropertyOf( B, A )<idx#2>] --> owlEquivalentDataProperty( A, B ) ;;
(occ rule) [+owlDataSubPropertyOf( B, A )#3][different( A, B ), +owlDataSubPropertyOf( A, B )<idx#2>] --> owlEquivalentDataProperty( A, B ) ;;
(occ rule) [-owlDifferentIndividual( X, Y )#0][+owlDifferentIndividual( X, Y )<idx#0>#passive] --> true ;;
(occ rule) DifferentIndividual @ [-owlDifferentIndividual( X, Y )#1][-owlSameIndividual( X, Y )<idx#0>] --> failure ;;
(occ rule) [-owlDisjointClass( L )#0][+owlDisjointClass( L )<idx#0>#passive] --> true ;;
(occ rule) DisjointClass @ [-owlDisjointClass( L )#1][-owlClassAssertion( X, A, true )<idx#2>, contains( A, L ), -owlClassAssertion( X, B, true )<idx#0>, contains( B, L )] --> failure ;;
(occ rule) DisjointDataProperty @ [-owlDisjointDataProperty( L )#0][-owlDataPropertyAssertion( X, P1, Y ), contains( P1, L ), -owlDataPropertyAssertion( X, P2, Y )<idx#0>, contains( P2, L )] --> failure ;;
(occ rule) [-owlDisjointObjectProperty( L )#0][+owlDisjointObjectProperty( L )<idx#0>#passive] --> true ;;
(occ rule) DisjointProperty @ [-owlDisjointObjectProperty( L )#1][-owlObjectPropertyAssertion( X, P1, Y ), contains( P1, L ), -owlObjectPropertyAssertion( X, P2, Y )<idx#3>, contains( P2, L )] --> failure ;;
(occ rule) [-owlEquivalentClass( A, B )#0][+owlEquivalentClass( A, B )<idx#0>#passive] --> true ;;
(occ rule) [=owlEquivalentDataProperty( A, B )#0][different( A, B )] --> ( owlDataSubPropertyOf( A, B ), owlDataSubPropertyOf( B, A ) ) ;;
(occ rule) [-owlEquivalentObjectProperty( A, B )#0][+owlEquivalentObjectProperty( A, B )<idx#0>#passive] --> true ;;
(occ rule) [-owlFunctionalObjectProperty( P )#0][+owlFunctionalObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) [+owlHasKey( E, P, C )#0][+owlClassAssertion( X, C, true )<idx#1>, +owlClassAssertion( Y, C, true )<idx#1>, ( !( X == Y ) )] --> owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y ) ;;
(occ rule) [-owlHasKeyLoop( ITEND, ITEND, X, Y )#0][] --> owlSameIndividual( X, Y ) ;;
(occ rule) [-owlHasKeyLoop( IT, ITEND, X, Y )#1][+owlObjectPropertyAssertion( X, P, V1 )<idx#6>, ( P == ( *( *IT ) ) ), +owlObjectPropertyAssertion( Y, P, V1 )<idx#2>] --> owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) [-owlHasKeyLoop( IT, ITEND, X, Y )#2][+owlDataPropertyAssertion( X, P, V1 )<idx#3>, ( P == ( *( *IT ) ) ), +owlDataPropertyAssertion( Y, P, V1 )<idx#4>] --> owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) [+owlHasValueData( C, P, Y )#0][+owlClassAssertion( U, C, true )<idx#1>, +owlDataProperty( P )<idx#0>] --> owlDataPropertyAssertion( U, P, Y ) ;;
(occ rule) [+owlHasValueData( C, P, Y )#1][+owlDataPropertyAssertion( U, P, Y )<idx#1>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) [+owlHasValueObject( C, P, Y )#0][+owlClassAssertion( U, C, true )<idx#1>, +owlObjectProperty( P )<idx#0>] --> owlObjectPropertyAssertion( U, P, Y ) ;;
(occ rule) [+owlHasValueObject( C, P, Y )#1][+owlObjectPropertyAssertion( U, P, Y )<idx#5>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) r2 @ [+owlIntersectionClass( C, V, 0 )#0][+owlClassAssertion( X, V, true )<idx#1>] --> owlCandidatsIntersection( X, C, 0 ) ;;
(occ rule) r3 @ [+owlIntersectionClass( C, V, I )#1][+owlClassAssertion( X, V, true )<idx#1>, +owlCandidatsIntersection( X, C, I )<idx#0>] --> owlCandidatsIntersection( X, C, ( I + 1 ) ) ;;
(occ rule) [+owlIntersectionClass( C, C1, _ )#2][+owlClassAssertion( X, C, true )<idx#1>] --> owlClassAssertion( X, C1, true ) ;;
(occ rule) r1 @ [-owlIntersectionOf( C, IT, ITEND, I )#0][( IT != ITEND )] --> ( owlIntersectionClass( C, ( *( *IT ) ), I ), owlIntersectionOf( C, ( std :: next )( ( *IT ) ), ITEND, ( I + 1 ) ) ) ;;
(occ rule) r5 @ [+owlIntersectionOf( C, ITEND, ITEND, I )#1][-owlCandidatsIntersection( X, C, I )<idx#1>] --> owlClassAssertion( X, C, true ) ;;
(occ rule) r4 @ [-owlIntersectionOf( C, ITEND, ITEND, I )#2][] --> success ;;
(occ rule) r0 @ [+owlIntersectionOf1( C, S )#0][] --> owlIntersectionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ), 0 ) ;;
(occ rule) [-owlInverseFunctionalObjectProperty( P )#0][+owlInverseFunctionalObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) [-owlInverseObjectProperty( P1, P2 )#0][+owlInverseObjectProperty( P1, P2 )<idx#0>#passive] --> true ;;
(occ rule) inverseProperty @ [+owlInverseObjectProperty( P1, P2 )#1][+owlObjectPropertyAssertion( X, P1, Y )<idx#4>] --> owlObjectPropertyAssertion( Y, P2, X ) ;;
(occ rule) [+owlInverseObjectProperty( P1, P2 )#2][] --> owlInverseObjectProperty( P2, P1 ) ;;
(occ rule) [-owlIrreflexiveObjectProperty( P )#0][+owlIrreflexiveObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) irreflexiveProperty @ [-owlIrreflexiveObjectProperty( P )#1][-owlObjectPropertyAssertion( X, P, X )<idx#4>] --> failure ;;
(occ rule) [-owlMaxCardinality( C, P, 0 )#0][-owlClassAssertion( U, C, true )<idx#1>, -owlObjectPropertyAssertion( U, P, _ )<idx#0>] --> failure ;;
(occ rule) [-owlMaxCardinality( C, P, 1 )#1][-owlClassAssertion( U, C, true )<idx#1>, -owlObjectPropertyAssertion( U, P, Y1 )<idx#0>, -owlObjectPropertyAssertion( U, P, Y2 )<idx#0>, ( !( Y1 == Y2 ) )] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlMaxQualifiedCardinality( X, P, C, 0 )#0][-owlClassAssertion( U, X, true )<idx#1>, -owlClassAssertion( Y, C, true )<idx#1>, -owlObjectPropertyAssertion( U, P, Y )<idx#2>] --> failure ;;
(occ rule) [-owlMaxQualifiedCardinality( X, P, C, 1 )#1][-owlClassAssertion( U, X, true )<idx#1>, -owlClassAssertion( Y1, C, true )<idx#1>, -owlClassAssertion( Y2, C, true )<idx#1>, ( !( Y1 == Y2 ) ), -owlObjectPropertyAssertion( U, P, Y2 )<idx#2>, -owlObjectPropertyAssertion( U, P, Y1 )<idx#2>] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlNamedIndividual( C )#0][+owlNamedIndividual( C )<idx#0>#passive] --> true ;;
(occ rule) [+owlNamedIndividual( X )#1][+owlComplementOf( A, NOTA )] --> owlClassAssertion( X, NOTA, false ) ;;
(occ rule) [+owlNamedIndividual( X )#2][+owlAllValuesFrom( C, P, Y )] --> owlClassAssertion( X, C, false ) ;;
(occ rule) NegativeDataAssertion @ [-owlNegativeDataAssertion( X, P, Y )#0][-owlDataPropertyAssertion( X, P, Y )<idx#4>] --> failure ;;
(occ rule) [-owlNegativeObjectAssertion( X, P, Y )#0][+owlNegativeObjectAssertion( X, P, Y )<idx#0>#passive] --> true ;;
(occ rule) NegativeObjectAssertion @ [-owlNegativeObjectAssertion( X, P, Y )#1][-owlObjectPropertyAssertion( X, P, Y )<idx#2>] --> failure ;;
(occ rule) [-owlObjectProperty( P )#0][+owlObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) [+owlObjectProperty( P )#1][] --> ( owlObjectSubPropertyOf( P, P ), owlEquivalentObjectProperty( P, P ) ) ;;
(occ rule) [+owlObjectProperty( P )#2][+owlClassAssertion( U, C, true )<idx#2>, +owlHasValueObject( C, P, Y )<idx#1>] --> owlObjectPropertyAssertion( U, P, Y ) ;;
(occ rule) [-owlObjectPropertyAssertion( X, P, Y )#0][+owlObjectPropertyAssertion( X, P, Y )<idx#2>#passive] --> true ;;
(occ rule) NegativeObjectAssertion @ [-owlObjectPropertyAssertion( X, P, Y )#1][-owlNegativeObjectAssertion( X, P, Y )<idx#0>] --> failure ;;
(occ rule) DisjointProperty @ [-owlObjectPropertyAssertion( X, P1, Y )#2][-owlObjectPropertyAssertion( X, P2, Y )<idx#3>, -owlDisjointObjectProperty( L ), contains( P1, L ), contains( P2, L )] --> failure ;;
(occ rule) DisjointProperty @ [-owlObjectPropertyAssertion( X, P2, Y )#3][-owlObjectPropertyAssertion( X, P1, Y )<idx#3>, -owlDisjointObjectProperty( L ), contains( P1, L ), contains( P2, L )] --> failure ;;
(occ rule) irreflexiveProperty @ [-owlObjectPropertyAssertion( X, P, X )#4][-owlIrreflexiveObjectProperty( P )<idx#0>] --> failure ;;
(occ rule) objectPropertydomain @ [+owlObjectPropertyAssertion( X, P, Y )#5][+owlObjectPropertyDomain( P, DP )<idx#0>] --> owlClassAssertion( X, DP, true ) ;;
(occ rule) objectPropertyCoDomain @ [+owlObjectPropertyAssertion( X, P, Y )#6][+owlObjectPropertyRange( P, DP )<idx#0>] --> owlClassAssertion( Y, DP, true ) ;;
(occ rule) inverseProperty @ [+owlObjectPropertyAssertion( X, P1, Y )#7][+owlInverseObjectProperty( P1, P2 )<idx#1>] --> owlObjectPropertyAssertion( Y, P2, X ) ;;
(occ rule) symmetricProperty @ [+owlObjectPropertyAssertion( X, P, Y )#8][+owlSymmetricObjectProperty( P )<idx#0>] --> owlObjectPropertyAssertion( Y, P, X ) ;;
(occ rule) AsymmetricProperty1 @ [+owlObjectPropertyAssertion( X, P, Y )#9][+owlAsymmetricObjectProperty( P )<idx#0>] --> owlNegativeObjectAssertion( X, P, Y ) ;;
(occ rule) reflexiveProperty @ [+owlObjectPropertyAssertion( X, P, Y )#10][+owlReflexiveObjectProperty( P )<idx#0>] --> ( owlObjectPropertyAssertion( X, P, X ), owlObjectPropertyAssertion( Y, P, Y ) ) ;;
(occ rule) ObjectPropertyChain @ [+owlObjectPropertyAssertion( X, P, Y )#11][+owlObjectPropertyChain( PC, P, 0, N )<idx#1>] --> constructPropertyChain( PC, 0, X, Y, N ) ;;
(occ rule) chainStep @ [+owlObjectPropertyAssertion( Y, P, Z )#12][-constructPropertyChain( PC, I, X, Y, N )<idx#0>, ( I < N ), +owlObjectPropertyChain( PC, P, J, N )<idx#2>, equalIncrement( J, I )] --> constructPropertyChain( PC, ( I + 1 ), X, Z, N ) ;;
(occ rule) [+owlObjectPropertyAssertion( U, P, V )#13][+owlClassAssertion( V, Y, true )<idx#0>, +owlSomeValuesFrom( C, P, Y )<idx#2>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, V )#14][-logicalName( emptyString, V )<idx#1>, -owlClassAssertion( V, Y, true )<idx#0>, +owlClassAssertion( W, Y, true )<idx#1>, +owlObjectPropertyAssertion( U, P, W )<idx#2>, +logicalName( URI, W )<idx#0>, ( !( URI == emptyString ) )] --> success ;;
(occ rule) [+owlObjectPropertyAssertion( U, P, W )#15][+owlClassAssertion( W, Y, true )<idx#0>, -owlClassAssertion( V, Y, true )<idx#1>, -logicalName( emptyString, V )<idx#1>, -owlObjectPropertyAssertion( U, P, V )<idx#2>, +logicalName( URI, W )<idx#0>, ( !( URI == emptyString ) )] --> success ;;
(occ rule) [+owlObjectPropertyAssertion( U, P, V )#16][+owlClassAssertion( U, C, true )<idx#0>, +owlAllValuesFrom( C, P, Y )<idx#0>] --> owlClassAssertion( V, Y, true ) ;;
(occ rule) [+owlObjectPropertyAssertion( U, P, V )#17][-owlClassAssertion( U, C, false )<idx#0>, +owlAllValuesFrom( C, P, Y )<idx#0>, +logicalName( URIV, V )<idx#0>, +logicalName( URIY, Y )<idx#0>, ( !checkClassification( ( *this ), URIV, URIY ) )] --> success ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, _ )#18][-owlMaxCardinality( C, P, 0 )<idx#1>, -owlClassAssertion( U, C, true )<idx#3>] --> failure ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, Y1 )#19][-owlMaxCardinality( C, P, 1 )<idx#1>, -owlClassAssertion( U, C, true )<idx#3>, -owlObjectPropertyAssertion( U, P, Y2 )<idx#0>, ( !( Y1 == Y2 ) )] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, Y2 )#20][-owlMaxCardinality( C, P, 1 )<idx#1>, -owlClassAssertion( U, C, true )<idx#3>, -owlObjectPropertyAssertion( U, P, Y1 )<idx#0>, ( !( Y1 == Y2 ) )] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, Y )#21][-owlMaxQualifiedCardinality( X, P, C, 0 )<idx#2>, -owlClassAssertion( U, X, true )<idx#3>, -owlClassAssertion( Y, C, true )<idx#3>] --> failure ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, Y1 )#22][-owlMaxQualifiedCardinality( X, P, C, 1 )<idx#2>, -owlClassAssertion( U, X, true )<idx#3>, -owlClassAssertion( Y1, C, true )<idx#3>, -owlClassAssertion( Y2, C, true )<idx#1>, ( !( Y1 == Y2 ) ), -owlObjectPropertyAssertion( U, P, Y2 )<idx#2>] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [-owlObjectPropertyAssertion( U, P, Y2 )#23][-owlMaxQualifiedCardinality( X, P, C, 1 )<idx#2>, -owlClassAssertion( U, X, true )<idx#3>, -owlClassAssertion( Y2, C, true )<idx#3>, -owlClassAssertion( Y1, C, true )<idx#1>, ( !( Y1 == Y2 ) ), -owlObjectPropertyAssertion( U, P, Y1 )<idx#2>] --> owlSameIndividual( Y1, Y2 ) ;;
(occ rule) [+owlObjectPropertyAssertion( U, P, Y )#24][+owlHasValueObject( C, P, Y )<idx#2>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) [+owlObjectPropertyAssertion( X, P, V1 )#25][+owlObjectPropertyAssertion( Y, P, V1 )<idx#5>, -owlHasKeyLoop( IT, ITEND, X, Y )<idx#0>, ( P == ( *( *IT ) ) )] --> owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) [+owlObjectPropertyAssertion( Y, P, V1 )#26][+owlObjectPropertyAssertion( X, P, V1 )<idx#5>, -owlHasKeyLoop( IT, ITEND, X, Y )<idx#0>, ( P == ( *( *IT ) ) )] --> owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y ) ;;
(occ rule) ObjectPropertyChain @ [+owlObjectPropertyChain( PC, P, 0, N )#0][+owlObjectPropertyAssertion( X, P, Y )<idx#4>] --> constructPropertyChain( PC, 0, X, Y, N ) ;;
(occ rule) chainStep @ [+owlObjectPropertyChain( PC, P, J, N )#1][-constructPropertyChain( PC, I, X, Y, N )<idx#1>, ( I < N ), equalIncrement( J, I ), +owlObjectPropertyAssertion( Y, P, Z )<idx#0>] --> constructPropertyChain( PC, ( I + 1 ), X, Z, N ) ;;
(occ rule) [-owlObjectPropertyDomain( P, C )#0][+owlObjectPropertyDomain( P, C )<idx#1>#passive] --> true ;;
(occ rule) objectPropertydomain @ [+owlObjectPropertyDomain( P, DP )#1][+owlObjectPropertyAssertion( X, P, Y )<idx#4>] --> owlClassAssertion( X, DP, true ) ;;
(occ rule) [-owlObjectPropertyRange( P, C )#0][+owlObjectPropertyRange( P, C )<idx#1>#passive] --> true ;;
(occ rule) objectPropertyCoDomain @ [+owlObjectPropertyRange( P, DP )#1][+owlObjectPropertyAssertion( X, P, Y )<idx#4>] --> owlClassAssertion( Y, DP, true ) ;;
(occ rule) [-owlObjectSubPropertyOf( A, B )#0][+owlObjectSubPropertyOf( A, B )<idx#0>#passive] --> true ;;
(occ rule) [+owlOneOf( C, S )#0][] --> owlOneOfLoop( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) ) ;;
(occ rule) [-owlOneOfLoop( C, ITEND, ITEND )#0][] --> success ;;
(occ rule) [-owlOneOfLoop( C, IT, ITEND )#1][] --> ( owlClassAssertion( ( *( *IT ) ), C, true ), owlOneOfLoop( C, ( std :: next )( ( *IT ) ), ITEND ) ) ;;
(occ rule) [-owlReflexiveObjectProperty( P )#0][+owlReflexiveObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) reflexiveProperty @ [+owlReflexiveObjectProperty( P )#1][+owlObjectPropertyAssertion( X, P, Y )<idx#4>] --> ( owlObjectPropertyAssertion( X, P, X ), owlObjectPropertyAssertion( Y, P, Y ) ) ;;
(occ rule) [-owlSameIndividual( X, Y )#0][+owlSameIndividual( X, Y )<idx#0>#passive] --> true ;;
(occ rule) sameIndividual @ [+owlSameIndividual( X, Y )#1][( !( X == Y ) )] --> X %= Y ;;
(occ rule) DifferentIndividual @ [-owlSameIndividual( X, Y )#2][-owlDifferentIndividual( X, Y )<idx#0>] --> failure ;;
(occ rule) [+owlSomeValuesFrom( C, P, Y )#0][+owlClassAssertion( V, Y, true )<idx#1>, +owlObjectPropertyAssertion( U, P, V )<idx#5>] --> owlClassAssertion( U, C, true ) ;;
(occ rule) [+owlSomeValuesFrom( C, P, Y )#1][+owlClassAssertion( U, C, true )<idx#1>] --> ( owlObjectPropertyAssertion( U, P, V ), logicalName( emptyString, V ), owlClassAssertion( V, Y, true ) ) ;;
(occ rule) [-owlSubclassOf( A, B )#0][+owlSubclassOf( A, B )<idx#0>#passive] --> true ;;
(occ rule) [+owlSubclassOf( C1, C2 )#1][] --> ( owlClass( C1 ), owlClass( C2 ) ) ;;
(occ rule) [-owlSymmetricObjectProperty( P )#0][+owlSymmetricObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) symmetricProperty @ [+owlSymmetricObjectProperty( P )#1][+owlObjectPropertyAssertion( X, P, Y )<idx#4>] --> owlObjectPropertyAssertion( Y, P, X ) ;;
(occ rule) [-owlTransitiveObjectProperty( P )#0][+owlTransitiveObjectProperty( P )<idx#0>#passive] --> true ;;
(occ rule) [-owlUnionClass( C, V )#0][+owlClassAssertion( X, V, true )<idx#1>] --> owlClassAssertion( X, C, true ) ;;
(occ rule) [-owlUnionOf( C, ITEND, ITEND )#0][] --> success ;;
(occ rule) [-owlUnionOf( C, IT, ITEND )#1][] --> ( owlUnionClass( C, ( *( *IT ) ) ), owlUnionOf( C, ( std :: next )( ( *IT ) ), ITEND ) ) ;;
(occ rule) [+owlUnionOf1( C, S )#0][] --> owlUnionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) ) ;;
(occ rule) [+owlUnionOf1( C1, S )#1][+owlUnionOf1( C2, S )<idx#0>] --> owlEquivalentClass( C1, C2 ) ;;
(occ rule) [+owlUnionOf1( C2, S )#2][+owlUnionOf1( C1, S )<idx#0>] --> owlEquivalentClass( C1, C2 ) ;;
(occ rule) [+queryClassification( X )#0][+owlClassAssertion( X, C, true )<idx#0>, +logicalName( URIC, C )<idx#0>] --> ( res( URIC ), afficher( "passage" ) ) ;;
(occ rule) [-queryClassification( X )#1][] --> success ;;
(occ rule) [-res( X )#0][+res( X )<idx#0>#passive] --> true ;;
(occ rule) [+res( X )#1][] --> afficher( X ) ;;

(constraint store) owlPrefix( ( ?( std :: string ) ), ( ?( std :: string ) ) ), persistent
(constraint store) owlClass( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlDataProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlNamedIndividual( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlSubclassOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) owlEquivalentClass( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) owlObjectSubPropertyOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) owlDataSubPropertyOf( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <0>, <1>, <0,1> }, persistent
(constraint store) owlEquivalentObjectProperty( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) owlEquivalentDataProperty( ( +( std :: string ) ), ( +( std :: string ) ) ), persistent
(constraint store) owlObjectPropertyDomain( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1> }, persistent
(constraint store) owlObjectPropertyRange( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1> }, persistent
(constraint store) owlClassAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( +bool ) ), indexes: { <0,2>, <1,2>, <2>, <0,1,2> }, persistent
(constraint store) owlDisjointClass( ( ?( std :: vector  )< ( std :: string ) > ) ), indexes: { <0> }, persistent
(constraint store) owlNegativeObjectAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1,2> }, persistent
(constraint store) owlObjectPropertyAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <2>, <0,1,2>, <0,2>, <1>, <1,2>, <0> }, persistent
(constraint store) owlSameIndividual( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) owlDifferentIndividual( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) owlInverseObjectProperty( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <0> }, persistent
(constraint store) owlSymmetricObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlAsymmetricObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlDisjointObjectProperty( ( ?( std :: vector  )< ( std :: string ) > ) ), indexes: { <0> }, persistent
(constraint store) owlDisjointDataProperty( ( ?( std :: vector  )< ( std :: string ) > ) ), persistent
(constraint store) owlReflexiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlIrreflexiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlFunctionalObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlFunctionalDataProperty( ( +( std :: string ) ) ), persistent
(constraint store) owlInverseFunctionalObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlTransitiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlDataPropertyAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?Value ) ), indexes: { <0,2>, <1,2>, <1>, <0>, <0,1,2> }, persistent
(constraint store) owlNegativeDataAssertion( ( +( std :: string ) ), ( +( std :: string ) ), ( +Value ) ), indexes: { <0,1,2> }, persistent
(constraint store) owlDataPropertyRange( ( +( std :: string ) ), ( +( std :: shared_ptr )< AnySimpleType > ) ), indexes: { <0> }, persistent
(constraint store) owlDataPropertyDomain( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) owlUnionClass( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <1> }, persistent
(constraint store) owlUnionOf1( ( +( std :: string ) ), ( +set ) ), indexes: { <1> }, persistent
(constraint store) owlUnionOf( ( +( std :: string ) ), ( +iterator ), ( +iterator ) ), persistent
(constraint store) owlIntersectionOf1( ( +( std :: string ) ), ( +set ) ), persistent
(constraint store) owlIntersectionClass( ( +( std :: string ) ), ( +( std :: string ) ), ( +int ) ), indexes: { <0,1,2>, <1,2>, <1>, <0> }, persistent
(constraint store) owlIntersectionOf( ( +( std :: string ) ), ( +iterator ), ( +iterator ), ( +int ) ), indexes: { <0,3> }, persistent
(constraint store) owlCandidatsIntersection( ( +( std :: string ) ), ( +( std :: string ) ), ( +int ) ), indexes: { <0,1,2>, <1,2> }, persistent
(constraint store) owlTempClassAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ) ), persistent
(constraint store) owlAllValuesFrom( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <0,2>, <0> }, persistent
(constraint store) owlSomeValuesFrom( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <2>, <0>, <1,2> }, persistent
(constraint store) owlObjectPropertyChain( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?int ), ( ?int ) ), indexes: { <0,3>, <1,2>, <0,1,3> }, persistent
(constraint store) constructPropertyChain( ( ?( std :: string ) ), ( ?int ), ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?int ) ), indexes: { <3>, <0,4> }, persistent
(constraint store) owlComplementOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
(constraint store) querySuperClassOf( ( ?( std :: string ) ) ), persistent
(constraint store) querySubClassOf( ( ?( std :: string ) ) ), persistent
(constraint store) queryClassification( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) queryClassificationTemp( ( ?( std :: string ) ) ), persistent
(constraint store) res( ( +( std :: string ) ) ), indexes: { <0> }, persistent
(constraint store) queryFullUri( ( ?( std :: string ) ) ), persistent
(constraint store) logicalName( ( +( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <1>, <0,1> }, persistent
(constraint store) owlMaxCardinality( ( ?( std :: string ) ), ( ?( std :: string ) ), ( +int ) ), indexes: { <0,2>, <1,2> }, persistent
(constraint store) owlMaxQualifiedCardinality( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ), ( +int ) ), indexes: { <0,3>, <2,3>, <1,3> }, persistent
(constraint store) owlHasValueObject( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1>, <1,2> }, persistent
(constraint store) owlHasValueData( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?Value ) ), indexes: { <0>, <0,1>, <1,2> }, persistent
(constraint store) owlOneOf( ( ?( std :: string ) ), ( ?set ) ), persistent
(constraint store) owlOneOfLoop( ( ?( std :: string ) ), ( +iteratorSet ), ( +iteratorSet ) ), persistent
(constraint store) owlHasKey( ( ?( std :: string ) ), ( ?set ), ( ?( std :: string ) ) ), indexes: { <2> }, persistent
(constraint store) owlHasKeyLoop( ( +iteratorSet ), ( +iteratorSet ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <2,3> }, persistent
*/
//----------------------- START INCLUDE HEADER ---------------------
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <chrpp.hh>
#include "stringType.h"
#include <options.hpp>
const std::string owlThing = "owl:Thing";
const std::string owlNothing = "owl:Nothing";
const std::string emptyString = "";

/**
 * Hash data structure needed for std::string
 */

namespace chr {
template<>
  struct Type_instruction_wrapper<std::vector<std::string>::iterator, false> {
      static std::string to_string(const std::vector<std::string>::iterator& it) {
          return *it;
      }
      static void update_hash(const std::vector<std::string>::iterator&) {}
      static bool is_equal(const std::vector<std::string>::iterator& a,
                           const std::vector<std::string>::iterator& b) {
          return a == b;
      }
  };
}


template <>
struct chr::XXHash<Value>
{
    static void update(const Value& v)
    {
        // On crée une seule string de hachage en combinant les deux composants
        std::string composite = v.val;

            if (v.typeVal)
        {
            composite += "::" + std::to_string(v.typeVal->getId());
        }
        else
        {
            composite += "::null";
        }

        chr::XXHash<std::string>::update(composite);
    }
};
using iterator = std::vector<std::string>::iterator;
using iteratorSet = std::set<std::string>::iterator;
using set = std::set<std::string> ;

namespace chr {
template<>
  struct Type_instruction_wrapper<std::set<std::string>::iterator, false> {
      static std::string to_string(const std::set<std::string>::iterator& it) {
          return *it;
      }
      static void update_hash(const std::set<std::string>::iterator&) {}
      static bool is_equal(const std::set<std::string>::iterator& a,
                           const std::set<std::string>::iterator& b) {
          return a == b;
      }
  };
}
bool guard_condition(const std::string& A, const std::string& B, const std::string& C) {
    return A != B && B != C && A != C;
}

bool different(const std::string& A, const std::string& B){
    return A!=B;
}

void afficher(std::string x){
    std::cout<<x<<std::endl;
}

void afficherIndice(int i) {
    std::cout << i << std::endl;
}
bool contains(const std::string& x,const std::vector<std::string> & l){
    if (std::find(l.begin(), l.end(), x) != l.end()) 
    {  return true;}
    return false;
}

bool equalIncrement(const int &x,const int & y){
    return (x==(y+1));
}

bool samePrefix(const std::string & px,const std::string & x){
        size_t pos = px.find(':');
        std::string pref = px.substr(0, pos);
        return (pref==x) ;
}

template <typename T>
bool checkClassification(T& pb,const std::string & x ,const std::string & c){
    auto it = pb.get_owlClassAssertion_store().begin();
    while (!it.at_end())
    {    if((*std::get<1>(*it))==x && (*std::get<2>(*it))==c)
        {
            return true;
        }
         ++it;
    }
    return false;
}


std::string constructFullUri(const std::string& prefix,
                             const std::string& localName)
{
    auto pos = localName.find(':');
    std::string name = localName.substr(pos+1);
    return prefix + ":" + name;
}


/**
*
*\ingroup Examples


*/
//----------------------- END INCLUDE HEADER ---------------------
#define __CHRPPC_MAJOR__ 1
#define __CHRPPC_MINOR__ 90
#line 1 "owl.chrpp"
#include <chrpp.hh>
class OWL2 {
	unsigned long int next_free_constraint_id = 1;
	//(constraint store) owlPrefix( ( ?( std :: string ) ), ( ?( std :: string ) ) ), persistent
public:
	struct owlPrefix {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlPrefix_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlPrefix(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlPrefix::Constraint_store_t > owlPrefix_constraint_store{ chr::make_shared< typename owlPrefix::Constraint_store_t >("owlPrefix") };
	//(constraint store) owlClass( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlClass {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlClass_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlClass(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlClass::Constraint_store_t > owlClass_constraint_store{ chr::make_shared< typename owlClass::Constraint_store_t >("owlClass") };
	//(constraint store) owlObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlObjectProperty::Constraint_store_t > owlObjectProperty_constraint_store{ chr::make_shared< typename owlObjectProperty::Constraint_store_t >("owlObjectProperty") };
	//(constraint store) owlDataProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlDataProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDataProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDataProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDataProperty::Constraint_store_t > owlDataProperty_constraint_store{ chr::make_shared< typename owlDataProperty::Constraint_store_t >("owlDataProperty") };
	//(constraint store) owlNamedIndividual( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlNamedIndividual {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlNamedIndividual_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlNamedIndividual(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlNamedIndividual::Constraint_store_t > owlNamedIndividual_constraint_store{ chr::make_shared< typename owlNamedIndividual::Constraint_store_t >("owlNamedIndividual") };
	//(constraint store) owlSubclassOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlSubclassOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlSubclassOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlSubclassOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlSubclassOf::Constraint_store_t > owlSubclassOf_constraint_store{ chr::make_shared< typename owlSubclassOf::Constraint_store_t >("owlSubclassOf") };
	//(constraint store) owlEquivalentClass( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlEquivalentClass {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlEquivalentClass_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlEquivalentClass(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlEquivalentClass::Constraint_store_t > owlEquivalentClass_constraint_store{ chr::make_shared< typename owlEquivalentClass::Constraint_store_t >("owlEquivalentClass") };
	//(constraint store) owlObjectSubPropertyOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlObjectSubPropertyOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlObjectSubPropertyOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlObjectSubPropertyOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlObjectSubPropertyOf::Constraint_store_t > owlObjectSubPropertyOf_constraint_store{ chr::make_shared< typename owlObjectSubPropertyOf::Constraint_store_t >("owlObjectSubPropertyOf") };
	//(constraint store) owlDataSubPropertyOf( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <0>, <1>, <0,1> }, persistent
public:
	struct owlDataSubPropertyOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0>, chr::LNS::Index<1>, chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDataSubPropertyOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDataSubPropertyOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDataSubPropertyOf::Constraint_store_t > owlDataSubPropertyOf_constraint_store{ chr::make_shared< typename owlDataSubPropertyOf::Constraint_store_t >("owlDataSubPropertyOf") };
	//(constraint store) owlEquivalentObjectProperty( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlEquivalentObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlEquivalentObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlEquivalentObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlEquivalentObjectProperty::Constraint_store_t > owlEquivalentObjectProperty_constraint_store{ chr::make_shared< typename owlEquivalentObjectProperty::Constraint_store_t >("owlEquivalentObjectProperty") };
	//(constraint store) owlEquivalentDataProperty( ( +( std :: string ) ), ( +( std :: string ) ) ), persistent
public:
	struct owlEquivalentDataProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlEquivalentDataProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlEquivalentDataProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlEquivalentDataProperty::Constraint_store_t > owlEquivalentDataProperty_constraint_store{ chr::make_shared< typename owlEquivalentDataProperty::Constraint_store_t >("owlEquivalentDataProperty") };
	//(constraint store) owlObjectPropertyDomain( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1> }, persistent
public:
	struct owlObjectPropertyDomain {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0>, chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlObjectPropertyDomain_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlObjectPropertyDomain(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlObjectPropertyDomain::Constraint_store_t > owlObjectPropertyDomain_constraint_store{ chr::make_shared< typename owlObjectPropertyDomain::Constraint_store_t >("owlObjectPropertyDomain") };
	//(constraint store) owlObjectPropertyRange( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1> }, persistent
public:
	struct owlObjectPropertyRange {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0>, chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlObjectPropertyRange_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlObjectPropertyRange(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlObjectPropertyRange::Constraint_store_t > owlObjectPropertyRange_constraint_store{ chr::make_shared< typename owlObjectPropertyRange::Constraint_store_t >("owlObjectPropertyRange") };
	//(constraint store) owlClassAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( +bool ) ), indexes: { <0,2>, <1,2>, <2>, <0,1,2> }, persistent
public:
	struct owlClassAssertion {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var_ground< bool > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,2>, chr::LNS::Index<1,2>, chr::LNS::Index<2>, chr::LNS::Index<0,1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlClassAssertion_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlClassAssertion(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlClassAssertion::Constraint_store_t > owlClassAssertion_constraint_store{ chr::make_shared< typename owlClassAssertion::Constraint_store_t >("owlClassAssertion") };
	//(constraint store) owlDisjointClass( ( ?( std :: vector  )< ( std :: string ) > ) ), indexes: { <0> }, persistent
public:
	struct owlDisjointClass {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: vector < std :: string > > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDisjointClass_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDisjointClass(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDisjointClass::Constraint_store_t > owlDisjointClass_constraint_store{ chr::make_shared< typename owlDisjointClass::Constraint_store_t >("owlDisjointClass") };
	//(constraint store) owlNegativeObjectAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1,2> }, persistent
public:
	struct owlNegativeObjectAssertion {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlNegativeObjectAssertion_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlNegativeObjectAssertion(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlNegativeObjectAssertion::Constraint_store_t > owlNegativeObjectAssertion_constraint_store{ chr::make_shared< typename owlNegativeObjectAssertion::Constraint_store_t >("owlNegativeObjectAssertion") };
	//(constraint store) owlObjectPropertyAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <2>, <0,1,2>, <0,2>, <1>, <1,2>, <0> }, persistent
public:
	struct owlObjectPropertyAssertion {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1>, chr::LNS::Index<2>, chr::LNS::Index<0,1,2>, chr::LNS::Index<0,2>, chr::LNS::Index<1>, chr::LNS::Index<1,2>, chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlObjectPropertyAssertion_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlObjectPropertyAssertion(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlObjectPropertyAssertion::Constraint_store_t > owlObjectPropertyAssertion_constraint_store{ chr::make_shared< typename owlObjectPropertyAssertion::Constraint_store_t >("owlObjectPropertyAssertion") };
	//(constraint store) owlSameIndividual( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlSameIndividual {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlSameIndividual_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlSameIndividual(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlSameIndividual::Constraint_store_t > owlSameIndividual_constraint_store{ chr::make_shared< typename owlSameIndividual::Constraint_store_t >("owlSameIndividual") };
	//(constraint store) owlDifferentIndividual( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlDifferentIndividual {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDifferentIndividual_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDifferentIndividual(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDifferentIndividual::Constraint_store_t > owlDifferentIndividual_constraint_store{ chr::make_shared< typename owlDifferentIndividual::Constraint_store_t >("owlDifferentIndividual") };
	//(constraint store) owlInverseObjectProperty( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <0> }, persistent
public:
	struct owlInverseObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1>, chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlInverseObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlInverseObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlInverseObjectProperty::Constraint_store_t > owlInverseObjectProperty_constraint_store{ chr::make_shared< typename owlInverseObjectProperty::Constraint_store_t >("owlInverseObjectProperty") };
	//(constraint store) owlSymmetricObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlSymmetricObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlSymmetricObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlSymmetricObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlSymmetricObjectProperty::Constraint_store_t > owlSymmetricObjectProperty_constraint_store{ chr::make_shared< typename owlSymmetricObjectProperty::Constraint_store_t >("owlSymmetricObjectProperty") };
	//(constraint store) owlAsymmetricObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlAsymmetricObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlAsymmetricObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlAsymmetricObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlAsymmetricObjectProperty::Constraint_store_t > owlAsymmetricObjectProperty_constraint_store{ chr::make_shared< typename owlAsymmetricObjectProperty::Constraint_store_t >("owlAsymmetricObjectProperty") };
	//(constraint store) owlDisjointObjectProperty( ( ?( std :: vector  )< ( std :: string ) > ) ), indexes: { <0> }, persistent
public:
	struct owlDisjointObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: vector < std :: string > > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDisjointObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDisjointObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDisjointObjectProperty::Constraint_store_t > owlDisjointObjectProperty_constraint_store{ chr::make_shared< typename owlDisjointObjectProperty::Constraint_store_t >("owlDisjointObjectProperty") };
	//(constraint store) owlDisjointDataProperty( ( ?( std :: vector  )< ( std :: string ) > ) ), persistent
public:
	struct owlDisjointDataProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: vector < std :: string > > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDisjointDataProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDisjointDataProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDisjointDataProperty::Constraint_store_t > owlDisjointDataProperty_constraint_store{ chr::make_shared< typename owlDisjointDataProperty::Constraint_store_t >("owlDisjointDataProperty") };
	//(constraint store) owlReflexiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlReflexiveObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlReflexiveObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlReflexiveObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlReflexiveObjectProperty::Constraint_store_t > owlReflexiveObjectProperty_constraint_store{ chr::make_shared< typename owlReflexiveObjectProperty::Constraint_store_t >("owlReflexiveObjectProperty") };
	//(constraint store) owlIrreflexiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlIrreflexiveObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlIrreflexiveObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlIrreflexiveObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlIrreflexiveObjectProperty::Constraint_store_t > owlIrreflexiveObjectProperty_constraint_store{ chr::make_shared< typename owlIrreflexiveObjectProperty::Constraint_store_t >("owlIrreflexiveObjectProperty") };
	//(constraint store) owlFunctionalObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlFunctionalObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlFunctionalObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlFunctionalObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlFunctionalObjectProperty::Constraint_store_t > owlFunctionalObjectProperty_constraint_store{ chr::make_shared< typename owlFunctionalObjectProperty::Constraint_store_t >("owlFunctionalObjectProperty") };
	//(constraint store) owlFunctionalDataProperty( ( +( std :: string ) ) ), persistent
public:
	struct owlFunctionalDataProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlFunctionalDataProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlFunctionalDataProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlFunctionalDataProperty::Constraint_store_t > owlFunctionalDataProperty_constraint_store{ chr::make_shared< typename owlFunctionalDataProperty::Constraint_store_t >("owlFunctionalDataProperty") };
	//(constraint store) owlInverseFunctionalObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlInverseFunctionalObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlInverseFunctionalObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlInverseFunctionalObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlInverseFunctionalObjectProperty::Constraint_store_t > owlInverseFunctionalObjectProperty_constraint_store{ chr::make_shared< typename owlInverseFunctionalObjectProperty::Constraint_store_t >("owlInverseFunctionalObjectProperty") };
	//(constraint store) owlTransitiveObjectProperty( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlTransitiveObjectProperty {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlTransitiveObjectProperty_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlTransitiveObjectProperty(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlTransitiveObjectProperty::Constraint_store_t > owlTransitiveObjectProperty_constraint_store{ chr::make_shared< typename owlTransitiveObjectProperty::Constraint_store_t >("owlTransitiveObjectProperty") };
	//(constraint store) owlDataPropertyAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?Value ) ), indexes: { <0,2>, <1,2>, <1>, <0>, <0,1,2> }, persistent
public:
	struct owlDataPropertyAssertion {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< Value > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,2>, chr::LNS::Index<1,2>, chr::LNS::Index<1>, chr::LNS::Index<0>, chr::LNS::Index<0,1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDataPropertyAssertion_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDataPropertyAssertion(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDataPropertyAssertion::Constraint_store_t > owlDataPropertyAssertion_constraint_store{ chr::make_shared< typename owlDataPropertyAssertion::Constraint_store_t >("owlDataPropertyAssertion") };
	//(constraint store) owlNegativeDataAssertion( ( +( std :: string ) ), ( +( std :: string ) ), ( +Value ) ), indexes: { <0,1,2> }, persistent
public:
	struct owlNegativeDataAssertion {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< Value > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlNegativeDataAssertion_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlNegativeDataAssertion(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlNegativeDataAssertion::Constraint_store_t > owlNegativeDataAssertion_constraint_store{ chr::make_shared< typename owlNegativeDataAssertion::Constraint_store_t >("owlNegativeDataAssertion") };
	//(constraint store) owlDataPropertyRange( ( +( std :: string ) ), ( +( std :: shared_ptr )< AnySimpleType > ) ), indexes: { <0> }, persistent
public:
	struct owlDataPropertyRange {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: shared_ptr< AnySimpleType > > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDataPropertyRange_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDataPropertyRange(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDataPropertyRange::Constraint_store_t > owlDataPropertyRange_constraint_store{ chr::make_shared< typename owlDataPropertyRange::Constraint_store_t >("owlDataPropertyRange") };
	//(constraint store) owlDataPropertyDomain( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct owlDataPropertyDomain {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlDataPropertyDomain_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlDataPropertyDomain(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlDataPropertyDomain::Constraint_store_t > owlDataPropertyDomain_constraint_store{ chr::make_shared< typename owlDataPropertyDomain::Constraint_store_t >("owlDataPropertyDomain") };
	//(constraint store) owlUnionClass( ( +( std :: string ) ), ( +( std :: string ) ) ), indexes: { <1> }, persistent
public:
	struct owlUnionClass {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlUnionClass_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlUnionClass(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlUnionClass::Constraint_store_t > owlUnionClass_constraint_store{ chr::make_shared< typename owlUnionClass::Constraint_store_t >("owlUnionClass") };
	//(constraint store) owlUnionOf1( ( +( std :: string ) ), ( +set ) ), indexes: { <1> }, persistent
public:
	struct owlUnionOf1 {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< set > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlUnionOf1_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlUnionOf1(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlUnionOf1::Constraint_store_t > owlUnionOf1_constraint_store{ chr::make_shared< typename owlUnionOf1::Constraint_store_t >("owlUnionOf1") };
	//(constraint store) owlUnionOf( ( +( std :: string ) ), ( +iterator ), ( +iterator ) ), persistent
public:
	struct owlUnionOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< iterator >, chr::Logical_var_ground< iterator > >;
	};
	//(constraint store) owlIntersectionOf1( ( +( std :: string ) ), ( +set ) ), persistent
public:
	struct owlIntersectionOf1 {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< set > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlIntersectionOf1_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlIntersectionOf1(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlIntersectionOf1::Constraint_store_t > owlIntersectionOf1_constraint_store{ chr::make_shared< typename owlIntersectionOf1::Constraint_store_t >("owlIntersectionOf1") };
	//(constraint store) owlIntersectionClass( ( +( std :: string ) ), ( +( std :: string ) ), ( +int ) ), indexes: { <0,1,2>, <1,2>, <1>, <0> }, persistent
public:
	struct owlIntersectionClass {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1,2>, chr::LNS::Index<1,2>, chr::LNS::Index<1>, chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlIntersectionClass_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlIntersectionClass(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlIntersectionClass::Constraint_store_t > owlIntersectionClass_constraint_store{ chr::make_shared< typename owlIntersectionClass::Constraint_store_t >("owlIntersectionClass") };
	//(constraint store) owlIntersectionOf( ( +( std :: string ) ), ( +iterator ), ( +iterator ), ( +int ) ), indexes: { <0,3> }, persistent
public:
	struct owlIntersectionOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< iterator >, chr::Logical_var_ground< iterator >, chr::Logical_var_ground< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,3> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlIntersectionOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlIntersectionOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlIntersectionOf::Constraint_store_t > owlIntersectionOf_constraint_store{ chr::make_shared< typename owlIntersectionOf::Constraint_store_t >("owlIntersectionOf") };
	//(constraint store) owlCandidatsIntersection( ( +( std :: string ) ), ( +( std :: string ) ), ( +int ) ), indexes: { <0,1,2>, <1,2> }, persistent
public:
	struct owlCandidatsIntersection {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< std :: string >, chr::Logical_var_ground< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1,2>, chr::LNS::Index<1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlCandidatsIntersection_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlCandidatsIntersection(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlCandidatsIntersection::Constraint_store_t > owlCandidatsIntersection_constraint_store{ chr::make_shared< typename owlCandidatsIntersection::Constraint_store_t >("owlCandidatsIntersection") };
	//(constraint store) owlTempClassAssertion( ( ?( std :: string ) ), ( ?( std :: string ) ) ), persistent
public:
	struct owlTempClassAssertion {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlTempClassAssertion_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlTempClassAssertion(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlTempClassAssertion::Constraint_store_t > owlTempClassAssertion_constraint_store{ chr::make_shared< typename owlTempClassAssertion::Constraint_store_t >("owlTempClassAssertion") };
	//(constraint store) owlAllValuesFrom( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1>, <0,2>, <0> }, persistent
public:
	struct owlAllValuesFrom {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1>, chr::LNS::Index<0,2>, chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlAllValuesFrom_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlAllValuesFrom(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlAllValuesFrom::Constraint_store_t > owlAllValuesFrom_constraint_store{ chr::make_shared< typename owlAllValuesFrom::Constraint_store_t >("owlAllValuesFrom") };
	//(constraint store) owlSomeValuesFrom( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <2>, <0>, <1,2> }, persistent
public:
	struct owlSomeValuesFrom {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<2>, chr::LNS::Index<0>, chr::LNS::Index<1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlSomeValuesFrom_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlSomeValuesFrom(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlSomeValuesFrom::Constraint_store_t > owlSomeValuesFrom_constraint_store{ chr::make_shared< typename owlSomeValuesFrom::Constraint_store_t >("owlSomeValuesFrom") };
	//(constraint store) owlObjectPropertyChain( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?int ), ( ?int ) ), indexes: { <0,3>, <1,2>, <0,1,3> }, persistent
public:
	struct owlObjectPropertyChain {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< int >, chr::Logical_var< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,3>, chr::LNS::Index<1,2>, chr::LNS::Index<0,1,3> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlObjectPropertyChain_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlObjectPropertyChain(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlObjectPropertyChain::Constraint_store_t > owlObjectPropertyChain_constraint_store{ chr::make_shared< typename owlObjectPropertyChain::Constraint_store_t >("owlObjectPropertyChain") };
	//(constraint store) constructPropertyChain( ( ?( std :: string ) ), ( ?int ), ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?int ) ), indexes: { <3>, <0,4> }, persistent
public:
	struct constructPropertyChain {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< int >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<3>, chr::LNS::Index<0,4> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->constructPropertyChain_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_constructPropertyChain(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename constructPropertyChain::Constraint_store_t > constructPropertyChain_constraint_store{ chr::make_shared< typename constructPropertyChain::Constraint_store_t >("constructPropertyChain") };
	//(constraint store) owlComplementOf( ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0,1> }, persistent
public:
	struct owlComplementOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlComplementOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlComplementOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlComplementOf::Constraint_store_t > owlComplementOf_constraint_store{ chr::make_shared< typename owlComplementOf::Constraint_store_t >("owlComplementOf") };
	//(constraint store) querySuperClassOf( ( ?( std :: string ) ) ), persistent
public:
	struct querySuperClassOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->querySuperClassOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_querySuperClassOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename querySuperClassOf::Constraint_store_t > querySuperClassOf_constraint_store{ chr::make_shared< typename querySuperClassOf::Constraint_store_t >("querySuperClassOf") };
	//(constraint store) querySubClassOf( ( ?( std :: string ) ) ), persistent
public:
	struct querySubClassOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->querySubClassOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_querySubClassOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename querySubClassOf::Constraint_store_t > querySubClassOf_constraint_store{ chr::make_shared< typename querySubClassOf::Constraint_store_t >("querySubClassOf") };
	//(constraint store) queryClassification( ( ?( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct queryClassification {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->queryClassification_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_queryClassification(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename queryClassification::Constraint_store_t > queryClassification_constraint_store{ chr::make_shared< typename queryClassification::Constraint_store_t >("queryClassification") };
	//(constraint store) queryClassificationTemp( ( ?( std :: string ) ) ), persistent
public:
	struct queryClassificationTemp {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->queryClassificationTemp_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_queryClassificationTemp(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename queryClassificationTemp::Constraint_store_t > queryClassificationTemp_constraint_store{ chr::make_shared< typename queryClassificationTemp::Constraint_store_t >("queryClassificationTemp") };
	//(constraint store) res( ( +( std :: string ) ) ), indexes: { <0> }, persistent
public:
	struct res {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->res_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_res(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename res::Constraint_store_t > res_constraint_store{ chr::make_shared< typename res::Constraint_store_t >("res") };
	//(constraint store) queryFullUri( ( ?( std :: string ) ) ), persistent
public:
	struct queryFullUri {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->queryFullUri_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_queryFullUri(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename queryFullUri::Constraint_store_t > queryFullUri_constraint_store{ chr::make_shared< typename queryFullUri::Constraint_store_t >("queryFullUri") };
	//(constraint store) logicalName( ( +( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <1>, <0,1> }, persistent
public:
	struct logicalName {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<1>, chr::LNS::Index<0,1> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->logicalName_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_logicalName(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename logicalName::Constraint_store_t > logicalName_constraint_store{ chr::make_shared< typename logicalName::Constraint_store_t >("logicalName") };
	//(constraint store) owlMaxCardinality( ( ?( std :: string ) ), ( ?( std :: string ) ), ( +int ) ), indexes: { <0,2>, <1,2> }, persistent
public:
	struct owlMaxCardinality {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var_ground< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,2>, chr::LNS::Index<1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlMaxCardinality_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlMaxCardinality(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlMaxCardinality::Constraint_store_t > owlMaxCardinality_constraint_store{ chr::make_shared< typename owlMaxCardinality::Constraint_store_t >("owlMaxCardinality") };
	//(constraint store) owlMaxQualifiedCardinality( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ), ( +int ) ), indexes: { <0,3>, <2,3>, <1,3> }, persistent
public:
	struct owlMaxQualifiedCardinality {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var_ground< int > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0,3>, chr::LNS::Index<2,3>, chr::LNS::Index<1,3> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlMaxQualifiedCardinality_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlMaxQualifiedCardinality(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlMaxQualifiedCardinality::Constraint_store_t > owlMaxQualifiedCardinality_constraint_store{ chr::make_shared< typename owlMaxQualifiedCardinality::Constraint_store_t >("owlMaxQualifiedCardinality") };
	//(constraint store) owlHasValueObject( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <0>, <0,1>, <1,2> }, persistent
public:
	struct owlHasValueObject {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0>, chr::LNS::Index<0,1>, chr::LNS::Index<1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlHasValueObject_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlHasValueObject(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlHasValueObject::Constraint_store_t > owlHasValueObject_constraint_store{ chr::make_shared< typename owlHasValueObject::Constraint_store_t >("owlHasValueObject") };
	//(constraint store) owlHasValueData( ( ?( std :: string ) ), ( ?( std :: string ) ), ( ?Value ) ), indexes: { <0>, <0,1>, <1,2> }, persistent
public:
	struct owlHasValueData {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< std :: string >, chr::Logical_var< Value > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<0>, chr::LNS::Index<0,1>, chr::LNS::Index<1,2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlHasValueData_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlHasValueData(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlHasValueData::Constraint_store_t > owlHasValueData_constraint_store{ chr::make_shared< typename owlHasValueData::Constraint_store_t >("owlHasValueData") };
	//(constraint store) owlOneOf( ( ?( std :: string ) ), ( ?set ) ), persistent
public:
	struct owlOneOf {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< set > >;
		using Constraint_store_t = typename chr::Constraint_store_simple< Type, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlOneOf_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlOneOf(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlOneOf::Constraint_store_t > owlOneOf_constraint_store{ chr::make_shared< typename owlOneOf::Constraint_store_t >("owlOneOf") };
	//(constraint store) owlOneOfLoop( ( ?( std :: string ) ), ( +iteratorSet ), ( +iteratorSet ) ), persistent
public:
	struct owlOneOfLoop {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var_ground< iteratorSet >, chr::Logical_var_ground< iteratorSet > >;
	};
	//(constraint store) owlHasKey( ( ?( std :: string ) ), ( ?set ), ( ?( std :: string ) ) ), indexes: { <2> }, persistent
public:
	struct owlHasKey {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var< std :: string >, chr::Logical_var< set >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<2> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlHasKey_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlHasKey(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlHasKey::Constraint_store_t > owlHasKey_constraint_store{ chr::make_shared< typename owlHasKey::Constraint_store_t >("owlHasKey") };
	//(constraint store) owlHasKeyLoop( ( +iteratorSet ), ( +iteratorSet ), ( ?( std :: string ) ), ( ?( std :: string ) ) ), indexes: { <2,3> }, persistent
public:
	struct owlHasKeyLoop {
		using Type = typename std::tuple< unsigned long int, chr::Logical_var_ground< iteratorSet >, chr::Logical_var_ground< iteratorSet >, chr::Logical_var< std :: string >, chr::Logical_var< std :: string > >;
		using Constraint_store_t = typename chr::Constraint_store_index< Type, std::tuple< chr::LNS::Index<2,3> >, false >;
		class Constraint_callback : public chr::Logical_var_imp_observer_constraint {
		public:
			Constraint_callback(OWL2* space, typename Constraint_store_t::iterator& it) : _space(space), _it( std::move(it) ) { assert((space != nullptr) && _it.alive()); _it.lock(); }
			Constraint_callback(const Constraint_callback&) =delete;
			void operator=(const Constraint_callback&) =delete;
			~Constraint_callback() { if (!_space.expired() && _space->owlHasKeyLoop_constraint_store) _it.unlock(); }
			unsigned char run() override {
				if (_space.expired()) return 0;
				if (!_it.alive()) return 0;
				auto& cc = const_cast< Type& >(*_it);
				if ( _space->do_owlHasKeyLoop(cc, _it) == chr::ES_CHR::FAILURE ) { return 2; }
				return 1;
			}
		private:
			chr::Weak_obj< OWL2 > _space;
			typename Constraint_store_t::iterator _it;
		};
	};
private:
	chr::Shared_obj< typename owlHasKeyLoop::Constraint_store_t > owlHasKeyLoop_constraint_store{ chr::make_shared< typename owlHasKeyLoop::Constraint_store_t >("owlHasKeyLoop") };
public:
	volatile unsigned int _ref_use_count  = 0;///< Count of shared references
	volatile unsigned int _ref_weak_count = 0;///< Count of weak references + (#shared != 0)
	OWL2() { }
	~OWL2() {
		owlPrefix_constraint_store.release();
		owlClass_constraint_store.release();
		owlObjectProperty_constraint_store.release();
		owlDataProperty_constraint_store.release();
		owlNamedIndividual_constraint_store.release();
		owlSubclassOf_constraint_store.release();
		owlEquivalentClass_constraint_store.release();
		owlObjectSubPropertyOf_constraint_store.release();
		owlDataSubPropertyOf_constraint_store.release();
		owlEquivalentObjectProperty_constraint_store.release();
		owlEquivalentDataProperty_constraint_store.release();
		owlObjectPropertyDomain_constraint_store.release();
		owlObjectPropertyRange_constraint_store.release();
		owlClassAssertion_constraint_store.release();
		owlDisjointClass_constraint_store.release();
		owlNegativeObjectAssertion_constraint_store.release();
		owlObjectPropertyAssertion_constraint_store.release();
		owlSameIndividual_constraint_store.release();
		owlDifferentIndividual_constraint_store.release();
		owlInverseObjectProperty_constraint_store.release();
		owlSymmetricObjectProperty_constraint_store.release();
		owlAsymmetricObjectProperty_constraint_store.release();
		owlDisjointObjectProperty_constraint_store.release();
		owlDisjointDataProperty_constraint_store.release();
		owlReflexiveObjectProperty_constraint_store.release();
		owlIrreflexiveObjectProperty_constraint_store.release();
		owlFunctionalObjectProperty_constraint_store.release();
		owlFunctionalDataProperty_constraint_store.release();
		owlInverseFunctionalObjectProperty_constraint_store.release();
		owlTransitiveObjectProperty_constraint_store.release();
		owlDataPropertyAssertion_constraint_store.release();
		owlNegativeDataAssertion_constraint_store.release();
		owlDataPropertyRange_constraint_store.release();
		owlDataPropertyDomain_constraint_store.release();
		owlUnionClass_constraint_store.release();
		owlUnionOf1_constraint_store.release();
		owlIntersectionOf1_constraint_store.release();
		owlIntersectionClass_constraint_store.release();
		owlIntersectionOf_constraint_store.release();
		owlCandidatsIntersection_constraint_store.release();
		owlTempClassAssertion_constraint_store.release();
		owlAllValuesFrom_constraint_store.release();
		owlSomeValuesFrom_constraint_store.release();
		owlObjectPropertyChain_constraint_store.release();
		constructPropertyChain_constraint_store.release();
		owlComplementOf_constraint_store.release();
		querySuperClassOf_constraint_store.release();
		querySubClassOf_constraint_store.release();
		queryClassification_constraint_store.release();
		queryClassificationTemp_constraint_store.release();
		res_constraint_store.release();
		queryFullUri_constraint_store.release();
		logicalName_constraint_store.release();
		owlMaxCardinality_constraint_store.release();
		owlMaxQualifiedCardinality_constraint_store.release();
		owlHasValueObject_constraint_store.release();
		owlHasValueData_constraint_store.release();
		owlOneOf_constraint_store.release();
		owlHasKey_constraint_store.release();
		owlHasKeyLoop_constraint_store.release();
	}
	static chr::Shared_obj<OWL2> create() { return chr::make_shared<OWL2>(); }
	chr::Constraint_stores_iterator<chr::Shared_obj<typename owlPrefix::Constraint_store_t>,chr::Shared_obj<typename owlClass::Constraint_store_t>,chr::Shared_obj<typename owlObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlDataProperty::Constraint_store_t>,chr::Shared_obj<typename owlNamedIndividual::Constraint_store_t>,chr::Shared_obj<typename owlSubclassOf::Constraint_store_t>,chr::Shared_obj<typename owlEquivalentClass::Constraint_store_t>,chr::Shared_obj<typename owlObjectSubPropertyOf::Constraint_store_t>,chr::Shared_obj<typename owlDataSubPropertyOf::Constraint_store_t>,chr::Shared_obj<typename owlEquivalentObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlEquivalentDataProperty::Constraint_store_t>,chr::Shared_obj<typename owlObjectPropertyDomain::Constraint_store_t>,chr::Shared_obj<typename owlObjectPropertyRange::Constraint_store_t>,chr::Shared_obj<typename owlClassAssertion::Constraint_store_t>,chr::Shared_obj<typename owlDisjointClass::Constraint_store_t>,chr::Shared_obj<typename owlNegativeObjectAssertion::Constraint_store_t>,chr::Shared_obj<typename owlObjectPropertyAssertion::Constraint_store_t>,chr::Shared_obj<typename owlSameIndividual::Constraint_store_t>,chr::Shared_obj<typename owlDifferentIndividual::Constraint_store_t>,chr::Shared_obj<typename owlInverseObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlSymmetricObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlAsymmetricObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlDisjointObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlDisjointDataProperty::Constraint_store_t>,chr::Shared_obj<typename owlReflexiveObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlIrreflexiveObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlFunctionalObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlFunctionalDataProperty::Constraint_store_t>,chr::Shared_obj<typename owlInverseFunctionalObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlTransitiveObjectProperty::Constraint_store_t>,chr::Shared_obj<typename owlDataPropertyAssertion::Constraint_store_t>,chr::Shared_obj<typename owlNegativeDataAssertion::Constraint_store_t>,chr::Shared_obj<typename owlDataPropertyRange::Constraint_store_t>,chr::Shared_obj<typename owlDataPropertyDomain::Constraint_store_t>,chr::Shared_obj<typename owlUnionClass::Constraint_store_t>,chr::Shared_obj<typename owlUnionOf1::Constraint_store_t>,chr::Shared_obj<typename owlIntersectionOf1::Constraint_store_t>,chr::Shared_obj<typename owlIntersectionClass::Constraint_store_t>,chr::Shared_obj<typename owlIntersectionOf::Constraint_store_t>,chr::Shared_obj<typename owlCandidatsIntersection::Constraint_store_t>,chr::Shared_obj<typename owlTempClassAssertion::Constraint_store_t>,chr::Shared_obj<typename owlAllValuesFrom::Constraint_store_t>,chr::Shared_obj<typename owlSomeValuesFrom::Constraint_store_t>,chr::Shared_obj<typename owlObjectPropertyChain::Constraint_store_t>,chr::Shared_obj<typename constructPropertyChain::Constraint_store_t>,chr::Shared_obj<typename owlComplementOf::Constraint_store_t>,chr::Shared_obj<typename querySuperClassOf::Constraint_store_t>,chr::Shared_obj<typename querySubClassOf::Constraint_store_t>,chr::Shared_obj<typename queryClassification::Constraint_store_t>,chr::Shared_obj<typename queryClassificationTemp::Constraint_store_t>,chr::Shared_obj<typename res::Constraint_store_t>,chr::Shared_obj<typename queryFullUri::Constraint_store_t>,chr::Shared_obj<typename logicalName::Constraint_store_t>,chr::Shared_obj<typename owlMaxCardinality::Constraint_store_t>,chr::Shared_obj<typename owlMaxQualifiedCardinality::Constraint_store_t>,chr::Shared_obj<typename owlHasValueObject::Constraint_store_t>,chr::Shared_obj<typename owlHasValueData::Constraint_store_t>,chr::Shared_obj<typename owlOneOf::Constraint_store_t>,chr::Shared_obj<typename owlHasKey::Constraint_store_t>,chr::Shared_obj<typename owlHasKeyLoop::Constraint_store_t>> chr_store_begin() { return chr::Constraint_stores_iterator(owlPrefix_constraint_store,owlClass_constraint_store,owlObjectProperty_constraint_store,owlDataProperty_constraint_store,owlNamedIndividual_constraint_store,owlSubclassOf_constraint_store,owlEquivalentClass_constraint_store,owlObjectSubPropertyOf_constraint_store,owlDataSubPropertyOf_constraint_store,owlEquivalentObjectProperty_constraint_store,owlEquivalentDataProperty_constraint_store,owlObjectPropertyDomain_constraint_store,owlObjectPropertyRange_constraint_store,owlClassAssertion_constraint_store,owlDisjointClass_constraint_store,owlNegativeObjectAssertion_constraint_store,owlObjectPropertyAssertion_constraint_store,owlSameIndividual_constraint_store,owlDifferentIndividual_constraint_store,owlInverseObjectProperty_constraint_store,owlSymmetricObjectProperty_constraint_store,owlAsymmetricObjectProperty_constraint_store,owlDisjointObjectProperty_constraint_store,owlDisjointDataProperty_constraint_store,owlReflexiveObjectProperty_constraint_store,owlIrreflexiveObjectProperty_constraint_store,owlFunctionalObjectProperty_constraint_store,owlFunctionalDataProperty_constraint_store,owlInverseFunctionalObjectProperty_constraint_store,owlTransitiveObjectProperty_constraint_store,owlDataPropertyAssertion_constraint_store,owlNegativeDataAssertion_constraint_store,owlDataPropertyRange_constraint_store,owlDataPropertyDomain_constraint_store,owlUnionClass_constraint_store,owlUnionOf1_constraint_store,owlIntersectionOf1_constraint_store,owlIntersectionClass_constraint_store,owlIntersectionOf_constraint_store,owlCandidatsIntersection_constraint_store,owlTempClassAssertion_constraint_store,owlAllValuesFrom_constraint_store,owlSomeValuesFrom_constraint_store,owlObjectPropertyChain_constraint_store,constructPropertyChain_constraint_store,owlComplementOf_constraint_store,querySuperClassOf_constraint_store,querySubClassOf_constraint_store,queryClassification_constraint_store,queryClassificationTemp_constraint_store,res_constraint_store,queryFullUri_constraint_store,logicalName_constraint_store,owlMaxCardinality_constraint_store,owlMaxQualifiedCardinality_constraint_store,owlHasValueObject_constraint_store,owlHasValueData_constraint_store,owlOneOf_constraint_store,owlHasKey_constraint_store,owlHasKeyLoop_constraint_store); }
	typename owlPrefix::Constraint_store_t& get_owlPrefix_store() { return *owlPrefix_constraint_store; }
	typename owlClass::Constraint_store_t& get_owlClass_store() { return *owlClass_constraint_store; }
	typename owlObjectProperty::Constraint_store_t& get_owlObjectProperty_store() { return *owlObjectProperty_constraint_store; }
	typename owlDataProperty::Constraint_store_t& get_owlDataProperty_store() { return *owlDataProperty_constraint_store; }
	typename owlNamedIndividual::Constraint_store_t& get_owlNamedIndividual_store() { return *owlNamedIndividual_constraint_store; }
	typename owlSubclassOf::Constraint_store_t& get_owlSubclassOf_store() { return *owlSubclassOf_constraint_store; }
	typename owlEquivalentClass::Constraint_store_t& get_owlEquivalentClass_store() { return *owlEquivalentClass_constraint_store; }
	typename owlObjectSubPropertyOf::Constraint_store_t& get_owlObjectSubPropertyOf_store() { return *owlObjectSubPropertyOf_constraint_store; }
	typename owlDataSubPropertyOf::Constraint_store_t& get_owlDataSubPropertyOf_store() { return *owlDataSubPropertyOf_constraint_store; }
	typename owlEquivalentObjectProperty::Constraint_store_t& get_owlEquivalentObjectProperty_store() { return *owlEquivalentObjectProperty_constraint_store; }
	typename owlEquivalentDataProperty::Constraint_store_t& get_owlEquivalentDataProperty_store() { return *owlEquivalentDataProperty_constraint_store; }
	typename owlObjectPropertyDomain::Constraint_store_t& get_owlObjectPropertyDomain_store() { return *owlObjectPropertyDomain_constraint_store; }
	typename owlObjectPropertyRange::Constraint_store_t& get_owlObjectPropertyRange_store() { return *owlObjectPropertyRange_constraint_store; }
	typename owlClassAssertion::Constraint_store_t& get_owlClassAssertion_store() { return *owlClassAssertion_constraint_store; }
	typename owlDisjointClass::Constraint_store_t& get_owlDisjointClass_store() { return *owlDisjointClass_constraint_store; }
	typename owlNegativeObjectAssertion::Constraint_store_t& get_owlNegativeObjectAssertion_store() { return *owlNegativeObjectAssertion_constraint_store; }
	typename owlObjectPropertyAssertion::Constraint_store_t& get_owlObjectPropertyAssertion_store() { return *owlObjectPropertyAssertion_constraint_store; }
	typename owlSameIndividual::Constraint_store_t& get_owlSameIndividual_store() { return *owlSameIndividual_constraint_store; }
	typename owlDifferentIndividual::Constraint_store_t& get_owlDifferentIndividual_store() { return *owlDifferentIndividual_constraint_store; }
	typename owlInverseObjectProperty::Constraint_store_t& get_owlInverseObjectProperty_store() { return *owlInverseObjectProperty_constraint_store; }
	typename owlSymmetricObjectProperty::Constraint_store_t& get_owlSymmetricObjectProperty_store() { return *owlSymmetricObjectProperty_constraint_store; }
	typename owlAsymmetricObjectProperty::Constraint_store_t& get_owlAsymmetricObjectProperty_store() { return *owlAsymmetricObjectProperty_constraint_store; }
	typename owlDisjointObjectProperty::Constraint_store_t& get_owlDisjointObjectProperty_store() { return *owlDisjointObjectProperty_constraint_store; }
	typename owlDisjointDataProperty::Constraint_store_t& get_owlDisjointDataProperty_store() { return *owlDisjointDataProperty_constraint_store; }
	typename owlReflexiveObjectProperty::Constraint_store_t& get_owlReflexiveObjectProperty_store() { return *owlReflexiveObjectProperty_constraint_store; }
	typename owlIrreflexiveObjectProperty::Constraint_store_t& get_owlIrreflexiveObjectProperty_store() { return *owlIrreflexiveObjectProperty_constraint_store; }
	typename owlFunctionalObjectProperty::Constraint_store_t& get_owlFunctionalObjectProperty_store() { return *owlFunctionalObjectProperty_constraint_store; }
	typename owlFunctionalDataProperty::Constraint_store_t& get_owlFunctionalDataProperty_store() { return *owlFunctionalDataProperty_constraint_store; }
	typename owlInverseFunctionalObjectProperty::Constraint_store_t& get_owlInverseFunctionalObjectProperty_store() { return *owlInverseFunctionalObjectProperty_constraint_store; }
	typename owlTransitiveObjectProperty::Constraint_store_t& get_owlTransitiveObjectProperty_store() { return *owlTransitiveObjectProperty_constraint_store; }
	typename owlDataPropertyAssertion::Constraint_store_t& get_owlDataPropertyAssertion_store() { return *owlDataPropertyAssertion_constraint_store; }
	typename owlNegativeDataAssertion::Constraint_store_t& get_owlNegativeDataAssertion_store() { return *owlNegativeDataAssertion_constraint_store; }
	typename owlDataPropertyRange::Constraint_store_t& get_owlDataPropertyRange_store() { return *owlDataPropertyRange_constraint_store; }
	typename owlDataPropertyDomain::Constraint_store_t& get_owlDataPropertyDomain_store() { return *owlDataPropertyDomain_constraint_store; }
	typename owlUnionClass::Constraint_store_t& get_owlUnionClass_store() { return *owlUnionClass_constraint_store; }
	typename owlUnionOf1::Constraint_store_t& get_owlUnionOf1_store() { return *owlUnionOf1_constraint_store; }
	typename owlIntersectionOf1::Constraint_store_t& get_owlIntersectionOf1_store() { return *owlIntersectionOf1_constraint_store; }
	typename owlIntersectionClass::Constraint_store_t& get_owlIntersectionClass_store() { return *owlIntersectionClass_constraint_store; }
	typename owlIntersectionOf::Constraint_store_t& get_owlIntersectionOf_store() { return *owlIntersectionOf_constraint_store; }
	typename owlCandidatsIntersection::Constraint_store_t& get_owlCandidatsIntersection_store() { return *owlCandidatsIntersection_constraint_store; }
	typename owlTempClassAssertion::Constraint_store_t& get_owlTempClassAssertion_store() { return *owlTempClassAssertion_constraint_store; }
	typename owlAllValuesFrom::Constraint_store_t& get_owlAllValuesFrom_store() { return *owlAllValuesFrom_constraint_store; }
	typename owlSomeValuesFrom::Constraint_store_t& get_owlSomeValuesFrom_store() { return *owlSomeValuesFrom_constraint_store; }
	typename owlObjectPropertyChain::Constraint_store_t& get_owlObjectPropertyChain_store() { return *owlObjectPropertyChain_constraint_store; }
	typename constructPropertyChain::Constraint_store_t& get_constructPropertyChain_store() { return *constructPropertyChain_constraint_store; }
	typename owlComplementOf::Constraint_store_t& get_owlComplementOf_store() { return *owlComplementOf_constraint_store; }
	typename querySuperClassOf::Constraint_store_t& get_querySuperClassOf_store() { return *querySuperClassOf_constraint_store; }
	typename querySubClassOf::Constraint_store_t& get_querySubClassOf_store() { return *querySubClassOf_constraint_store; }
	typename queryClassification::Constraint_store_t& get_queryClassification_store() { return *queryClassification_constraint_store; }
	typename queryClassificationTemp::Constraint_store_t& get_queryClassificationTemp_store() { return *queryClassificationTemp_constraint_store; }
	typename res::Constraint_store_t& get_res_store() { return *res_constraint_store; }
	typename queryFullUri::Constraint_store_t& get_queryFullUri_store() { return *queryFullUri_constraint_store; }
	typename logicalName::Constraint_store_t& get_logicalName_store() { return *logicalName_constraint_store; }
	typename owlMaxCardinality::Constraint_store_t& get_owlMaxCardinality_store() { return *owlMaxCardinality_constraint_store; }
	typename owlMaxQualifiedCardinality::Constraint_store_t& get_owlMaxQualifiedCardinality_store() { return *owlMaxQualifiedCardinality_constraint_store; }
	typename owlHasValueObject::Constraint_store_t& get_owlHasValueObject_store() { return *owlHasValueObject_constraint_store; }
	typename owlHasValueData::Constraint_store_t& get_owlHasValueData_store() { return *owlHasValueData_constraint_store; }
	typename owlOneOf::Constraint_store_t& get_owlOneOf_store() { return *owlOneOf_constraint_store; }
	typename owlHasKey::Constraint_store_t& get_owlHasKey_store() { return *owlHasKey_constraint_store; }
	typename owlHasKeyLoop::Constraint_store_t& get_owlHasKeyLoop_store() { return *owlHasKeyLoop_constraint_store; }
	struct History {
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_32{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_33{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_34{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_35{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_36{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_37{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_38{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_39{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_40{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_41{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_42{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_43{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_44{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_45{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_46{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_48{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_50{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_51{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_52{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_53{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_54{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_55{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_59{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_60{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_62{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_63{ chr::make_shared< typename chr::History_dyn< 3 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_66{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_67{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_70{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_73{ chr::make_shared< typename chr::History_dyn< 3 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_74{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_76{ chr::make_shared< typename chr::History_dyn< 3 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_77{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_79{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_80{ chr::make_shared< typename chr::History_dyn< 3 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_86{ chr::make_shared< typename chr::History_dyn< 3 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_87{ chr::make_shared< typename chr::History_dyn< 3 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_88{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 2 > > rule_89{ chr::make_shared< typename chr::History_dyn< 2 > >() };
		typename chr::Shared_obj< chr::History_dyn< 1 > > rule_90{ chr::make_shared< typename chr::History_dyn< 1 > >() };
		typename chr::Shared_obj< chr::History_dyn< 3 > > rule_93{ chr::make_shared< typename chr::History_dyn< 3 > >() };
	};
	History _history;
	chr::ES_CHR do_owlPrefix(typename owlPrefix::Type c_args, typename owlPrefix::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlPrefix( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlPrefix(std::move(c_args), owlPrefix_constraint_store->end());
	}
	chr::ES_CHR do_owlClass(typename owlClass::Type c_args, typename owlClass::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlClass( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlClass(std::move(c_args), owlClass_constraint_store->end());
	}
	chr::ES_CHR do_owlObjectProperty(typename owlObjectProperty::Type c_args, typename owlObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlObjectProperty(std::move(c_args), owlObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlDataProperty(typename owlDataProperty::Type c_args, typename owlDataProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDataProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlDataProperty(std::move(c_args), owlDataProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlNamedIndividual(typename owlNamedIndividual::Type c_args, typename owlNamedIndividual::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlNamedIndividual( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlNamedIndividual(std::move(c_args), owlNamedIndividual_constraint_store->end());
	}
	chr::ES_CHR do_owlSubclassOf(typename owlSubclassOf::Type c_args, typename owlSubclassOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlSubclassOf( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlSubclassOf(std::move(c_args), owlSubclassOf_constraint_store->end());
	}
	chr::ES_CHR do_owlEquivalentClass(typename owlEquivalentClass::Type c_args, typename owlEquivalentClass::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlEquivalentClass( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlEquivalentClass(std::move(c_args), owlEquivalentClass_constraint_store->end());
	}
	chr::ES_CHR do_owlObjectSubPropertyOf(typename owlObjectSubPropertyOf::Type c_args, typename owlObjectSubPropertyOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlObjectSubPropertyOf( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlObjectSubPropertyOf(std::move(c_args), owlObjectSubPropertyOf_constraint_store->end());
	}
	chr::ES_CHR do_owlDataSubPropertyOf(typename owlDataSubPropertyOf::Type c_args, typename owlDataSubPropertyOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDataSubPropertyOf( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlDataSubPropertyOf(std::move(c_args), owlDataSubPropertyOf_constraint_store->end());
	}
	chr::ES_CHR do_owlEquivalentObjectProperty(typename owlEquivalentObjectProperty::Type c_args, typename owlEquivalentObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlEquivalentObjectProperty( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlEquivalentObjectProperty(std::move(c_args), owlEquivalentObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlEquivalentDataProperty(typename owlEquivalentDataProperty::Type c_args, typename owlEquivalentDataProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlEquivalentDataProperty( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlEquivalentDataProperty(std::move(c_args), owlEquivalentDataProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlObjectPropertyDomain(typename owlObjectPropertyDomain::Type c_args, typename owlObjectPropertyDomain::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlObjectPropertyDomain( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlObjectPropertyDomain(std::move(c_args), owlObjectPropertyDomain_constraint_store->end());
	}
	chr::ES_CHR do_owlObjectPropertyRange(typename owlObjectPropertyRange::Type c_args, typename owlObjectPropertyRange::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlObjectPropertyRange( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlObjectPropertyRange(std::move(c_args), owlObjectPropertyRange_constraint_store->end());
	}
	chr::ES_CHR do_owlClassAssertion(typename owlClassAssertion::Type c_args, typename owlClassAssertion::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlClassAssertion( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var_ground< bool > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlClassAssertion(std::move(c_args), owlClassAssertion_constraint_store->end());
	}
	chr::ES_CHR do_owlDisjointClass(typename owlDisjointClass::Type c_args, typename owlDisjointClass::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDisjointClass( chr::Logical_var< std :: vector < std :: string > > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlDisjointClass(std::move(c_args), owlDisjointClass_constraint_store->end());
	}
	chr::ES_CHR do_owlNegativeObjectAssertion(typename owlNegativeObjectAssertion::Type c_args, typename owlNegativeObjectAssertion::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlNegativeObjectAssertion( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< std :: string > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlNegativeObjectAssertion(std::move(c_args), owlNegativeObjectAssertion_constraint_store->end());
	}
	chr::ES_CHR do_owlObjectPropertyAssertion(typename owlObjectPropertyAssertion::Type c_args, typename owlObjectPropertyAssertion::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlObjectPropertyAssertion( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< std :: string > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlObjectPropertyAssertion(std::move(c_args), owlObjectPropertyAssertion_constraint_store->end());
	}
	chr::ES_CHR do_owlSameIndividual(typename owlSameIndividual::Type c_args, typename owlSameIndividual::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlSameIndividual( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlSameIndividual(std::move(c_args), owlSameIndividual_constraint_store->end());
	}
	chr::ES_CHR do_owlDifferentIndividual(typename owlDifferentIndividual::Type c_args, typename owlDifferentIndividual::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDifferentIndividual( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlDifferentIndividual(std::move(c_args), owlDifferentIndividual_constraint_store->end());
	}
	chr::ES_CHR do_owlInverseObjectProperty(typename owlInverseObjectProperty::Type c_args, typename owlInverseObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlInverseObjectProperty( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlInverseObjectProperty(std::move(c_args), owlInverseObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlSymmetricObjectProperty(typename owlSymmetricObjectProperty::Type c_args, typename owlSymmetricObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlSymmetricObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlSymmetricObjectProperty(std::move(c_args), owlSymmetricObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlAsymmetricObjectProperty(typename owlAsymmetricObjectProperty::Type c_args, typename owlAsymmetricObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlAsymmetricObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlAsymmetricObjectProperty(std::move(c_args), owlAsymmetricObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlDisjointObjectProperty(typename owlDisjointObjectProperty::Type c_args, typename owlDisjointObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDisjointObjectProperty( chr::Logical_var< std :: vector < std :: string > > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlDisjointObjectProperty(std::move(c_args), owlDisjointObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlDisjointDataProperty(typename owlDisjointDataProperty::Type c_args, typename owlDisjointDataProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDisjointDataProperty( chr::Logical_var< std :: vector < std :: string > > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlDisjointDataProperty(std::move(c_args), owlDisjointDataProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlReflexiveObjectProperty(typename owlReflexiveObjectProperty::Type c_args, typename owlReflexiveObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlReflexiveObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlReflexiveObjectProperty(std::move(c_args), owlReflexiveObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlIrreflexiveObjectProperty(typename owlIrreflexiveObjectProperty::Type c_args, typename owlIrreflexiveObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlIrreflexiveObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlIrreflexiveObjectProperty(std::move(c_args), owlIrreflexiveObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlFunctionalObjectProperty(typename owlFunctionalObjectProperty::Type c_args, typename owlFunctionalObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlFunctionalObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlFunctionalObjectProperty(std::move(c_args), owlFunctionalObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlFunctionalDataProperty(typename owlFunctionalDataProperty::Type c_args, typename owlFunctionalDataProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlFunctionalDataProperty( chr::Logical_var_ground< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlFunctionalDataProperty(std::move(c_args), owlFunctionalDataProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlInverseFunctionalObjectProperty(typename owlInverseFunctionalObjectProperty::Type c_args, typename owlInverseFunctionalObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlInverseFunctionalObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlInverseFunctionalObjectProperty(std::move(c_args), owlInverseFunctionalObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlTransitiveObjectProperty(typename owlTransitiveObjectProperty::Type c_args, typename owlTransitiveObjectProperty::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlTransitiveObjectProperty( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_owlTransitiveObjectProperty(std::move(c_args), owlTransitiveObjectProperty_constraint_store->end());
	}
	chr::ES_CHR do_owlDataPropertyAssertion(typename owlDataPropertyAssertion::Type c_args, typename owlDataPropertyAssertion::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDataPropertyAssertion( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< Value > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlDataPropertyAssertion(std::move(c_args), owlDataPropertyAssertion_constraint_store->end());
	}
	chr::ES_CHR do_owlNegativeDataAssertion(typename owlNegativeDataAssertion::Type c_args, typename owlNegativeDataAssertion::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlNegativeDataAssertion( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1, chr::Logical_var_ground< Value > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlNegativeDataAssertion(std::move(c_args), owlNegativeDataAssertion_constraint_store->end());
	}
	chr::ES_CHR do_owlDataPropertyRange(typename owlDataPropertyRange::Type c_args, typename owlDataPropertyRange::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDataPropertyRange( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: shared_ptr< AnySimpleType > > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlDataPropertyRange(std::move(c_args), owlDataPropertyRange_constraint_store->end());
	}
	chr::ES_CHR do_owlDataPropertyDomain(typename owlDataPropertyDomain::Type c_args, typename owlDataPropertyDomain::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlDataPropertyDomain( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlDataPropertyDomain(std::move(c_args), owlDataPropertyDomain_constraint_store->end());
	}
	chr::ES_CHR do_owlUnionClass(typename owlUnionClass::Type c_args, typename owlUnionClass::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlUnionClass( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlUnionClass(std::move(c_args), owlUnionClass_constraint_store->end());
	}
	chr::ES_CHR do_owlUnionOf1(typename owlUnionOf1::Type c_args, typename owlUnionOf1::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlUnionOf1( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< set > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlUnionOf1(std::move(c_args), owlUnionOf1_constraint_store->end());
	}
	chr::ES_CHR do_owlUnionOf(typename owlUnionOf::Type c_args);
	chr::ES_CHR owlUnionOf( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< iterator > arg1, chr::Logical_var_ground< iterator > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlUnionOf(std::move(c_args));
	}
	chr::ES_CHR do_owlIntersectionOf1(typename owlIntersectionOf1::Type c_args, typename owlIntersectionOf1::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlIntersectionOf1( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< set > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlIntersectionOf1(std::move(c_args), owlIntersectionOf1_constraint_store->end());
	}
	chr::ES_CHR do_owlIntersectionClass(typename owlIntersectionClass::Type c_args, typename owlIntersectionClass::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlIntersectionClass( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1, chr::Logical_var_ground< int > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlIntersectionClass(std::move(c_args), owlIntersectionClass_constraint_store->end());
	}
	chr::ES_CHR do_owlIntersectionOf(typename owlIntersectionOf::Type c_args, typename owlIntersectionOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlIntersectionOf( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< iterator > arg1, chr::Logical_var_ground< iterator > arg2, chr::Logical_var_ground< int > arg3) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2, arg3);
		return do_owlIntersectionOf(std::move(c_args), owlIntersectionOf_constraint_store->end());
	}
	chr::ES_CHR do_owlCandidatsIntersection(typename owlCandidatsIntersection::Type c_args, typename owlCandidatsIntersection::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlCandidatsIntersection( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var_ground< std :: string > arg1, chr::Logical_var_ground< int > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlCandidatsIntersection(std::move(c_args), owlCandidatsIntersection_constraint_store->end());
	}
	chr::ES_CHR do_owlTempClassAssertion(typename owlTempClassAssertion::Type c_args, typename owlTempClassAssertion::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlTempClassAssertion( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlTempClassAssertion(std::move(c_args), owlTempClassAssertion_constraint_store->end());
	}
	chr::ES_CHR do_owlAllValuesFrom(typename owlAllValuesFrom::Type c_args, typename owlAllValuesFrom::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlAllValuesFrom( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< std :: string > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlAllValuesFrom(std::move(c_args), owlAllValuesFrom_constraint_store->end());
	}
	chr::ES_CHR do_owlSomeValuesFrom(typename owlSomeValuesFrom::Type c_args, typename owlSomeValuesFrom::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlSomeValuesFrom( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< std :: string > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlSomeValuesFrom(std::move(c_args), owlSomeValuesFrom_constraint_store->end());
	}
	chr::ES_CHR do_owlObjectPropertyChain(typename owlObjectPropertyChain::Type c_args, typename owlObjectPropertyChain::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlObjectPropertyChain( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< int > arg2, chr::Logical_var< int > arg3) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2, arg3);
		return do_owlObjectPropertyChain(std::move(c_args), owlObjectPropertyChain_constraint_store->end());
	}
	chr::ES_CHR do_constructPropertyChain(typename constructPropertyChain::Type c_args, typename constructPropertyChain::Constraint_store_t::iterator c_it);
	chr::ES_CHR constructPropertyChain( chr::Logical_var< std :: string > arg0, chr::Logical_var< int > arg1, chr::Logical_var< std :: string > arg2, chr::Logical_var< std :: string > arg3, chr::Logical_var< int > arg4) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2, arg3, arg4);
		return do_constructPropertyChain(std::move(c_args), constructPropertyChain_constraint_store->end());
	}
	chr::ES_CHR do_owlComplementOf(typename owlComplementOf::Type c_args, typename owlComplementOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlComplementOf( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlComplementOf(std::move(c_args), owlComplementOf_constraint_store->end());
	}
	chr::ES_CHR do_querySuperClassOf(typename querySuperClassOf::Type c_args, typename querySuperClassOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR querySuperClassOf( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_querySuperClassOf(std::move(c_args), querySuperClassOf_constraint_store->end());
	}
	chr::ES_CHR do_querySubClassOf(typename querySubClassOf::Type c_args, typename querySubClassOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR querySubClassOf( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_querySubClassOf(std::move(c_args), querySubClassOf_constraint_store->end());
	}
	chr::ES_CHR do_queryClassification(typename queryClassification::Type c_args, typename queryClassification::Constraint_store_t::iterator c_it);
	chr::ES_CHR queryClassification( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_queryClassification(std::move(c_args), queryClassification_constraint_store->end());
	}
	chr::ES_CHR do_queryClassificationTemp(typename queryClassificationTemp::Type c_args, typename queryClassificationTemp::Constraint_store_t::iterator c_it);
	chr::ES_CHR queryClassificationTemp( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_queryClassificationTemp(std::move(c_args), queryClassificationTemp_constraint_store->end());
	}
	chr::ES_CHR do_res(typename res::Type c_args, typename res::Constraint_store_t::iterator c_it);
	chr::ES_CHR res( chr::Logical_var_ground< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_res(std::move(c_args), res_constraint_store->end());
	}
	chr::ES_CHR do_queryFullUri(typename queryFullUri::Type c_args, typename queryFullUri::Constraint_store_t::iterator c_it);
	chr::ES_CHR queryFullUri( chr::Logical_var< std :: string > arg0) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0);
		return do_queryFullUri(std::move(c_args), queryFullUri_constraint_store->end());
	}
	chr::ES_CHR do_logicalName(typename logicalName::Type c_args, typename logicalName::Constraint_store_t::iterator c_it);
	chr::ES_CHR logicalName( chr::Logical_var_ground< std :: string > arg0, chr::Logical_var< std :: string > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_logicalName(std::move(c_args), logicalName_constraint_store->end());
	}
	chr::ES_CHR do_owlMaxCardinality(typename owlMaxCardinality::Type c_args, typename owlMaxCardinality::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlMaxCardinality( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var_ground< int > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlMaxCardinality(std::move(c_args), owlMaxCardinality_constraint_store->end());
	}
	chr::ES_CHR do_owlMaxQualifiedCardinality(typename owlMaxQualifiedCardinality::Type c_args, typename owlMaxQualifiedCardinality::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlMaxQualifiedCardinality( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< std :: string > arg2, chr::Logical_var_ground< int > arg3) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2, arg3);
		return do_owlMaxQualifiedCardinality(std::move(c_args), owlMaxQualifiedCardinality_constraint_store->end());
	}
	chr::ES_CHR do_owlHasValueObject(typename owlHasValueObject::Type c_args, typename owlHasValueObject::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlHasValueObject( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< std :: string > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlHasValueObject(std::move(c_args), owlHasValueObject_constraint_store->end());
	}
	chr::ES_CHR do_owlHasValueData(typename owlHasValueData::Type c_args, typename owlHasValueData::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlHasValueData( chr::Logical_var< std :: string > arg0, chr::Logical_var< std :: string > arg1, chr::Logical_var< Value > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlHasValueData(std::move(c_args), owlHasValueData_constraint_store->end());
	}
	chr::ES_CHR do_owlOneOf(typename owlOneOf::Type c_args, typename owlOneOf::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlOneOf( chr::Logical_var< std :: string > arg0, chr::Logical_var< set > arg1) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1);
		return do_owlOneOf(std::move(c_args), owlOneOf_constraint_store->end());
	}
	chr::ES_CHR do_owlOneOfLoop(typename owlOneOfLoop::Type c_args);
	chr::ES_CHR owlOneOfLoop( chr::Logical_var< std :: string > arg0, chr::Logical_var_ground< iteratorSet > arg1, chr::Logical_var_ground< iteratorSet > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlOneOfLoop(std::move(c_args));
	}
	chr::ES_CHR do_owlHasKey(typename owlHasKey::Type c_args, typename owlHasKey::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlHasKey( chr::Logical_var< std :: string > arg0, chr::Logical_var< set > arg1, chr::Logical_var< std :: string > arg2) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2);
		return do_owlHasKey(std::move(c_args), owlHasKey_constraint_store->end());
	}
	chr::ES_CHR do_owlHasKeyLoop(typename owlHasKeyLoop::Type c_args, typename owlHasKeyLoop::Constraint_store_t::iterator c_it);
	chr::ES_CHR owlHasKeyLoop( chr::Logical_var_ground< iteratorSet > arg0, chr::Logical_var_ground< iteratorSet > arg1, chr::Logical_var< std :: string > arg2, chr::Logical_var< std :: string > arg3) {
		assert(!chr::failed() && (_ref_use_count >= 1));
		auto c_args = std::make_tuple(next_free_constraint_id++, arg0, arg1, arg2, arg3);
		return do_owlHasKeyLoop(std::move(c_args), owlHasKeyLoop_constraint_store->end());
	}
};
#endif // OWL2__GUARD

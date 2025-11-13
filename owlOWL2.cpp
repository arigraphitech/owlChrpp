/*
From line 127 to 454
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

// Rule chainStep, active constraint constructPropertyChain( PC, I, X, Y, N ), occurrence 0
Begin constructPropertyChain_0
If empty store owlObjectPropertyChain( PC, P, J, N ) Then goto constructPropertyChain_1
If empty store owlObjectPropertyAssertion( Y, P, Z ) Then goto constructPropertyChain_1
	If guard
		( I < N )
	Then guard
		Matching partner owlObjectPropertyChain( PC, P, J, N ) with idx#0<PC,N>
			If guard
				equalIncrement( J, I )
			Then guard
				Matching partner owlObjectPropertyAssertion( Y, P, Z ) with idx#0<Y,P>
					remove constraint constructPropertyChain( PC, I, X, Y, N )
					constructPropertyChain( PC, ( I + 1 ), X, Z, N )
					goto next goal constraint
				End matching partner owlObjectPropertyAssertion( Y, P, Z )
			End guard
		End matching partner owlObjectPropertyChain( PC, P, J, N )
	End guard
End
// Rule finalChain, active constraint constructPropertyChain( PC, N, X, Y, N ), occurrence 1
Begin constructPropertyChain_1
	remove constraint constructPropertyChain( PC, N, X, Y, N )
	owlObjectPropertyAssertion( X, PC, Y )
	goto next goal constraint
End
// Fail through
Begin constructPropertyChain_store
	Store constraint constructPropertyChain
	Schedule constraint constructPropertyChain with variable index 0
	Schedule constraint constructPropertyChain with variable index 1
	Schedule constraint constructPropertyChain with variable index 2
	Schedule constraint constructPropertyChain with variable index 3
	Schedule constraint constructPropertyChain with variable index 4
Goto next goal constraint
// Rule NO_NAME, active constraint logicalName( emptyString, V ), occurrence 0
Begin logicalName_0
If empty store owlClassAssertion( V, Y, true ) Then goto logicalName_1
If empty store owlClassAssertion( W, Y, true ) Then goto logicalName_1
If empty store owlObjectPropertyAssertion( U, P, W ) Then goto logicalName_1
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto logicalName_1
If empty store logicalName( URI, W ) Then goto logicalName_1
	Matching partner owlClassAssertion( V, Y, true ) with idx#0<V,true>
		Matching partner owlClassAssertion( W, Y, true ) with idx#1<Y,true>
			If guard
				( owlClassAssertion( W, Y, true ) != owlClassAssertion( V, Y, true ) )
			Then guard
				Matching partner owlObjectPropertyAssertion( U, P, W ) with idx#1<W>
					Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#2<U,P,V>
						If guard
							( owlObjectPropertyAssertion( U, P, V ) != owlObjectPropertyAssertion( U, P, W ) )
						Then guard
							Matching partner logicalName( URI, W ) with idx#0<W>
								If guard
									( !( URI == emptyString ) )
									&& ( logicalName( URI, W ) != logicalName( emptyString, V ) )
								Then guard
									remove constraint logicalName( emptyString, V )
									remove constraint owlClassAssertion( V, Y, true )
									remove constraint owlObjectPropertyAssertion( U, P, V )
									success
									goto next goal constraint
								End guard
							End matching partner logicalName( URI, W )
						End guard
					End matching partner owlObjectPropertyAssertion( U, P, V )
				End matching partner owlObjectPropertyAssertion( U, P, W )
			End guard
		End matching partner owlClassAssertion( W, Y, true )
	End matching partner owlClassAssertion( V, Y, true )
End
// Rule NO_NAME, active constraint logicalName( URI, W ), occurrence 1
Begin logicalName_1
If empty store owlClassAssertion( W, Y, true ) Then goto logicalName_2
If empty store owlClassAssertion( V, Y, true ) Then goto logicalName_2
If empty store logicalName( emptyString, V ) Then goto logicalName_2
If empty store owlObjectPropertyAssertion( U, P, W ) Then goto logicalName_2
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto logicalName_2
	If guard
		( !( URI == emptyString ) )
	Then guard
		Matching partner owlClassAssertion( W, Y, true ) with idx#0<W,true>
			Matching partner owlClassAssertion( V, Y, true ) with idx#1<Y,true>
				If guard
					( owlClassAssertion( V, Y, true ) != owlClassAssertion( W, Y, true ) )
				Then guard
					Matching partner logicalName( emptyString, V ) with idx#1<emptyString,V>
						If guard
							( logicalName( emptyString, V ) != logicalName( URI, W ) )
						Then guard
							Matching partner owlObjectPropertyAssertion( U, P, W ) with idx#1<W>
								Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#2<U,P,V>
									If guard
										( owlObjectPropertyAssertion( U, P, V ) != owlObjectPropertyAssertion( U, P, W ) )
									Then guard
										store constraint logicalName( URI, W )
										remove constraint owlClassAssertion( V, Y, true )
										remove constraint logicalName( emptyString, V )
										remove constraint owlObjectPropertyAssertion( U, P, V )
										success
										If not alived logicalName( URI, W ) Then goto next goal constraint
										If not alived owlClassAssertion( W, Y, true ) Then goto next matching of owlClassAssertion( W, Y, true )
										goto next matching of owlClassAssertion( V, Y, true )
									End guard
								End matching partner owlObjectPropertyAssertion( U, P, V )
							End matching partner owlObjectPropertyAssertion( U, P, W )
						End guard
					End matching partner logicalName( emptyString, V )
				End guard
			End matching partner owlClassAssertion( V, Y, true )
		End matching partner owlClassAssertion( W, Y, true )
	End guard
End
// Rule NO_NAME, active constraint logicalName( URIV, V ), occurrence 2
Begin logicalName_2
If empty store owlClassAssertion( U, C, false ) Then goto logicalName_3
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto logicalName_3
If empty store owlAllValuesFrom( C, P, Y ) Then goto logicalName_3
If empty store logicalName( URIY, Y ) Then goto logicalName_3
	Matching partner owlClassAssertion( U, C, false ) with idx#2<false>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#3<U,V>
			Matching partner owlAllValuesFrom( C, P, Y ) with idx#0<C,P>
				Matching partner logicalName( URIY, Y ) with idx#0<Y>
					If guard
						( !checkClassification( ( *this ), URIV, URIY ) )
						&& ( logicalName( URIY, Y ) != logicalName( URIV, V ) )
					Then guard
						store constraint logicalName( URIV, V )
						remove constraint owlClassAssertion( U, C, false )
						success
						If not alived logicalName( URIV, V ) Then goto next goal constraint
						goto next matching of owlClassAssertion( U, C, false )
					End guard
				End matching partner logicalName( URIY, Y )
			End matching partner owlAllValuesFrom( C, P, Y )
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlClassAssertion( U, C, false )
End
// Rule NO_NAME, active constraint logicalName( URIY, Y ), occurrence 3
Begin logicalName_3
If empty store owlClassAssertion( U, C, false ) Then goto logicalName_4
If empty store owlAllValuesFrom( C, P, Y ) Then goto logicalName_4
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto logicalName_4
If empty store logicalName( URIV, V ) Then goto logicalName_4
	Matching partner owlClassAssertion( U, C, false ) with idx#2<false>
		Matching partner owlAllValuesFrom( C, P, Y ) with idx#1<C,Y>
			Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#0<U,P>
				Matching partner logicalName( URIV, V ) with idx#0<V>
					If guard
						( !checkClassification( ( *this ), URIV, URIY ) )
						&& ( logicalName( URIV, V ) != logicalName( URIY, Y ) )
					Then guard
						store constraint logicalName( URIY, Y )
						remove constraint owlClassAssertion( U, C, false )
						success
						If not alived logicalName( URIY, Y ) Then goto next goal constraint
						goto next matching of owlClassAssertion( U, C, false )
					End guard
				End matching partner logicalName( URIV, V )
			End matching partner owlObjectPropertyAssertion( U, P, V )
		End matching partner owlAllValuesFrom( C, P, Y )
	End matching partner owlClassAssertion( U, C, false )
End
// Rule NO_NAME, active constraint logicalName( URIC, C ), occurrence 4
Begin logicalName_4
If empty store owlClassAssertion( X, C, true ) Then goto logicalName_store
If empty store queryClassification( X ) Then goto logicalName_store
	Matching partner owlClassAssertion( X, C, true ) with idx#1<C,true>
		Matching partner queryClassification( X ) with idx#0<X>
			If history <logicalName( URIC, C ),owlClassAssertion( X, C, true ),queryClassification( X )> Then
				store constraint logicalName( URIC, C )
				res( URIC )
				afficher( "passage" )
				If not alived logicalName( URIC, C ) Then goto next goal constraint
				If not alived owlClassAssertion( X, C, true ) Then goto next matching of owlClassAssertion( X, C, true )
				goto next matching of queryClassification( X )
			End history
		End matching partner queryClassification( X )
	End matching partner owlClassAssertion( X, C, true )
End
// Fail through
Begin logicalName_store
	Store constraint logicalName
	Schedule constraint logicalName with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlAllValuesFrom( C, P, Y ), occurrence 0
Begin owlAllValuesFrom_0
If empty store owlClassAssertion( U, C, true ) Then goto owlAllValuesFrom_1
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlAllValuesFrom_1
	Matching partner owlClassAssertion( U, C, true ) with idx#1<C,true>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#0<U,P>
			If history <owlAllValuesFrom( C, P, Y ),owlClassAssertion( U, C, true ),owlObjectPropertyAssertion( U, P, V )> Then
				store constraint owlAllValuesFrom( C, P, Y )
				owlClassAssertion( V, Y, true )
				If not alived owlAllValuesFrom( C, P, Y ) Then goto next goal constraint
				If not alived owlClassAssertion( U, C, true ) Then goto next matching of owlClassAssertion( U, C, true )
				goto next matching of owlObjectPropertyAssertion( U, P, V )
			End history
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlClassAssertion( U, C, true )
End
// Rule NO_NAME, active constraint owlAllValuesFrom( C, P, Y ), occurrence 1
Begin owlAllValuesFrom_1
If empty store owlNamedIndividual( X ) Then goto owlAllValuesFrom_2
	Matching partner owlNamedIndividual( X )
		If history <owlAllValuesFrom( C, P, Y ),owlNamedIndividual( X )> Then
			store constraint owlAllValuesFrom( C, P, Y )
			owlClassAssertion( X, C, false )
			If not alived owlAllValuesFrom( C, P, Y ) Then goto next goal constraint
			goto next matching of owlNamedIndividual( X )
		End history
	End matching partner owlNamedIndividual( X )
End
// Rule NO_NAME, active constraint owlAllValuesFrom( C, P, Y ), occurrence 2
Begin owlAllValuesFrom_2
If empty store owlClassAssertion( U, C, false ) Then goto owlAllValuesFrom_store
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlAllValuesFrom_store
If empty store logicalName( URIV, V ) Then goto owlAllValuesFrom_store
If empty store logicalName( URIY, Y ) Then goto owlAllValuesFrom_store
	Matching partner owlClassAssertion( U, C, false ) with idx#1<C,false>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#0<U,P>
			Matching partner logicalName( URIV, V ) with idx#0<V>
				Matching partner logicalName( URIY, Y ) with idx#0<Y>
					If guard
						( !checkClassification( ( *this ), URIV, URIY ) )
						&& ( logicalName( URIY, Y ) != logicalName( URIV, V ) )
					Then guard
						store constraint owlAllValuesFrom( C, P, Y )
						remove constraint owlClassAssertion( U, C, false )
						success
						If not alived owlAllValuesFrom( C, P, Y ) Then goto next goal constraint
						goto next matching of owlClassAssertion( U, C, false )
					End guard
				End matching partner logicalName( URIY, Y )
			End matching partner logicalName( URIV, V )
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlClassAssertion( U, C, false )
End
// Fail through
Begin owlAllValuesFrom_store
	Store constraint owlAllValuesFrom
	Schedule constraint owlAllValuesFrom with variable index 0
	Schedule constraint owlAllValuesFrom with variable index 1
	Schedule constraint owlAllValuesFrom with variable index 2
Goto next goal constraint
// Rule NO_NAME, active constraint owlAsymmetricObjectProperty( P ), occurrence 0
Begin owlAsymmetricObjectProperty_0
If empty store owlAsymmetricObjectProperty( P ) Then goto owlAsymmetricObjectProperty_1
	Matching partner owlAsymmetricObjectProperty( P ) with idx#0<P>
		If guard
			( owlAsymmetricObjectProperty( P ) != owlAsymmetricObjectProperty( P ) )
		Then guard
			remove constraint owlAsymmetricObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlAsymmetricObjectProperty( P )
End
// Rule AsymmetricProperty1, active constraint owlAsymmetricObjectProperty( P ), occurrence 1
Begin owlAsymmetricObjectProperty_1
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlAsymmetricObjectProperty_store
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#4<P>
		If history <owlAsymmetricObjectProperty( P ),owlObjectPropertyAssertion( X, P, Y )> Then
			store constraint owlAsymmetricObjectProperty( P )
			owlNegativeObjectAssertion( X, P, Y )
			If not alived owlAsymmetricObjectProperty( P ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlAsymmetricObjectProperty_store
	Store constraint owlAsymmetricObjectProperty
	Schedule constraint owlAsymmetricObjectProperty with variable index 0
Goto next goal constraint
// Rule r3, active constraint owlCandidatsIntersection( X, C, I ), occurrence 0
Begin owlCandidatsIntersection_0
If empty store owlClassAssertion( X, V, true ) Then goto owlCandidatsIntersection_1
If empty store owlIntersectionClass( C, V, I ) Then goto owlCandidatsIntersection_1
	Matching partner owlClassAssertion( X, V, true ) with idx#0<X,true>
		Matching partner owlIntersectionClass( C, V, I ) with idx#0<C,V,I>
			If history <owlCandidatsIntersection( X, C, I ),owlClassAssertion( X, V, true ),owlIntersectionClass( C, V, I )> Then
				store constraint owlCandidatsIntersection( X, C, I )
				owlCandidatsIntersection( X, C, ( I + 1 ) )
				If not alived owlCandidatsIntersection( X, C, I ) Then goto next goal constraint
				If not alived owlClassAssertion( X, V, true ) Then goto next matching of owlClassAssertion( X, V, true )
				goto next matching of owlIntersectionClass( C, V, I )
			End history
		End matching partner owlIntersectionClass( C, V, I )
	End matching partner owlClassAssertion( X, V, true )
End
// Rule r5, active constraint owlCandidatsIntersection( X, C, I ), occurrence 1
Begin owlCandidatsIntersection_1
If empty store owlIntersectionOf( C, ITEND, ITEND, I ) Then goto owlCandidatsIntersection_store
	Matching partner owlIntersectionOf( C, ITEND, _LV_0_, I ) with idx#0<C,I>
		If guard
			( _LV_0_ == ITEND )
		Then guard
			remove constraint owlCandidatsIntersection( X, C, I )
			owlClassAssertion( X, C, true )
			goto next goal constraint
		End guard
	End matching partner owlIntersectionOf( C, ITEND, _LV_0_, I )
End
// Fail through
Begin owlCandidatsIntersection_store
	Store constraint owlCandidatsIntersection
Goto next goal constraint
// Rule NO_NAME, active constraint owlClass( C ), occurrence 0
Begin owlClass_0
If empty store owlClass( C ) Then goto owlClass_1
	Matching partner owlClass( C ) with idx#0<C>
		If guard
			( owlClass( C ) != owlClass( C ) )
		Then guard
			remove constraint owlClass( C )
			true
			goto next goal constraint
		End guard
	End matching partner owlClass( C )
End
// Rule NO_NAME, active constraint owlClass( A ), occurrence 1
Begin owlClass_1
	If history <owlClass( A )> Then
		store constraint owlClass( A )
		owlSubclassOf( A, A )
		If not alived owlClass( A ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlClass( C ), occurrence 2
Begin owlClass_2
	If history <owlClass( C )> Then
		store constraint owlClass( C )
		owlEquivalentClass( C, C )
		If not alived owlClass( C ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlClass( C ), occurrence 3
Begin owlClass_3
	If history <owlClass( C )> Then
		store constraint owlClass( C )
		owlSubclassOf( C, owlThing )
		If not alived owlClass( C ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlClass( C ), occurrence 4
Begin owlClass_4
	If history <owlClass( C )> Then
		store constraint owlClass( C )
		owlSubclassOf( owlNothing, C )
		If not alived owlClass( C ) Then goto next goal constraint
	End history
End
// Fail through
Begin owlClass_store
	Store constraint owlClass
	Schedule constraint owlClass with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlClassAssertion( X, A, B ), occurrence 0
Begin owlClassAssertion_0
If empty store owlClassAssertion( X, A, B ) Then goto owlClassAssertion_1
	Matching partner owlClassAssertion( X, A, B ) with idx#3<X,A,B>
		If guard
			( owlClassAssertion( X, A, B ) != owlClassAssertion( X, A, B ) )
		Then guard
			remove constraint owlClassAssertion( X, A, B )
			true
			goto next goal constraint
		End guard
	End matching partner owlClassAssertion( X, A, B )
End
// Rule DisjointClass, active constraint owlClassAssertion( X, A, true ), occurrence 1
Begin owlClassAssertion_1
If empty store owlClassAssertion( X, B, true ) Then goto owlClassAssertion_2
If empty store owlDisjointClass( L ) Then goto owlClassAssertion_2
	Matching partner owlClassAssertion( X, B, true ) with idx#0<X,true>
		If guard
			( owlClassAssertion( X, B, true ) != owlClassAssertion( X, A, true ) )
		Then guard
			Matching partner owlDisjointClass( L )
				If guard
					contains( A, L )
					&& contains( B, L )
				Then guard
					remove constraint owlClassAssertion( X, A, true )
					remove constraint owlClassAssertion( X, B, true )
					remove constraint owlDisjointClass( L )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDisjointClass( L )
		End guard
	End matching partner owlClassAssertion( X, B, true )
End
// Rule DisjointClass, active constraint owlClassAssertion( X, B, true ), occurrence 2
Begin owlClassAssertion_2
If empty store owlClassAssertion( X, A, true ) Then goto owlClassAssertion_3
If empty store owlDisjointClass( L ) Then goto owlClassAssertion_3
	Matching partner owlClassAssertion( X, A, true ) with idx#0<X,true>
		If guard
			( owlClassAssertion( X, A, true ) != owlClassAssertion( X, B, true ) )
		Then guard
			Matching partner owlDisjointClass( L )
				If guard
					contains( A, L )
					&& contains( B, L )
				Then guard
					remove constraint owlClassAssertion( X, B, true )
					remove constraint owlClassAssertion( X, A, true )
					remove constraint owlDisjointClass( L )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDisjointClass( L )
		End guard
	End matching partner owlClassAssertion( X, A, true )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 3
Begin owlClassAssertion_3
	If history <owlClassAssertion( X, C, true )> Then
		store constraint owlClassAssertion( X, C, true )
		owlClass( C )
		owlNamedIndividual( X )
		If not alived owlClassAssertion( X, C, true ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlClassAssertion( X, V, true ), occurrence 4
Begin owlClassAssertion_4
If empty store owlUnionClass( C, V ) Then goto owlClassAssertion_5
	Matching partner owlUnionClass( C, V ) with idx#0<V>
		store constraint owlClassAssertion( X, V, true )
		remove constraint owlUnionClass( C, V )
		owlClassAssertion( X, C, true )
		If not alived owlClassAssertion( X, V, true ) Then goto next goal constraint
		goto next matching of owlUnionClass( C, V )
	End matching partner owlUnionClass( C, V )
End
// Rule r2, active constraint owlClassAssertion( X, V, true ), occurrence 5
Begin owlClassAssertion_5
If empty store owlIntersectionClass( C, V, 0 ) Then goto owlClassAssertion_6
	Matching partner owlIntersectionClass( C, V, 0 ) with idx#1<V,0>
		If history <owlClassAssertion( X, V, true ),owlIntersectionClass( C, V, 0 )> Then
			store constraint owlClassAssertion( X, V, true )
			owlCandidatsIntersection( X, C, 0 )
			If not alived owlClassAssertion( X, V, true ) Then goto next goal constraint
			goto next matching of owlIntersectionClass( C, V, 0 )
		End history
	End matching partner owlIntersectionClass( C, V, 0 )
End
// Rule r3, active constraint owlClassAssertion( X, V, true ), occurrence 6
Begin owlClassAssertion_6
If empty store owlIntersectionClass( C, V, I ) Then goto owlClassAssertion_7
If empty store owlCandidatsIntersection( X, C, I ) Then goto owlClassAssertion_7
	Matching partner owlIntersectionClass( C, V, I ) with idx#2<V>
		Matching partner owlCandidatsIntersection( X, C, I ) with idx#0<X,C,I>
			If history <owlClassAssertion( X, V, true ),owlIntersectionClass( C, V, I ),owlCandidatsIntersection( X, C, I )> Then
				store constraint owlClassAssertion( X, V, true )
				owlCandidatsIntersection( X, C, ( I + 1 ) )
				If not alived owlClassAssertion( X, V, true ) Then goto next goal constraint
				If not alived owlIntersectionClass( C, V, I ) Then goto next matching of owlIntersectionClass( C, V, I )
				goto next matching of owlCandidatsIntersection( X, C, I )
			End history
		End matching partner owlCandidatsIntersection( X, C, I )
	End matching partner owlIntersectionClass( C, V, I )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 7
Begin owlClassAssertion_7
If empty store owlIntersectionClass( C, C1, _ ) Then goto owlClassAssertion_8
	Matching partner owlIntersectionClass( C, C1, _ ) with idx#3<C>
		If history <owlClassAssertion( X, C, true ),owlIntersectionClass( C, C1, _ )> Then
			store constraint owlClassAssertion( X, C, true )
			owlClassAssertion( X, C1, true )
			If not alived owlClassAssertion( X, C, true ) Then goto next goal constraint
			goto next matching of owlIntersectionClass( C, C1, _ )
		End history
	End matching partner owlIntersectionClass( C, C1, _ )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, NOTA, false ), occurrence 8
Begin owlClassAssertion_8
If empty store owlClassAssertion( X, A, true ) Then goto owlClassAssertion_9
If empty store owlComplementOf( A, NOTA ) Then goto owlClassAssertion_9
	Matching partner owlClassAssertion( X, A, true ) with idx#0<X,true>
		If guard
			( owlClassAssertion( X, A, true ) != owlClassAssertion( X, NOTA, false ) )
		Then guard
			Matching partner owlComplementOf( A, NOTA ) with idx#0<A,NOTA>
				remove constraint owlClassAssertion( X, NOTA, false )
				success
				goto next goal constraint
			End matching partner owlComplementOf( A, NOTA )
		End guard
	End matching partner owlClassAssertion( X, A, true )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, A, true ), occurrence 9
Begin owlClassAssertion_9
If empty store owlClassAssertion( X, NOTA, false ) Then goto owlClassAssertion_10
If empty store owlComplementOf( A, NOTA ) Then goto owlClassAssertion_10
	Matching partner owlClassAssertion( X, NOTA, false ) with idx#0<X,false>
		If guard
			( owlClassAssertion( X, NOTA, false ) != owlClassAssertion( X, A, true ) )
		Then guard
			Matching partner owlComplementOf( A, NOTA ) with idx#0<A,NOTA>
				store constraint owlClassAssertion( X, A, true )
				remove constraint owlClassAssertion( X, NOTA, false )
				success
				If not alived owlClassAssertion( X, A, true ) Then goto next goal constraint
				goto next matching of owlClassAssertion( X, NOTA, false )
			End matching partner owlComplementOf( A, NOTA )
		End guard
	End matching partner owlClassAssertion( X, NOTA, false )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, A, true ), occurrence 10
Begin owlClassAssertion_10
If empty store owlClassAssertion( X, NOTA, true ) Then goto owlClassAssertion_11
If empty store owlComplementOf( A, NOTA ) Then goto owlClassAssertion_11
	Matching partner owlClassAssertion( X, NOTA, true ) with idx#0<X,true>
		If guard
			( owlClassAssertion( X, NOTA, true ) != owlClassAssertion( X, A, true ) )
		Then guard
			Matching partner owlComplementOf( A, NOTA ) with idx#0<A,NOTA>
				remove constraint owlClassAssertion( X, A, true )
				remove constraint owlClassAssertion( X, NOTA, true )
				remove constraint owlComplementOf( A, NOTA )
				failure
				goto next goal constraint
			End matching partner owlComplementOf( A, NOTA )
		End guard
	End matching partner owlClassAssertion( X, NOTA, true )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, NOTA, true ), occurrence 11
Begin owlClassAssertion_11
If empty store owlClassAssertion( X, A, true ) Then goto owlClassAssertion_12
If empty store owlComplementOf( A, NOTA ) Then goto owlClassAssertion_12
	Matching partner owlClassAssertion( X, A, true ) with idx#0<X,true>
		If guard
			( owlClassAssertion( X, A, true ) != owlClassAssertion( X, NOTA, true ) )
		Then guard
			Matching partner owlComplementOf( A, NOTA ) with idx#0<A,NOTA>
				remove constraint owlClassAssertion( X, NOTA, true )
				remove constraint owlClassAssertion( X, A, true )
				remove constraint owlComplementOf( A, NOTA )
				failure
				goto next goal constraint
			End matching partner owlComplementOf( A, NOTA )
		End guard
	End matching partner owlClassAssertion( X, A, true )
End
// Rule NO_NAME, active constraint owlClassAssertion( V, Y, true ), occurrence 12
Begin owlClassAssertion_12
If empty store owlSomeValuesFrom( C, P, Y ) Then goto owlClassAssertion_13
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlClassAssertion_13
	Matching partner owlSomeValuesFrom( C, P, Y ) with idx#0<Y>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#5<P,V>
			If history <owlClassAssertion( V, Y, true ),owlSomeValuesFrom( C, P, Y ),owlObjectPropertyAssertion( U, P, V )> Then
				store constraint owlClassAssertion( V, Y, true )
				owlClassAssertion( U, C, true )
				If not alived owlClassAssertion( V, Y, true ) Then goto next goal constraint
				If not alived owlSomeValuesFrom( C, P, Y ) Then goto next matching of owlSomeValuesFrom( C, P, Y )
				goto next matching of owlObjectPropertyAssertion( U, P, V )
			End history
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlSomeValuesFrom( C, P, Y )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 13
Begin owlClassAssertion_13
If empty store owlSomeValuesFrom( C, P, Y ) Then goto owlClassAssertion_14
	Matching partner owlSomeValuesFrom( C, P, Y ) with idx#1<C>
		If history <owlClassAssertion( U, C, true ),owlSomeValuesFrom( C, P, Y )> Then
			store constraint owlClassAssertion( U, C, true )
			owlObjectPropertyAssertion( U, P, V )
			logicalName( emptyString, V )
			owlClassAssertion( V, Y, true )
			If not alived owlClassAssertion( U, C, true ) Then goto next goal constraint
			goto next matching of owlSomeValuesFrom( C, P, Y )
		End history
	End matching partner owlSomeValuesFrom( C, P, Y )
End
// Rule NO_NAME, active constraint owlClassAssertion( V, Y, true ), occurrence 14
Begin owlClassAssertion_14
If empty store logicalName( emptyString, V ) Then goto owlClassAssertion_15
If empty store owlClassAssertion( W, Y, true ) Then goto owlClassAssertion_15
If empty store owlObjectPropertyAssertion( U, P, W ) Then goto owlClassAssertion_15
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlClassAssertion_15
If empty store logicalName( URI, W ) Then goto owlClassAssertion_15
	Matching partner logicalName( emptyString, V ) with idx#1<emptyString,V>
		Matching partner owlClassAssertion( W, Y, true ) with idx#1<Y,true>
			If guard
				( owlClassAssertion( W, Y, true ) != owlClassAssertion( V, Y, true ) )
			Then guard
				Matching partner owlObjectPropertyAssertion( U, P, W ) with idx#1<W>
					Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#2<U,P,V>
						If guard
							( owlObjectPropertyAssertion( U, P, V ) != owlObjectPropertyAssertion( U, P, W ) )
						Then guard
							Matching partner logicalName( URI, W ) with idx#0<W>
								If guard
									( !( URI == emptyString ) )
									&& ( logicalName( URI, W ) != logicalName( emptyString, V ) )
								Then guard
									remove constraint owlClassAssertion( V, Y, true )
									remove constraint logicalName( emptyString, V )
									remove constraint owlObjectPropertyAssertion( U, P, V )
									success
									goto next goal constraint
								End guard
							End matching partner logicalName( URI, W )
						End guard
					End matching partner owlObjectPropertyAssertion( U, P, V )
				End matching partner owlObjectPropertyAssertion( U, P, W )
			End guard
		End matching partner owlClassAssertion( W, Y, true )
	End matching partner logicalName( emptyString, V )
End
// Rule NO_NAME, active constraint owlClassAssertion( W, Y, true ), occurrence 15
Begin owlClassAssertion_15
If empty store owlClassAssertion( V, Y, true ) Then goto owlClassAssertion_16
If empty store logicalName( emptyString, V ) Then goto owlClassAssertion_16
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlClassAssertion_16
If empty store owlObjectPropertyAssertion( U, P, W ) Then goto owlClassAssertion_16
If empty store logicalName( URI, W ) Then goto owlClassAssertion_16
	Matching partner owlClassAssertion( V, Y, true ) with idx#1<Y,true>
		If guard
			( owlClassAssertion( V, Y, true ) != owlClassAssertion( W, Y, true ) )
		Then guard
			Matching partner logicalName( emptyString, V ) with idx#1<emptyString,V>
				Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#1<V>
					Matching partner owlObjectPropertyAssertion( U, P, W ) with idx#2<U,P,W>
						If guard
							( owlObjectPropertyAssertion( U, P, W ) != owlObjectPropertyAssertion( U, P, V ) )
						Then guard
							Matching partner logicalName( URI, W ) with idx#0<W>
								If guard
									( !( URI == emptyString ) )
									&& ( logicalName( URI, W ) != logicalName( emptyString, V ) )
								Then guard
									store constraint owlClassAssertion( W, Y, true )
									remove constraint owlClassAssertion( V, Y, true )
									remove constraint logicalName( emptyString, V )
									remove constraint owlObjectPropertyAssertion( U, P, V )
									success
									If not alived owlClassAssertion( W, Y, true ) Then goto next goal constraint
									goto next matching of owlClassAssertion( V, Y, true )
								End guard
							End matching partner logicalName( URI, W )
						End guard
					End matching partner owlObjectPropertyAssertion( U, P, W )
				End matching partner owlObjectPropertyAssertion( U, P, V )
			End matching partner logicalName( emptyString, V )
		End guard
	End matching partner owlClassAssertion( V, Y, true )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 16
Begin owlClassAssertion_16
If empty store owlAllValuesFrom( C, P, Y ) Then goto owlClassAssertion_17
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlClassAssertion_17
	Matching partner owlAllValuesFrom( C, P, Y ) with idx#2<C>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#0<U,P>
			If history <owlClassAssertion( U, C, true ),owlAllValuesFrom( C, P, Y ),owlObjectPropertyAssertion( U, P, V )> Then
				store constraint owlClassAssertion( U, C, true )
				owlClassAssertion( V, Y, true )
				If not alived owlClassAssertion( U, C, true ) Then goto next goal constraint
				If not alived owlAllValuesFrom( C, P, Y ) Then goto next matching of owlAllValuesFrom( C, P, Y )
				goto next matching of owlObjectPropertyAssertion( U, P, V )
			End history
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlAllValuesFrom( C, P, Y )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, false ), occurrence 17
Begin owlClassAssertion_17
If empty store owlAllValuesFrom( C, P, Y ) Then goto owlClassAssertion_18
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlClassAssertion_18
If empty store logicalName( URIV, V ) Then goto owlClassAssertion_18
If empty store logicalName( URIY, Y ) Then goto owlClassAssertion_18
	Matching partner owlAllValuesFrom( C, P, Y ) with idx#2<C>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#0<U,P>
			Matching partner logicalName( URIV, V ) with idx#0<V>
				Matching partner logicalName( URIY, Y ) with idx#0<Y>
					If guard
						( !checkClassification( ( *this ), URIV, URIY ) )
						&& ( logicalName( URIY, Y ) != logicalName( URIV, V ) )
					Then guard
						remove constraint owlClassAssertion( U, C, false )
						success
						goto next goal constraint
					End guard
				End matching partner logicalName( URIY, Y )
			End matching partner logicalName( URIV, V )
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlAllValuesFrom( C, P, Y )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 18
Begin owlClassAssertion_18
If empty store queryClassification( X ) Then goto owlClassAssertion_19
If empty store logicalName( URIC, C ) Then goto owlClassAssertion_19
	Matching partner queryClassification( X ) with idx#0<X>
		Matching partner logicalName( URIC, C ) with idx#0<C>
			If history <owlClassAssertion( X, C, true ),queryClassification( X ),logicalName( URIC, C )> Then
				store constraint owlClassAssertion( X, C, true )
				res( URIC )
				afficher( "passage" )
				If not alived owlClassAssertion( X, C, true ) Then goto next goal constraint
				If not alived queryClassification( X ) Then goto next matching of queryClassification( X )
				goto next matching of logicalName( URIC, C )
			End history
		End matching partner logicalName( URIC, C )
	End matching partner queryClassification( X )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 19
Begin owlClassAssertion_19
If empty store owlMaxCardinality( C, P, 0 ) Then goto owlClassAssertion_20
If empty store owlObjectPropertyAssertion( U, P, _ ) Then goto owlClassAssertion_20
	Matching partner owlMaxCardinality( C, P, 0 ) with idx#0<C,0>
		Matching partner owlObjectPropertyAssertion( U, P, _ ) with idx#0<U,P>
			remove constraint owlClassAssertion( U, C, true )
			remove constraint owlMaxCardinality( C, P, 0 )
			remove constraint owlObjectPropertyAssertion( U, P, _ )
			failure
			goto next goal constraint
		End matching partner owlObjectPropertyAssertion( U, P, _ )
	End matching partner owlMaxCardinality( C, P, 0 )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 20
Begin owlClassAssertion_20
If empty store owlMaxCardinality( C, P, 1 ) Then goto owlClassAssertion_21
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlClassAssertion_21
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlClassAssertion_21
	Matching partner owlMaxCardinality( C, P, 1 ) with idx#0<C,1>
		Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#0<U,P>
			Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#0<U,P>
				If guard
					( !( Y1 == Y2 ) )
					&& ( owlObjectPropertyAssertion( U, P, Y2 ) != owlObjectPropertyAssertion( U, P, Y1 ) )
				Then guard
					remove constraint owlClassAssertion( U, C, true )
					remove constraint owlMaxCardinality( C, P, 1 )
					remove constraint owlObjectPropertyAssertion( U, P, Y1 )
					remove constraint owlObjectPropertyAssertion( U, P, Y2 )
					owlSameIndividual( Y1, Y2 )
					goto next goal constraint
				End guard
			End matching partner owlObjectPropertyAssertion( U, P, Y2 )
		End matching partner owlObjectPropertyAssertion( U, P, Y1 )
	End matching partner owlMaxCardinality( C, P, 1 )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, X, true ), occurrence 21
Begin owlClassAssertion_21
If empty store owlMaxQualifiedCardinality( X, P, C, 0 ) Then goto owlClassAssertion_22
If empty store owlClassAssertion( Y, C, true ) Then goto owlClassAssertion_22
If empty store owlObjectPropertyAssertion( U, P, Y ) Then goto owlClassAssertion_22
	Matching partner owlMaxQualifiedCardinality( X, P, C, 0 ) with idx#0<X,0>
		Matching partner owlClassAssertion( Y, C, true ) with idx#1<C,true>
			If guard
				( owlClassAssertion( Y, C, true ) != owlClassAssertion( U, X, true ) )
			Then guard
				Matching partner owlObjectPropertyAssertion( U, P, Y ) with idx#2<U,P,Y>
					remove constraint owlClassAssertion( U, X, true )
					remove constraint owlMaxQualifiedCardinality( X, P, C, 0 )
					remove constraint owlClassAssertion( Y, C, true )
					remove constraint owlObjectPropertyAssertion( U, P, Y )
					failure
					goto next goal constraint
				End matching partner owlObjectPropertyAssertion( U, P, Y )
			End guard
		End matching partner owlClassAssertion( Y, C, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 0 )
End
// Rule NO_NAME, active constraint owlClassAssertion( Y, C, true ), occurrence 22
Begin owlClassAssertion_22
If empty store owlMaxQualifiedCardinality( X, P, C, 0 ) Then goto owlClassAssertion_23
If empty store owlClassAssertion( U, X, true ) Then goto owlClassAssertion_23
If empty store owlObjectPropertyAssertion( U, P, Y ) Then goto owlClassAssertion_23
	Matching partner owlMaxQualifiedCardinality( X, P, C, 0 ) with idx#1<C,0>
		Matching partner owlClassAssertion( U, X, true ) with idx#1<X,true>
			If guard
				( owlClassAssertion( U, X, true ) != owlClassAssertion( Y, C, true ) )
			Then guard
				Matching partner owlObjectPropertyAssertion( U, P, Y ) with idx#2<U,P,Y>
					remove constraint owlClassAssertion( Y, C, true )
					remove constraint owlMaxQualifiedCardinality( X, P, C, 0 )
					remove constraint owlClassAssertion( U, X, true )
					remove constraint owlObjectPropertyAssertion( U, P, Y )
					failure
					goto next goal constraint
				End matching partner owlObjectPropertyAssertion( U, P, Y )
			End guard
		End matching partner owlClassAssertion( U, X, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 0 )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, X, true ), occurrence 23
Begin owlClassAssertion_23
If empty store owlMaxQualifiedCardinality( X, P, C, 1 ) Then goto owlClassAssertion_24
If empty store owlClassAssertion( Y1, C, true ) Then goto owlClassAssertion_24
If empty store owlClassAssertion( Y2, C, true ) Then goto owlClassAssertion_24
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlClassAssertion_24
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlClassAssertion_24
	Matching partner owlMaxQualifiedCardinality( X, P, C, 1 ) with idx#0<X,1>
		Matching partner owlClassAssertion( Y1, C, true ) with idx#1<C,true>
			If guard
				( owlClassAssertion( Y1, C, true ) != owlClassAssertion( U, X, true ) )
			Then guard
				Matching partner owlClassAssertion( Y2, C, true ) with idx#1<C,true>
					If guard
						( !( Y1 == Y2 ) )
						&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( Y1, C, true ) )
						&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( U, X, true ) )
					Then guard
						Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#2<U,P,Y2>
							Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#2<U,P,Y1>
								If guard
									( owlObjectPropertyAssertion( U, P, Y1 ) != owlObjectPropertyAssertion( U, P, Y2 ) )
								Then guard
									remove constraint owlClassAssertion( U, X, true )
									remove constraint owlMaxQualifiedCardinality( X, P, C, 1 )
									remove constraint owlClassAssertion( Y1, C, true )
									remove constraint owlClassAssertion( Y2, C, true )
									remove constraint owlObjectPropertyAssertion( U, P, Y2 )
									remove constraint owlObjectPropertyAssertion( U, P, Y1 )
									owlSameIndividual( Y1, Y2 )
									goto next goal constraint
								End guard
							End matching partner owlObjectPropertyAssertion( U, P, Y1 )
						End matching partner owlObjectPropertyAssertion( U, P, Y2 )
					End guard
				End matching partner owlClassAssertion( Y2, C, true )
			End guard
		End matching partner owlClassAssertion( Y1, C, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 1 )
End
// Rule NO_NAME, active constraint owlClassAssertion( Y1, C, true ), occurrence 24
Begin owlClassAssertion_24
If empty store owlMaxQualifiedCardinality( X, P, C, 1 ) Then goto owlClassAssertion_25
If empty store owlClassAssertion( U, X, true ) Then goto owlClassAssertion_25
If empty store owlClassAssertion( Y2, C, true ) Then goto owlClassAssertion_25
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlClassAssertion_25
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlClassAssertion_25
	Matching partner owlMaxQualifiedCardinality( X, P, C, 1 ) with idx#1<C,1>
		Matching partner owlClassAssertion( U, X, true ) with idx#1<X,true>
			If guard
				( owlClassAssertion( U, X, true ) != owlClassAssertion( Y1, C, true ) )
			Then guard
				Matching partner owlClassAssertion( Y2, C, true ) with idx#1<C,true>
					If guard
						( !( Y1 == Y2 ) )
						&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( U, X, true ) )
						&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( Y1, C, true ) )
					Then guard
						Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#2<U,P,Y2>
							Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#2<U,P,Y1>
								If guard
									( owlObjectPropertyAssertion( U, P, Y1 ) != owlObjectPropertyAssertion( U, P, Y2 ) )
								Then guard
									remove constraint owlClassAssertion( Y1, C, true )
									remove constraint owlMaxQualifiedCardinality( X, P, C, 1 )
									remove constraint owlClassAssertion( U, X, true )
									remove constraint owlClassAssertion( Y2, C, true )
									remove constraint owlObjectPropertyAssertion( U, P, Y2 )
									remove constraint owlObjectPropertyAssertion( U, P, Y1 )
									owlSameIndividual( Y1, Y2 )
									goto next goal constraint
								End guard
							End matching partner owlObjectPropertyAssertion( U, P, Y1 )
						End matching partner owlObjectPropertyAssertion( U, P, Y2 )
					End guard
				End matching partner owlClassAssertion( Y2, C, true )
			End guard
		End matching partner owlClassAssertion( U, X, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 1 )
End
// Rule NO_NAME, active constraint owlClassAssertion( Y2, C, true ), occurrence 25
Begin owlClassAssertion_25
If empty store owlMaxQualifiedCardinality( X, P, C, 1 ) Then goto owlClassAssertion_26
If empty store owlClassAssertion( U, X, true ) Then goto owlClassAssertion_26
If empty store owlClassAssertion( Y1, C, true ) Then goto owlClassAssertion_26
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlClassAssertion_26
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlClassAssertion_26
	Matching partner owlMaxQualifiedCardinality( X, P, C, 1 ) with idx#1<C,1>
		Matching partner owlClassAssertion( U, X, true ) with idx#1<X,true>
			If guard
				( owlClassAssertion( U, X, true ) != owlClassAssertion( Y2, C, true ) )
			Then guard
				Matching partner owlClassAssertion( Y1, C, true ) with idx#1<C,true>
					If guard
						( !( Y1 == Y2 ) )
						&& ( owlClassAssertion( Y1, C, true ) != owlClassAssertion( U, X, true ) )
						&& ( owlClassAssertion( Y1, C, true ) != owlClassAssertion( Y2, C, true ) )
					Then guard
						Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#2<U,P,Y1>
							Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#2<U,P,Y2>
								If guard
									( owlObjectPropertyAssertion( U, P, Y2 ) != owlObjectPropertyAssertion( U, P, Y1 ) )
								Then guard
									remove constraint owlClassAssertion( Y2, C, true )
									remove constraint owlMaxQualifiedCardinality( X, P, C, 1 )
									remove constraint owlClassAssertion( U, X, true )
									remove constraint owlClassAssertion( Y1, C, true )
									remove constraint owlObjectPropertyAssertion( U, P, Y1 )
									remove constraint owlObjectPropertyAssertion( U, P, Y2 )
									owlSameIndividual( Y1, Y2 )
									goto next goal constraint
								End guard
							End matching partner owlObjectPropertyAssertion( U, P, Y2 )
						End matching partner owlObjectPropertyAssertion( U, P, Y1 )
					End guard
				End matching partner owlClassAssertion( Y1, C, true )
			End guard
		End matching partner owlClassAssertion( U, X, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 1 )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 26
Begin owlClassAssertion_26
If empty store owlHasValueObject( C, P, Y ) Then goto owlClassAssertion_27
If empty store owlObjectProperty( P ) Then goto owlClassAssertion_27
	Matching partner owlHasValueObject( C, P, Y ) with idx#0<C>
		Matching partner owlObjectProperty( P ) with idx#0<P>
			If history <owlClassAssertion( U, C, true ),owlHasValueObject( C, P, Y ),owlObjectProperty( P )> Then
				store constraint owlClassAssertion( U, C, true )
				owlObjectPropertyAssertion( U, P, Y )
				If not alived owlClassAssertion( U, C, true ) Then goto next goal constraint
				If not alived owlHasValueObject( C, P, Y ) Then goto next matching of owlHasValueObject( C, P, Y )
				goto next matching of owlObjectProperty( P )
			End history
		End matching partner owlObjectProperty( P )
	End matching partner owlHasValueObject( C, P, Y )
End
// Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 27
Begin owlClassAssertion_27
If empty store owlHasValueData( C, P, Y ) Then goto owlClassAssertion_28
If empty store owlDataProperty( P ) Then goto owlClassAssertion_28
	Matching partner owlHasValueData( C, P, Y ) with idx#0<C>
		Matching partner owlDataProperty( P ) with idx#0<P>
			If history <owlClassAssertion( U, C, true ),owlHasValueData( C, P, Y ),owlDataProperty( P )> Then
				store constraint owlClassAssertion( U, C, true )
				owlDataPropertyAssertion( U, P, Y )
				If not alived owlClassAssertion( U, C, true ) Then goto next goal constraint
				If not alived owlHasValueData( C, P, Y ) Then goto next matching of owlHasValueData( C, P, Y )
				goto next matching of owlDataProperty( P )
			End history
		End matching partner owlDataProperty( P )
	End matching partner owlHasValueData( C, P, Y )
End
// Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 28
Begin owlClassAssertion_28
If empty store owlClassAssertion( Y, C, true ) Then goto owlClassAssertion_29
If empty store owlHasKey( E, P, C ) Then goto owlClassAssertion_29
	Matching partner owlClassAssertion( Y, C, true ) with idx#1<C,true>
		If guard
			( !( X == Y ) )
			&& ( owlClassAssertion( Y, C, true ) != owlClassAssertion( X, C, true ) )
		Then guard
			Matching partner owlHasKey( E, P, C ) with idx#0<C>
				If history <owlClassAssertion( X, C, true ),owlClassAssertion( Y, C, true ),owlHasKey( E, P, C )> Then
					store constraint owlClassAssertion( X, C, true )
					owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y )
					If not alived owlClassAssertion( X, C, true ) Then goto next goal constraint
					If not alived owlClassAssertion( Y, C, true ) Then goto next matching of owlClassAssertion( Y, C, true )
					goto next matching of owlHasKey( E, P, C )
				End history
			End matching partner owlHasKey( E, P, C )
		End guard
	End matching partner owlClassAssertion( Y, C, true )
End
// Rule NO_NAME, active constraint owlClassAssertion( Y, C, true ), occurrence 29
Begin owlClassAssertion_29
If empty store owlClassAssertion( X, C, true ) Then goto owlClassAssertion_store
If empty store owlHasKey( E, P, C ) Then goto owlClassAssertion_store
	Matching partner owlClassAssertion( X, C, true ) with idx#1<C,true>
		If guard
			( !( X == Y ) )
			&& ( owlClassAssertion( X, C, true ) != owlClassAssertion( Y, C, true ) )
		Then guard
			Matching partner owlHasKey( E, P, C ) with idx#0<C>
				If history <owlClassAssertion( Y, C, true ),owlClassAssertion( X, C, true ),owlHasKey( E, P, C )> Then
					store constraint owlClassAssertion( Y, C, true )
					owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y )
					If not alived owlClassAssertion( Y, C, true ) Then goto next goal constraint
					If not alived owlClassAssertion( X, C, true ) Then goto next matching of owlClassAssertion( X, C, true )
					goto next matching of owlHasKey( E, P, C )
				End history
			End matching partner owlHasKey( E, P, C )
		End guard
	End matching partner owlClassAssertion( X, C, true )
End
// Fail through
Begin owlClassAssertion_store
	Store constraint owlClassAssertion
	Schedule constraint owlClassAssertion with variable index 0
	Schedule constraint owlClassAssertion with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlComplementOf( A, NOTA ), occurrence 0
Begin owlComplementOf_0
If empty store owlNamedIndividual( X ) Then goto owlComplementOf_1
	Matching partner owlNamedIndividual( X )
		If history <owlComplementOf( A, NOTA ),owlNamedIndividual( X )> Then
			store constraint owlComplementOf( A, NOTA )
			owlClassAssertion( X, NOTA, false )
			If not alived owlComplementOf( A, NOTA ) Then goto next goal constraint
			goto next matching of owlNamedIndividual( X )
		End history
	End matching partner owlNamedIndividual( X )
End
// Rule NO_NAME, active constraint owlComplementOf( A, NOTA ), occurrence 1
Begin owlComplementOf_1
If empty store owlClassAssertion( X, NOTA, false ) Then goto owlComplementOf_2
If empty store owlClassAssertion( X, A, true ) Then goto owlComplementOf_2
	Matching partner owlClassAssertion( X, NOTA, false ) with idx#1<NOTA,false>
		Matching partner owlClassAssertion( X, A, true ) with idx#3<X,A,true>
			If guard
				( owlClassAssertion( X, A, true ) != owlClassAssertion( X, NOTA, false ) )
			Then guard
				store constraint owlComplementOf( A, NOTA )
				remove constraint owlClassAssertion( X, NOTA, false )
				success
				If not alived owlComplementOf( A, NOTA ) Then goto next goal constraint
				goto next matching of owlClassAssertion( X, NOTA, false )
			End guard
		End matching partner owlClassAssertion( X, A, true )
	End matching partner owlClassAssertion( X, NOTA, false )
End
// Rule NO_NAME, active constraint owlComplementOf( A, NOTA ), occurrence 2
Begin owlComplementOf_2
If empty store owlClassAssertion( X, A, true ) Then goto owlComplementOf_store
If empty store owlClassAssertion( X, NOTA, true ) Then goto owlComplementOf_store
	Matching partner owlClassAssertion( X, A, true ) with idx#1<A,true>
		Matching partner owlClassAssertion( X, NOTA, true ) with idx#3<X,NOTA,true>
			If guard
				( owlClassAssertion( X, NOTA, true ) != owlClassAssertion( X, A, true ) )
			Then guard
				remove constraint owlComplementOf( A, NOTA )
				remove constraint owlClassAssertion( X, A, true )
				remove constraint owlClassAssertion( X, NOTA, true )
				failure
				goto next goal constraint
			End guard
		End matching partner owlClassAssertion( X, NOTA, true )
	End matching partner owlClassAssertion( X, A, true )
End
// Fail through
Begin owlComplementOf_store
	Store constraint owlComplementOf
	Schedule constraint owlComplementOf with variable index 0
	Schedule constraint owlComplementOf with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 0
Begin owlDataProperty_0
If empty store owlDataProperty( P ) Then goto owlDataProperty_1
	Matching partner owlDataProperty( P ) with idx#0<P>
		If guard
			( owlDataProperty( P ) != owlDataProperty( P ) )
		Then guard
			remove constraint owlDataProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlDataProperty( P )
End
// Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 1
Begin owlDataProperty_1
	If history <owlDataProperty( P )> Then
		store constraint owlDataProperty( P )
		owlObjectSubPropertyOf( P, P )
		owlEquivalentObjectProperty( P, P )
		If not alived owlDataProperty( P ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 2
Begin owlDataProperty_2
	If history <owlDataProperty( P )> Then
		store constraint owlDataProperty( P )
		owlDataSubPropertyOf( P, P )
		owlEquivalentDataProperty( P, P )
		If not alived owlDataProperty( P ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 3
Begin owlDataProperty_3
If empty store owlClassAssertion( U, C, true ) Then goto owlDataProperty_store
If empty store owlHasValueData( C, P, Y ) Then goto owlDataProperty_store
	Matching partner owlClassAssertion( U, C, true ) with idx#2<true>
		Matching partner owlHasValueData( C, P, Y ) with idx#1<C,P>
			If history <owlDataProperty( P ),owlClassAssertion( U, C, true ),owlHasValueData( C, P, Y )> Then
				store constraint owlDataProperty( P )
				owlDataPropertyAssertion( U, P, Y )
				If not alived owlDataProperty( P ) Then goto next goal constraint
				If not alived owlClassAssertion( U, C, true ) Then goto next matching of owlClassAssertion( U, C, true )
				goto next matching of owlHasValueData( C, P, Y )
			End history
		End matching partner owlHasValueData( C, P, Y )
	End matching partner owlClassAssertion( U, C, true )
End
// Fail through
Begin owlDataProperty_store
	Store constraint owlDataProperty
	Schedule constraint owlDataProperty with variable index 0
Goto next goal constraint
// Rule NegativeDataAssertion, active constraint owlDataPropertyAssertion( X, P, Y ), occurrence 0
Begin owlDataPropertyAssertion_0
If empty store owlNegativeDataAssertion( X, P, Y ) Then goto owlDataPropertyAssertion_1
	Matching partner owlNegativeDataAssertion( X, P, Y ) with idx#0<X,P,Y>
		remove constraint owlDataPropertyAssertion( X, P, Y )
		remove constraint owlNegativeDataAssertion( X, P, Y )
		failure
		goto next goal constraint
	End matching partner owlNegativeDataAssertion( X, P, Y )
End
// Rule DisjointDataProperty, active constraint owlDataPropertyAssertion( X, P1, Y ), occurrence 1
Begin owlDataPropertyAssertion_1
If empty store owlDataPropertyAssertion( X, P2, Y ) Then goto owlDataPropertyAssertion_2
If empty store owlDisjointDataProperty( L ) Then goto owlDataPropertyAssertion_2
	Matching partner owlDataPropertyAssertion( X, P2, Y ) with idx#0<X,Y>
		If guard
			( owlDataPropertyAssertion( X, P2, Y ) != owlDataPropertyAssertion( X, P1, Y ) )
		Then guard
			Matching partner owlDisjointDataProperty( L )
				If guard
					contains( P1, L )
					&& contains( P2, L )
				Then guard
					remove constraint owlDataPropertyAssertion( X, P1, Y )
					remove constraint owlDataPropertyAssertion( X, P2, Y )
					remove constraint owlDisjointDataProperty( L )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDisjointDataProperty( L )
		End guard
	End matching partner owlDataPropertyAssertion( X, P2, Y )
End
// Rule DisjointDataProperty, active constraint owlDataPropertyAssertion( X, P2, Y ), occurrence 2
Begin owlDataPropertyAssertion_2
If empty store owlDataPropertyAssertion( X, P1, Y ) Then goto owlDataPropertyAssertion_3
If empty store owlDisjointDataProperty( L ) Then goto owlDataPropertyAssertion_3
	Matching partner owlDataPropertyAssertion( X, P1, Y ) with idx#0<X,Y>
		If guard
			( owlDataPropertyAssertion( X, P1, Y ) != owlDataPropertyAssertion( X, P2, Y ) )
		Then guard
			Matching partner owlDisjointDataProperty( L )
				If guard
					contains( P1, L )
					&& contains( P2, L )
				Then guard
					remove constraint owlDataPropertyAssertion( X, P2, Y )
					remove constraint owlDataPropertyAssertion( X, P1, Y )
					remove constraint owlDisjointDataProperty( L )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDisjointDataProperty( L )
		End guard
	End matching partner owlDataPropertyAssertion( X, P1, Y )
End
// Rule DataPropertyDomain, active constraint owlDataPropertyAssertion( X, P, _ ), occurrence 3
Begin owlDataPropertyAssertion_3
If empty store owlDataPropertyDomain( P, DP ) Then goto owlDataPropertyAssertion_4
	Matching partner owlDataPropertyDomain( P, DP ) with idx#0<P>
		If history <owlDataPropertyAssertion( X, P, _ ),owlDataPropertyDomain( P, DP )> Then
			store constraint owlDataPropertyAssertion( X, P, _ )
			owlClassAssertion( X, DP, true )
			If not alived owlDataPropertyAssertion( X, P, _ ) Then goto next goal constraint
			goto next matching of owlDataPropertyDomain( P, DP )
		End history
	End matching partner owlDataPropertyDomain( P, DP )
End
// Rule DataPropertyRange, active constraint owlDataPropertyAssertion( _, P, Y ), occurrence 4
Begin owlDataPropertyAssertion_4
If empty store owlDataPropertyRange( P, DR ) Then goto owlDataPropertyAssertion_5
	Matching partner owlDataPropertyRange( P, DR ) with idx#0<P>
		If guard
			invalidType( DR, Y )
		Then guard
			remove constraint owlDataPropertyAssertion( _, P, Y )
			remove constraint owlDataPropertyRange( P, DR )
			failure
			goto next goal constraint
		End guard
	End matching partner owlDataPropertyRange( P, DR )
End
// Rule NO_NAME, active constraint owlDataPropertyAssertion( U, P, Y ), occurrence 5
Begin owlDataPropertyAssertion_5
If empty store owlHasValueData( C, P, Y ) Then goto owlDataPropertyAssertion_6
	Matching partner owlHasValueData( C, P, Y ) with idx#2<P,Y>
		If history <owlDataPropertyAssertion( U, P, Y ),owlHasValueData( C, P, Y )> Then
			store constraint owlDataPropertyAssertion( U, P, Y )
			owlClassAssertion( U, C, true )
			If not alived owlDataPropertyAssertion( U, P, Y ) Then goto next goal constraint
			goto next matching of owlHasValueData( C, P, Y )
		End history
	End matching partner owlHasValueData( C, P, Y )
End
// Rule NO_NAME, active constraint owlDataPropertyAssertion( X, P, V1 ), occurrence 6
Begin owlDataPropertyAssertion_6
If empty store owlDataPropertyAssertion( Y, P, V1 ) Then goto owlDataPropertyAssertion_7
If empty store owlHasKeyLoop( IT, ITEND, X, Y ) Then goto owlDataPropertyAssertion_7
	Matching partner owlDataPropertyAssertion( Y, P, V1 ) with idx#1<P,V1>
		If guard
			( owlDataPropertyAssertion( Y, P, V1 ) != owlDataPropertyAssertion( X, P, V1 ) )
		Then guard
			Matching partner owlHasKeyLoop( IT, ITEND, X, Y ) with idx#0<X,Y>
				If guard
					( P == ( *( *IT ) ) )
				Then guard
					store constraint owlDataPropertyAssertion( X, P, V1 )
					remove constraint owlHasKeyLoop( IT, ITEND, X, Y )
					owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )
					If not alived owlDataPropertyAssertion( X, P, V1 ) Then goto next goal constraint
					If not alived owlDataPropertyAssertion( Y, P, V1 ) Then goto next matching of owlDataPropertyAssertion( Y, P, V1 )
					goto next matching of owlHasKeyLoop( IT, ITEND, X, Y )
				End guard
			End matching partner owlHasKeyLoop( IT, ITEND, X, Y )
		End guard
	End matching partner owlDataPropertyAssertion( Y, P, V1 )
End
// Rule NO_NAME, active constraint owlDataPropertyAssertion( Y, P, V1 ), occurrence 7
Begin owlDataPropertyAssertion_7
If empty store owlDataPropertyAssertion( X, P, V1 ) Then goto owlDataPropertyAssertion_store
If empty store owlHasKeyLoop( IT, ITEND, X, Y ) Then goto owlDataPropertyAssertion_store
	Matching partner owlDataPropertyAssertion( X, P, V1 ) with idx#1<P,V1>
		If guard
			( owlDataPropertyAssertion( X, P, V1 ) != owlDataPropertyAssertion( Y, P, V1 ) )
		Then guard
			Matching partner owlHasKeyLoop( IT, ITEND, X, Y ) with idx#0<X,Y>
				If guard
					( P == ( *( *IT ) ) )
				Then guard
					store constraint owlDataPropertyAssertion( Y, P, V1 )
					remove constraint owlHasKeyLoop( IT, ITEND, X, Y )
					owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )
					If not alived owlDataPropertyAssertion( Y, P, V1 ) Then goto next goal constraint
					If not alived owlDataPropertyAssertion( X, P, V1 ) Then goto next matching of owlDataPropertyAssertion( X, P, V1 )
					goto next matching of owlHasKeyLoop( IT, ITEND, X, Y )
				End guard
			End matching partner owlHasKeyLoop( IT, ITEND, X, Y )
		End guard
	End matching partner owlDataPropertyAssertion( X, P, V1 )
End
// Fail through
Begin owlDataPropertyAssertion_store
	Store constraint owlDataPropertyAssertion
	Schedule constraint owlDataPropertyAssertion with variable index 0
	Schedule constraint owlDataPropertyAssertion with variable index 1
	Schedule constraint owlDataPropertyAssertion with variable index 2
Goto next goal constraint
// Rule DataPropertyDomain, active constraint owlDataPropertyDomain( P, DP ), occurrence 0
Begin owlDataPropertyDomain_0
If empty store owlDataPropertyAssertion( X, P, _ ) Then goto owlDataPropertyDomain_store
	Matching partner owlDataPropertyAssertion( X, P, _ ) with idx#2<P>
		If history <owlDataPropertyDomain( P, DP ),owlDataPropertyAssertion( X, P, _ )> Then
			store constraint owlDataPropertyDomain( P, DP )
			owlClassAssertion( X, DP, true )
			If not alived owlDataPropertyDomain( P, DP ) Then goto next goal constraint
			goto next matching of owlDataPropertyAssertion( X, P, _ )
		End history
	End matching partner owlDataPropertyAssertion( X, P, _ )
End
// Fail through
Begin owlDataPropertyDomain_store
	Store constraint owlDataPropertyDomain
Goto next goal constraint
// Rule DataPropertyRange, active constraint owlDataPropertyRange( P, DR ), occurrence 0
Begin owlDataPropertyRange_0
If empty store owlDataPropertyAssertion( _, P, Y ) Then goto owlDataPropertyRange_store
	Matching partner owlDataPropertyAssertion( _, P, Y ) with idx#2<P>
		If guard
			invalidType( DR, Y )
		Then guard
			remove constraint owlDataPropertyRange( P, DR )
			remove constraint owlDataPropertyAssertion( _, P, Y )
			failure
			goto next goal constraint
		End guard
	End matching partner owlDataPropertyAssertion( _, P, Y )
End
// Fail through
Begin owlDataPropertyRange_store
	Store constraint owlDataPropertyRange
Goto next goal constraint
// Rule NO_NAME, active constraint owlDataSubPropertyOf( A, B ), occurrence 0
Begin owlDataSubPropertyOf_0
If empty store owlDataSubPropertyOf( B, C ) Then goto owlDataSubPropertyOf_1
	Matching partner owlDataSubPropertyOf( B, C ) with idx#0<B>
		If guard
			guard_condition( A, B, C )
			&& ( owlDataSubPropertyOf( B, C ) != owlDataSubPropertyOf( A, B ) )
		Then guard
			If history <owlDataSubPropertyOf( A, B ),owlDataSubPropertyOf( B, C )> Then
				store constraint owlDataSubPropertyOf( A, B )
				owlDataSubPropertyOf( A, C )
				If not alived owlDataSubPropertyOf( A, B ) Then goto next goal constraint
				goto next matching of owlDataSubPropertyOf( B, C )
			End history
		End guard
	End matching partner owlDataSubPropertyOf( B, C )
End
// Rule NO_NAME, active constraint owlDataSubPropertyOf( B, C ), occurrence 1
Begin owlDataSubPropertyOf_1
If empty store owlDataSubPropertyOf( A, B ) Then goto owlDataSubPropertyOf_2
	Matching partner owlDataSubPropertyOf( A, B ) with idx#1<B>
		If guard
			guard_condition( A, B, C )
			&& ( owlDataSubPropertyOf( A, B ) != owlDataSubPropertyOf( B, C ) )
		Then guard
			If history <owlDataSubPropertyOf( B, C ),owlDataSubPropertyOf( A, B )> Then
				store constraint owlDataSubPropertyOf( B, C )
				owlDataSubPropertyOf( A, C )
				If not alived owlDataSubPropertyOf( B, C ) Then goto next goal constraint
				goto next matching of owlDataSubPropertyOf( A, B )
			End history
		End guard
	End matching partner owlDataSubPropertyOf( A, B )
End
// Rule NO_NAME, active constraint owlDataSubPropertyOf( A, B ), occurrence 2
Begin owlDataSubPropertyOf_2
If empty store owlDataSubPropertyOf( B, A ) Then goto owlDataSubPropertyOf_3
	If guard
		different( A, B )
	Then guard
		Matching partner owlDataSubPropertyOf( B, A ) with idx#2<B,A>
			If guard
				( owlDataSubPropertyOf( B, A ) != owlDataSubPropertyOf( A, B ) )
			Then guard
				If history <owlDataSubPropertyOf( A, B ),owlDataSubPropertyOf( B, A )> Then
					store constraint owlDataSubPropertyOf( A, B )
					owlEquivalentDataProperty( A, B )
					If not alived owlDataSubPropertyOf( A, B ) Then goto next goal constraint
					goto next matching of owlDataSubPropertyOf( B, A )
				End history
			End guard
		End matching partner owlDataSubPropertyOf( B, A )
	End guard
End
// Rule NO_NAME, active constraint owlDataSubPropertyOf( B, A ), occurrence 3
Begin owlDataSubPropertyOf_3
If empty store owlDataSubPropertyOf( A, B ) Then goto owlDataSubPropertyOf_store
	If guard
		different( A, B )
	Then guard
		Matching partner owlDataSubPropertyOf( A, B ) with idx#2<A,B>
			If guard
				( owlDataSubPropertyOf( A, B ) != owlDataSubPropertyOf( B, A ) )
			Then guard
				If history <owlDataSubPropertyOf( B, A ),owlDataSubPropertyOf( A, B )> Then
					store constraint owlDataSubPropertyOf( B, A )
					owlEquivalentDataProperty( A, B )
					If not alived owlDataSubPropertyOf( B, A ) Then goto next goal constraint
					goto next matching of owlDataSubPropertyOf( A, B )
				End history
			End guard
		End matching partner owlDataSubPropertyOf( A, B )
	End guard
End
// Fail through
Begin owlDataSubPropertyOf_store
	Store constraint owlDataSubPropertyOf
Goto next goal constraint
// Rule NO_NAME, active constraint owlDifferentIndividual( X, Y ), occurrence 0
Begin owlDifferentIndividual_0
If empty store owlDifferentIndividual( X, Y ) Then goto owlDifferentIndividual_1
	Matching partner owlDifferentIndividual( X, Y ) with idx#0<X,Y>
		If guard
			( owlDifferentIndividual( X, Y ) != owlDifferentIndividual( X, Y ) )
		Then guard
			remove constraint owlDifferentIndividual( X, Y )
			true
			goto next goal constraint
		End guard
	End matching partner owlDifferentIndividual( X, Y )
End
// Rule DifferentIndividual, active constraint owlDifferentIndividual( X, Y ), occurrence 1
Begin owlDifferentIndividual_1
If empty store owlSameIndividual( X, Y ) Then goto owlDifferentIndividual_store
	Matching partner owlSameIndividual( X, Y ) with idx#0<X,Y>
		remove constraint owlDifferentIndividual( X, Y )
		remove constraint owlSameIndividual( X, Y )
		failure
		goto next goal constraint
	End matching partner owlSameIndividual( X, Y )
End
// Fail through
Begin owlDifferentIndividual_store
	Store constraint owlDifferentIndividual
	Schedule constraint owlDifferentIndividual with variable index 0
	Schedule constraint owlDifferentIndividual with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlDisjointClass( L ), occurrence 0
Begin owlDisjointClass_0
If empty store owlDisjointClass( L ) Then goto owlDisjointClass_1
	Matching partner owlDisjointClass( L ) with idx#0<L>
		If guard
			( owlDisjointClass( L ) != owlDisjointClass( L ) )
		Then guard
			remove constraint owlDisjointClass( L )
			true
			goto next goal constraint
		End guard
	End matching partner owlDisjointClass( L )
End
// Rule DisjointClass, active constraint owlDisjointClass( L ), occurrence 1
Begin owlDisjointClass_1
If empty store owlClassAssertion( X, A, true ) Then goto owlDisjointClass_store
If empty store owlClassAssertion( X, B, true ) Then goto owlDisjointClass_store
	Matching partner owlClassAssertion( X, A, true ) with idx#2<true>
		If guard
			contains( A, L )
		Then guard
			Matching partner owlClassAssertion( X, B, true ) with idx#0<X,true>
				If guard
					contains( B, L )
					&& ( owlClassAssertion( X, B, true ) != owlClassAssertion( X, A, true ) )
				Then guard
					remove constraint owlDisjointClass( L )
					remove constraint owlClassAssertion( X, A, true )
					remove constraint owlClassAssertion( X, B, true )
					failure
					goto next goal constraint
				End guard
			End matching partner owlClassAssertion( X, B, true )
		End guard
	End matching partner owlClassAssertion( X, A, true )
End
// Fail through
Begin owlDisjointClass_store
	Store constraint owlDisjointClass
	Schedule constraint owlDisjointClass with variable index 0
Goto next goal constraint
// Rule DisjointDataProperty, active constraint owlDisjointDataProperty( L ), occurrence 0
Begin owlDisjointDataProperty_0
If empty store owlDataPropertyAssertion( X, P1, Y ) Then goto owlDisjointDataProperty_store
If empty store owlDataPropertyAssertion( X, P2, Y ) Then goto owlDisjointDataProperty_store
	Matching partner owlDataPropertyAssertion( X, P1, Y )
		If guard
			contains( P1, L )
		Then guard
			Matching partner owlDataPropertyAssertion( X, P2, Y ) with idx#0<X,Y>
				If guard
					contains( P2, L )
					&& ( owlDataPropertyAssertion( X, P2, Y ) != owlDataPropertyAssertion( X, P1, Y ) )
				Then guard
					remove constraint owlDisjointDataProperty( L )
					remove constraint owlDataPropertyAssertion( X, P1, Y )
					remove constraint owlDataPropertyAssertion( X, P2, Y )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDataPropertyAssertion( X, P2, Y )
		End guard
	End matching partner owlDataPropertyAssertion( X, P1, Y )
End
// Fail through
Begin owlDisjointDataProperty_store
	Store constraint owlDisjointDataProperty
	Schedule constraint owlDisjointDataProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlDisjointObjectProperty( L ), occurrence 0
Begin owlDisjointObjectProperty_0
If empty store owlDisjointObjectProperty( L ) Then goto owlDisjointObjectProperty_1
	Matching partner owlDisjointObjectProperty( L ) with idx#0<L>
		If guard
			( owlDisjointObjectProperty( L ) != owlDisjointObjectProperty( L ) )
		Then guard
			remove constraint owlDisjointObjectProperty( L )
			true
			goto next goal constraint
		End guard
	End matching partner owlDisjointObjectProperty( L )
End
// Rule DisjointProperty, active constraint owlDisjointObjectProperty( L ), occurrence 1
Begin owlDisjointObjectProperty_1
If empty store owlObjectPropertyAssertion( X, P1, Y ) Then goto owlDisjointObjectProperty_store
If empty store owlObjectPropertyAssertion( X, P2, Y ) Then goto owlDisjointObjectProperty_store
	Matching partner owlObjectPropertyAssertion( X, P1, Y )
		If guard
			contains( P1, L )
		Then guard
			Matching partner owlObjectPropertyAssertion( X, P2, Y ) with idx#3<X,Y>
				If guard
					contains( P2, L )
					&& ( owlObjectPropertyAssertion( X, P2, Y ) != owlObjectPropertyAssertion( X, P1, Y ) )
				Then guard
					remove constraint owlDisjointObjectProperty( L )
					remove constraint owlObjectPropertyAssertion( X, P1, Y )
					remove constraint owlObjectPropertyAssertion( X, P2, Y )
					failure
					goto next goal constraint
				End guard
			End matching partner owlObjectPropertyAssertion( X, P2, Y )
		End guard
	End matching partner owlObjectPropertyAssertion( X, P1, Y )
End
// Fail through
Begin owlDisjointObjectProperty_store
	Store constraint owlDisjointObjectProperty
	Schedule constraint owlDisjointObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlEquivalentClass( A, B ), occurrence 0
Begin owlEquivalentClass_0
If empty store owlEquivalentClass( A, B ) Then goto owlEquivalentClass_store
	Matching partner owlEquivalentClass( A, B ) with idx#0<A,B>
		If guard
			( owlEquivalentClass( A, B ) != owlEquivalentClass( A, B ) )
		Then guard
			remove constraint owlEquivalentClass( A, B )
			true
			goto next goal constraint
		End guard
	End matching partner owlEquivalentClass( A, B )
End
// Fail through
Begin owlEquivalentClass_store
	Store constraint owlEquivalentClass
	Schedule constraint owlEquivalentClass with variable index 0
	Schedule constraint owlEquivalentClass with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlEquivalentDataProperty( A, B ), occurrence 0
Begin owlEquivalentDataProperty_0
	If guard
		different( A, B )
	Then guard
		If history <owlEquivalentDataProperty( A, B )> Then
			owlDataSubPropertyOf( A, B )
			owlDataSubPropertyOf( B, A )
		End history
	End guard
End
// Fail through
Begin owlEquivalentDataProperty_store
	Store constraint owlEquivalentDataProperty
Goto next goal constraint
// Rule NO_NAME, active constraint owlEquivalentObjectProperty( A, B ), occurrence 0
Begin owlEquivalentObjectProperty_0
If empty store owlEquivalentObjectProperty( A, B ) Then goto owlEquivalentObjectProperty_store
	Matching partner owlEquivalentObjectProperty( A, B ) with idx#0<A,B>
		If guard
			( owlEquivalentObjectProperty( A, B ) != owlEquivalentObjectProperty( A, B ) )
		Then guard
			remove constraint owlEquivalentObjectProperty( A, B )
			true
			goto next goal constraint
		End guard
	End matching partner owlEquivalentObjectProperty( A, B )
End
// Fail through
Begin owlEquivalentObjectProperty_store
	Store constraint owlEquivalentObjectProperty
	Schedule constraint owlEquivalentObjectProperty with variable index 0
	Schedule constraint owlEquivalentObjectProperty with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlFunctionalObjectProperty( P ), occurrence 0
Begin owlFunctionalObjectProperty_0
If empty store owlFunctionalObjectProperty( P ) Then goto owlFunctionalObjectProperty_store
	Matching partner owlFunctionalObjectProperty( P ) with idx#0<P>
		If guard
			( owlFunctionalObjectProperty( P ) != owlFunctionalObjectProperty( P ) )
		Then guard
			remove constraint owlFunctionalObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlFunctionalObjectProperty( P )
End
// Fail through
Begin owlFunctionalObjectProperty_store
	Store constraint owlFunctionalObjectProperty
	Schedule constraint owlFunctionalObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlHasKey( E, P, C ), occurrence 0
Begin owlHasKey_0
If empty store owlClassAssertion( X, C, true ) Then goto owlHasKey_store
If empty store owlClassAssertion( Y, C, true ) Then goto owlHasKey_store
	Matching partner owlClassAssertion( X, C, true ) with idx#1<C,true>
		Matching partner owlClassAssertion( Y, C, true ) with idx#1<C,true>
			If guard
				( !( X == Y ) )
				&& ( owlClassAssertion( Y, C, true ) != owlClassAssertion( X, C, true ) )
			Then guard
				If history <owlHasKey( E, P, C ),owlClassAssertion( X, C, true ),owlClassAssertion( Y, C, true )> Then
					store constraint owlHasKey( E, P, C )
					owlHasKeyLoop( ( ( *P ) . begin )(  ), ( ( *P ) . end )(  ), X, Y )
					If not alived owlHasKey( E, P, C ) Then goto next goal constraint
					If not alived owlClassAssertion( X, C, true ) Then goto next matching of owlClassAssertion( X, C, true )
					goto next matching of owlClassAssertion( Y, C, true )
				End history
			End guard
		End matching partner owlClassAssertion( Y, C, true )
	End matching partner owlClassAssertion( X, C, true )
End
// Fail through
Begin owlHasKey_store
	Store constraint owlHasKey
	Schedule constraint owlHasKey with variable index 0
	Schedule constraint owlHasKey with variable index 1
	Schedule constraint owlHasKey with variable index 2
Goto next goal constraint
// Rule NO_NAME, active constraint owlHasKeyLoop( ITEND, ITEND, X, Y ), occurrence 0
Begin owlHasKeyLoop_0
	remove constraint owlHasKeyLoop( ITEND, ITEND, X, Y )
	owlSameIndividual( X, Y )
	goto next goal constraint
End
// Rule NO_NAME, active constraint owlHasKeyLoop( IT, ITEND, X, Y ), occurrence 1
Begin owlHasKeyLoop_1
If empty store owlObjectPropertyAssertion( X, P, V1 ) Then goto owlHasKeyLoop_2
If empty store owlObjectPropertyAssertion( Y, P, V1 ) Then goto owlHasKeyLoop_2
	Matching partner owlObjectPropertyAssertion( X, P, V1 ) with idx#6<X>
		If guard
			( P == ( *( *IT ) ) )
		Then guard
			Matching partner owlObjectPropertyAssertion( Y, P, V1 ) with idx#2<Y,P,V1>
				If guard
					( owlObjectPropertyAssertion( Y, P, V1 ) != owlObjectPropertyAssertion( X, P, V1 ) )
				Then guard
					remove constraint owlHasKeyLoop( IT, ITEND, X, Y )
					owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )
					goto next goal constraint
				End guard
			End matching partner owlObjectPropertyAssertion( Y, P, V1 )
		End guard
	End matching partner owlObjectPropertyAssertion( X, P, V1 )
End
// Rule NO_NAME, active constraint owlHasKeyLoop( IT, ITEND, X, Y ), occurrence 2
Begin owlHasKeyLoop_2
If empty store owlDataPropertyAssertion( X, P, V1 ) Then goto owlHasKeyLoop_store
If empty store owlDataPropertyAssertion( Y, P, V1 ) Then goto owlHasKeyLoop_store
	Matching partner owlDataPropertyAssertion( X, P, V1 ) with idx#3<X>
		If guard
			( P == ( *( *IT ) ) )
		Then guard
			Matching partner owlDataPropertyAssertion( Y, P, V1 ) with idx#4<Y,P,V1>
				If guard
					( owlDataPropertyAssertion( Y, P, V1 ) != owlDataPropertyAssertion( X, P, V1 ) )
				Then guard
					remove constraint owlHasKeyLoop( IT, ITEND, X, Y )
					owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )
					goto next goal constraint
				End guard
			End matching partner owlDataPropertyAssertion( Y, P, V1 )
		End guard
	End matching partner owlDataPropertyAssertion( X, P, V1 )
End
// Fail through
Begin owlHasKeyLoop_store
	Store constraint owlHasKeyLoop
	Schedule constraint owlHasKeyLoop with variable index 2
	Schedule constraint owlHasKeyLoop with variable index 3
Goto next goal constraint
// Rule NO_NAME, active constraint owlHasValueData( C, P, Y ), occurrence 0
Begin owlHasValueData_0
If empty store owlClassAssertion( U, C, true ) Then goto owlHasValueData_1
If empty store owlDataProperty( P ) Then goto owlHasValueData_1
	Matching partner owlClassAssertion( U, C, true ) with idx#1<C,true>
		Matching partner owlDataProperty( P ) with idx#0<P>
			If history <owlHasValueData( C, P, Y ),owlClassAssertion( U, C, true ),owlDataProperty( P )> Then
				store constraint owlHasValueData( C, P, Y )
				owlDataPropertyAssertion( U, P, Y )
				If not alived owlHasValueData( C, P, Y ) Then goto next goal constraint
				If not alived owlClassAssertion( U, C, true ) Then goto next matching of owlClassAssertion( U, C, true )
				goto next matching of owlDataProperty( P )
			End history
		End matching partner owlDataProperty( P )
	End matching partner owlClassAssertion( U, C, true )
End
// Rule NO_NAME, active constraint owlHasValueData( C, P, Y ), occurrence 1
Begin owlHasValueData_1
If empty store owlDataPropertyAssertion( U, P, Y ) Then goto owlHasValueData_store
	Matching partner owlDataPropertyAssertion( U, P, Y ) with idx#1<P,Y>
		If history <owlHasValueData( C, P, Y ),owlDataPropertyAssertion( U, P, Y )> Then
			store constraint owlHasValueData( C, P, Y )
			owlClassAssertion( U, C, true )
			If not alived owlHasValueData( C, P, Y ) Then goto next goal constraint
			goto next matching of owlDataPropertyAssertion( U, P, Y )
		End history
	End matching partner owlDataPropertyAssertion( U, P, Y )
End
// Fail through
Begin owlHasValueData_store
	Store constraint owlHasValueData
	Schedule constraint owlHasValueData with variable index 0
	Schedule constraint owlHasValueData with variable index 1
	Schedule constraint owlHasValueData with variable index 2
Goto next goal constraint
// Rule NO_NAME, active constraint owlHasValueObject( C, P, Y ), occurrence 0
Begin owlHasValueObject_0
If empty store owlClassAssertion( U, C, true ) Then goto owlHasValueObject_1
If empty store owlObjectProperty( P ) Then goto owlHasValueObject_1
	Matching partner owlClassAssertion( U, C, true ) with idx#1<C,true>
		Matching partner owlObjectProperty( P ) with idx#0<P>
			If history <owlHasValueObject( C, P, Y ),owlClassAssertion( U, C, true ),owlObjectProperty( P )> Then
				store constraint owlHasValueObject( C, P, Y )
				owlObjectPropertyAssertion( U, P, Y )
				If not alived owlHasValueObject( C, P, Y ) Then goto next goal constraint
				If not alived owlClassAssertion( U, C, true ) Then goto next matching of owlClassAssertion( U, C, true )
				goto next matching of owlObjectProperty( P )
			End history
		End matching partner owlObjectProperty( P )
	End matching partner owlClassAssertion( U, C, true )
End
// Rule NO_NAME, active constraint owlHasValueObject( C, P, Y ), occurrence 1
Begin owlHasValueObject_1
If empty store owlObjectPropertyAssertion( U, P, Y ) Then goto owlHasValueObject_store
	Matching partner owlObjectPropertyAssertion( U, P, Y ) with idx#5<P,Y>
		If history <owlHasValueObject( C, P, Y ),owlObjectPropertyAssertion( U, P, Y )> Then
			store constraint owlHasValueObject( C, P, Y )
			owlClassAssertion( U, C, true )
			If not alived owlHasValueObject( C, P, Y ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( U, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( U, P, Y )
End
// Fail through
Begin owlHasValueObject_store
	Store constraint owlHasValueObject
	Schedule constraint owlHasValueObject with variable index 0
	Schedule constraint owlHasValueObject with variable index 1
	Schedule constraint owlHasValueObject with variable index 2
Goto next goal constraint
// Rule r2, active constraint owlIntersectionClass( C, V, 0 ), occurrence 0
Begin owlIntersectionClass_0
If empty store owlClassAssertion( X, V, true ) Then goto owlIntersectionClass_1
	Matching partner owlClassAssertion( X, V, true ) with idx#1<V,true>
		If history <owlIntersectionClass( C, V, 0 ),owlClassAssertion( X, V, true )> Then
			store constraint owlIntersectionClass( C, V, 0 )
			owlCandidatsIntersection( X, C, 0 )
			If not alived owlIntersectionClass( C, V, 0 ) Then goto next goal constraint
			goto next matching of owlClassAssertion( X, V, true )
		End history
	End matching partner owlClassAssertion( X, V, true )
End
// Rule r3, active constraint owlIntersectionClass( C, V, I ), occurrence 1
Begin owlIntersectionClass_1
If empty store owlClassAssertion( X, V, true ) Then goto owlIntersectionClass_2
If empty store owlCandidatsIntersection( X, C, I ) Then goto owlIntersectionClass_2
	Matching partner owlClassAssertion( X, V, true ) with idx#1<V,true>
		Matching partner owlCandidatsIntersection( X, C, I ) with idx#0<X,C,I>
			If history <owlIntersectionClass( C, V, I ),owlClassAssertion( X, V, true ),owlCandidatsIntersection( X, C, I )> Then
				store constraint owlIntersectionClass( C, V, I )
				owlCandidatsIntersection( X, C, ( I + 1 ) )
				If not alived owlIntersectionClass( C, V, I ) Then goto next goal constraint
				If not alived owlClassAssertion( X, V, true ) Then goto next matching of owlClassAssertion( X, V, true )
				goto next matching of owlCandidatsIntersection( X, C, I )
			End history
		End matching partner owlCandidatsIntersection( X, C, I )
	End matching partner owlClassAssertion( X, V, true )
End
// Rule NO_NAME, active constraint owlIntersectionClass( C, C1, _ ), occurrence 2
Begin owlIntersectionClass_2
If empty store owlClassAssertion( X, C, true ) Then goto owlIntersectionClass_store
	Matching partner owlClassAssertion( X, C, true ) with idx#1<C,true>
		If history <owlIntersectionClass( C, C1, _ ),owlClassAssertion( X, C, true )> Then
			store constraint owlIntersectionClass( C, C1, _ )
			owlClassAssertion( X, C1, true )
			If not alived owlIntersectionClass( C, C1, _ ) Then goto next goal constraint
			goto next matching of owlClassAssertion( X, C, true )
		End history
	End matching partner owlClassAssertion( X, C, true )
End
// Fail through
Begin owlIntersectionClass_store
	Store constraint owlIntersectionClass
Goto next goal constraint
// Rule r1, active constraint owlIntersectionOf( C, IT, ITEND, I ), occurrence 0
Begin owlIntersectionOf_0
	If guard
		( IT != ITEND )
	Then guard
		remove constraint owlIntersectionOf( C, IT, ITEND, I )
		owlIntersectionClass( C, ( *( *IT ) ), I )
		owlIntersectionOf( C, ( std :: next )( ( *IT ) ), ITEND, ( I + 1 ) )
		goto next goal constraint
	End guard
End
// Rule r5, active constraint owlIntersectionOf( C, ITEND, ITEND, I ), occurrence 1
Begin owlIntersectionOf_1
If empty store owlCandidatsIntersection( X, C, I ) Then goto owlIntersectionOf_2
	Matching partner owlCandidatsIntersection( X, C, I ) with idx#1<C,I>
		store constraint owlIntersectionOf( C, ITEND, ITEND, I )
		remove constraint owlCandidatsIntersection( X, C, I )
		owlClassAssertion( X, C, true )
		If not alived owlIntersectionOf( C, ITEND, ITEND, I ) Then goto next goal constraint
		goto next matching of owlCandidatsIntersection( X, C, I )
	End matching partner owlCandidatsIntersection( X, C, I )
End
// Rule r4, active constraint owlIntersectionOf( C, ITEND, ITEND, I ), occurrence 2
Begin owlIntersectionOf_2
	remove constraint owlIntersectionOf( C, ITEND, ITEND, I )
	success
	goto next goal constraint
End
// Fail through
Begin owlIntersectionOf_store
	Store constraint owlIntersectionOf
Goto next goal constraint
// Rule r0, active constraint owlIntersectionOf1( C, S ), occurrence 0
Begin owlIntersectionOf1_0
	If history <owlIntersectionOf1( C, S )> Then
		store constraint owlIntersectionOf1( C, S )
		owlIntersectionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ), 0 )
		If not alived owlIntersectionOf1( C, S ) Then goto next goal constraint
	End history
End
// Fail through
Begin owlIntersectionOf1_store
	Store constraint owlIntersectionOf1
Goto next goal constraint
// Rule NO_NAME, active constraint owlInverseFunctionalObjectProperty( P ), occurrence 0
Begin owlInverseFunctionalObjectProperty_0
If empty store owlInverseFunctionalObjectProperty( P ) Then goto owlInverseFunctionalObjectProperty_store
	Matching partner owlInverseFunctionalObjectProperty( P ) with idx#0<P>
		If guard
			( owlInverseFunctionalObjectProperty( P ) != owlInverseFunctionalObjectProperty( P ) )
		Then guard
			remove constraint owlInverseFunctionalObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlInverseFunctionalObjectProperty( P )
End
// Fail through
Begin owlInverseFunctionalObjectProperty_store
	Store constraint owlInverseFunctionalObjectProperty
	Schedule constraint owlInverseFunctionalObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlInverseObjectProperty( P1, P2 ), occurrence 0
Begin owlInverseObjectProperty_0
If empty store owlInverseObjectProperty( P1, P2 ) Then goto owlInverseObjectProperty_1
	Matching partner owlInverseObjectProperty( P1, P2 ) with idx#0<P1,P2>
		If guard
			( owlInverseObjectProperty( P1, P2 ) != owlInverseObjectProperty( P1, P2 ) )
		Then guard
			remove constraint owlInverseObjectProperty( P1, P2 )
			true
			goto next goal constraint
		End guard
	End matching partner owlInverseObjectProperty( P1, P2 )
End
// Rule inverseProperty, active constraint owlInverseObjectProperty( P1, P2 ), occurrence 1
Begin owlInverseObjectProperty_1
If empty store owlObjectPropertyAssertion( X, P1, Y ) Then goto owlInverseObjectProperty_2
	Matching partner owlObjectPropertyAssertion( X, P1, Y ) with idx#4<P1>
		If history <owlInverseObjectProperty( P1, P2 ),owlObjectPropertyAssertion( X, P1, Y )> Then
			store constraint owlInverseObjectProperty( P1, P2 )
			owlObjectPropertyAssertion( Y, P2, X )
			If not alived owlInverseObjectProperty( P1, P2 ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P1, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P1, Y )
End
// Rule NO_NAME, active constraint owlInverseObjectProperty( P1, P2 ), occurrence 2
Begin owlInverseObjectProperty_2
	If history <owlInverseObjectProperty( P1, P2 )> Then
		store constraint owlInverseObjectProperty( P1, P2 )
		owlInverseObjectProperty( P2, P1 )
		If not alived owlInverseObjectProperty( P1, P2 ) Then goto next goal constraint
	End history
End
// Fail through
Begin owlInverseObjectProperty_store
	Store constraint owlInverseObjectProperty
	Schedule constraint owlInverseObjectProperty with variable index 0
	Schedule constraint owlInverseObjectProperty with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlIrreflexiveObjectProperty( P ), occurrence 0
Begin owlIrreflexiveObjectProperty_0
If empty store owlIrreflexiveObjectProperty( P ) Then goto owlIrreflexiveObjectProperty_1
	Matching partner owlIrreflexiveObjectProperty( P ) with idx#0<P>
		If guard
			( owlIrreflexiveObjectProperty( P ) != owlIrreflexiveObjectProperty( P ) )
		Then guard
			remove constraint owlIrreflexiveObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlIrreflexiveObjectProperty( P )
End
// Rule irreflexiveProperty, active constraint owlIrreflexiveObjectProperty( P ), occurrence 1
Begin owlIrreflexiveObjectProperty_1
If empty store owlObjectPropertyAssertion( X, P, X ) Then goto owlIrreflexiveObjectProperty_store
	Matching partner owlObjectPropertyAssertion( X, P, _LV_0_ ) with idx#4<P>
		If guard
			( _LV_0_ == X )
		Then guard
			remove constraint owlIrreflexiveObjectProperty( P )
			remove constraint owlObjectPropertyAssertion( X, P, _LV_0_ )
			failure
			goto next goal constraint
		End guard
	End matching partner owlObjectPropertyAssertion( X, P, _LV_0_ )
End
// Fail through
Begin owlIrreflexiveObjectProperty_store
	Store constraint owlIrreflexiveObjectProperty
	Schedule constraint owlIrreflexiveObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlMaxCardinality( C, P, 0 ), occurrence 0
Begin owlMaxCardinality_0
If empty store owlClassAssertion( U, C, true ) Then goto owlMaxCardinality_1
If empty store owlObjectPropertyAssertion( U, P, _ ) Then goto owlMaxCardinality_1
	Matching partner owlClassAssertion( U, C, true ) with idx#1<C,true>
		Matching partner owlObjectPropertyAssertion( U, P, _ ) with idx#0<U,P>
			remove constraint owlMaxCardinality( C, P, 0 )
			remove constraint owlClassAssertion( U, C, true )
			remove constraint owlObjectPropertyAssertion( U, P, _ )
			failure
			goto next goal constraint
		End matching partner owlObjectPropertyAssertion( U, P, _ )
	End matching partner owlClassAssertion( U, C, true )
End
// Rule NO_NAME, active constraint owlMaxCardinality( C, P, 1 ), occurrence 1
Begin owlMaxCardinality_1
If empty store owlClassAssertion( U, C, true ) Then goto owlMaxCardinality_store
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlMaxCardinality_store
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlMaxCardinality_store
	Matching partner owlClassAssertion( U, C, true ) with idx#1<C,true>
		Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#0<U,P>
			Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#0<U,P>
				If guard
					( !( Y1 == Y2 ) )
					&& ( owlObjectPropertyAssertion( U, P, Y2 ) != owlObjectPropertyAssertion( U, P, Y1 ) )
				Then guard
					remove constraint owlMaxCardinality( C, P, 1 )
					remove constraint owlClassAssertion( U, C, true )
					remove constraint owlObjectPropertyAssertion( U, P, Y1 )
					remove constraint owlObjectPropertyAssertion( U, P, Y2 )
					owlSameIndividual( Y1, Y2 )
					goto next goal constraint
				End guard
			End matching partner owlObjectPropertyAssertion( U, P, Y2 )
		End matching partner owlObjectPropertyAssertion( U, P, Y1 )
	End matching partner owlClassAssertion( U, C, true )
End
// Fail through
Begin owlMaxCardinality_store
	Store constraint owlMaxCardinality
	Schedule constraint owlMaxCardinality with variable index 0
	Schedule constraint owlMaxCardinality with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlMaxQualifiedCardinality( X, P, C, 0 ), occurrence 0
Begin owlMaxQualifiedCardinality_0
If empty store owlClassAssertion( U, X, true ) Then goto owlMaxQualifiedCardinality_1
If empty store owlClassAssertion( Y, C, true ) Then goto owlMaxQualifiedCardinality_1
If empty store owlObjectPropertyAssertion( U, P, Y ) Then goto owlMaxQualifiedCardinality_1
	Matching partner owlClassAssertion( U, X, true ) with idx#1<X,true>
		Matching partner owlClassAssertion( Y, C, true ) with idx#1<C,true>
			If guard
				( owlClassAssertion( Y, C, true ) != owlClassAssertion( U, X, true ) )
			Then guard
				Matching partner owlObjectPropertyAssertion( U, P, Y ) with idx#2<U,P,Y>
					remove constraint owlMaxQualifiedCardinality( X, P, C, 0 )
					remove constraint owlClassAssertion( U, X, true )
					remove constraint owlClassAssertion( Y, C, true )
					remove constraint owlObjectPropertyAssertion( U, P, Y )
					failure
					goto next goal constraint
				End matching partner owlObjectPropertyAssertion( U, P, Y )
			End guard
		End matching partner owlClassAssertion( Y, C, true )
	End matching partner owlClassAssertion( U, X, true )
End
// Rule NO_NAME, active constraint owlMaxQualifiedCardinality( X, P, C, 1 ), occurrence 1
Begin owlMaxQualifiedCardinality_1
If empty store owlClassAssertion( U, X, true ) Then goto owlMaxQualifiedCardinality_store
If empty store owlClassAssertion( Y1, C, true ) Then goto owlMaxQualifiedCardinality_store
If empty store owlClassAssertion( Y2, C, true ) Then goto owlMaxQualifiedCardinality_store
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlMaxQualifiedCardinality_store
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlMaxQualifiedCardinality_store
	Matching partner owlClassAssertion( U, X, true ) with idx#1<X,true>
		Matching partner owlClassAssertion( Y1, C, true ) with idx#1<C,true>
			If guard
				( owlClassAssertion( Y1, C, true ) != owlClassAssertion( U, X, true ) )
			Then guard
				Matching partner owlClassAssertion( Y2, C, true ) with idx#1<C,true>
					If guard
						( !( Y1 == Y2 ) )
						&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( Y1, C, true ) )
						&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( U, X, true ) )
					Then guard
						Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#2<U,P,Y2>
							Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#2<U,P,Y1>
								If guard
									( owlObjectPropertyAssertion( U, P, Y1 ) != owlObjectPropertyAssertion( U, P, Y2 ) )
								Then guard
									remove constraint owlMaxQualifiedCardinality( X, P, C, 1 )
									remove constraint owlClassAssertion( U, X, true )
									remove constraint owlClassAssertion( Y1, C, true )
									remove constraint owlClassAssertion( Y2, C, true )
									remove constraint owlObjectPropertyAssertion( U, P, Y2 )
									remove constraint owlObjectPropertyAssertion( U, P, Y1 )
									owlSameIndividual( Y1, Y2 )
									goto next goal constraint
								End guard
							End matching partner owlObjectPropertyAssertion( U, P, Y1 )
						End matching partner owlObjectPropertyAssertion( U, P, Y2 )
					End guard
				End matching partner owlClassAssertion( Y2, C, true )
			End guard
		End matching partner owlClassAssertion( Y1, C, true )
	End matching partner owlClassAssertion( U, X, true )
End
// Fail through
Begin owlMaxQualifiedCardinality_store
	Store constraint owlMaxQualifiedCardinality
	Schedule constraint owlMaxQualifiedCardinality with variable index 0
	Schedule constraint owlMaxQualifiedCardinality with variable index 1
	Schedule constraint owlMaxQualifiedCardinality with variable index 2
Goto next goal constraint
// Rule NO_NAME, active constraint owlNamedIndividual( C ), occurrence 0
Begin owlNamedIndividual_0
If empty store owlNamedIndividual( C ) Then goto owlNamedIndividual_1
	Matching partner owlNamedIndividual( C ) with idx#0<C>
		If guard
			( owlNamedIndividual( C ) != owlNamedIndividual( C ) )
		Then guard
			remove constraint owlNamedIndividual( C )
			true
			goto next goal constraint
		End guard
	End matching partner owlNamedIndividual( C )
End
// Rule NO_NAME, active constraint owlNamedIndividual( X ), occurrence 1
Begin owlNamedIndividual_1
If empty store owlComplementOf( A, NOTA ) Then goto owlNamedIndividual_2
	Matching partner owlComplementOf( A, NOTA )
		If history <owlNamedIndividual( X ),owlComplementOf( A, NOTA )> Then
			store constraint owlNamedIndividual( X )
			owlClassAssertion( X, NOTA, false )
			If not alived owlNamedIndividual( X ) Then goto next goal constraint
			goto next matching of owlComplementOf( A, NOTA )
		End history
	End matching partner owlComplementOf( A, NOTA )
End
// Rule NO_NAME, active constraint owlNamedIndividual( X ), occurrence 2
Begin owlNamedIndividual_2
If empty store owlAllValuesFrom( C, P, Y ) Then goto owlNamedIndividual_store
	Matching partner owlAllValuesFrom( C, P, Y )
		If history <owlNamedIndividual( X ),owlAllValuesFrom( C, P, Y )> Then
			store constraint owlNamedIndividual( X )
			owlClassAssertion( X, C, false )
			If not alived owlNamedIndividual( X ) Then goto next goal constraint
			goto next matching of owlAllValuesFrom( C, P, Y )
		End history
	End matching partner owlAllValuesFrom( C, P, Y )
End
// Fail through
Begin owlNamedIndividual_store
	Store constraint owlNamedIndividual
	Schedule constraint owlNamedIndividual with variable index 0
Goto next goal constraint
// Rule NegativeDataAssertion, active constraint owlNegativeDataAssertion( X, P, Y ), occurrence 0
Begin owlNegativeDataAssertion_0
If empty store owlDataPropertyAssertion( X, P, Y ) Then goto owlNegativeDataAssertion_store
	Matching partner owlDataPropertyAssertion( X, P, Y ) with idx#4<X,P,Y>
		remove constraint owlNegativeDataAssertion( X, P, Y )
		remove constraint owlDataPropertyAssertion( X, P, Y )
		failure
		goto next goal constraint
	End matching partner owlDataPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlNegativeDataAssertion_store
	Store constraint owlNegativeDataAssertion
Goto next goal constraint
// Rule NO_NAME, active constraint owlNegativeObjectAssertion( X, P, Y ), occurrence 0
Begin owlNegativeObjectAssertion_0
If empty store owlNegativeObjectAssertion( X, P, Y ) Then goto owlNegativeObjectAssertion_1
	Matching partner owlNegativeObjectAssertion( X, P, Y ) with idx#0<X,P,Y>
		If guard
			( owlNegativeObjectAssertion( X, P, Y ) != owlNegativeObjectAssertion( X, P, Y ) )
		Then guard
			remove constraint owlNegativeObjectAssertion( X, P, Y )
			true
			goto next goal constraint
		End guard
	End matching partner owlNegativeObjectAssertion( X, P, Y )
End
// Rule NegativeObjectAssertion, active constraint owlNegativeObjectAssertion( X, P, Y ), occurrence 1
Begin owlNegativeObjectAssertion_1
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlNegativeObjectAssertion_store
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#2<X,P,Y>
		remove constraint owlNegativeObjectAssertion( X, P, Y )
		remove constraint owlObjectPropertyAssertion( X, P, Y )
		failure
		goto next goal constraint
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlNegativeObjectAssertion_store
	Store constraint owlNegativeObjectAssertion
	Schedule constraint owlNegativeObjectAssertion with variable index 0
	Schedule constraint owlNegativeObjectAssertion with variable index 1
	Schedule constraint owlNegativeObjectAssertion with variable index 2
Goto next goal constraint
// Rule NO_NAME, active constraint owlObjectProperty( P ), occurrence 0
Begin owlObjectProperty_0
If empty store owlObjectProperty( P ) Then goto owlObjectProperty_1
	Matching partner owlObjectProperty( P ) with idx#0<P>
		If guard
			( owlObjectProperty( P ) != owlObjectProperty( P ) )
		Then guard
			remove constraint owlObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlObjectProperty( P )
End
// Rule NO_NAME, active constraint owlObjectProperty( P ), occurrence 1
Begin owlObjectProperty_1
	If history <owlObjectProperty( P )> Then
		store constraint owlObjectProperty( P )
		owlObjectSubPropertyOf( P, P )
		owlEquivalentObjectProperty( P, P )
		If not alived owlObjectProperty( P ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlObjectProperty( P ), occurrence 2
Begin owlObjectProperty_2
If empty store owlClassAssertion( U, C, true ) Then goto owlObjectProperty_store
If empty store owlHasValueObject( C, P, Y ) Then goto owlObjectProperty_store
	Matching partner owlClassAssertion( U, C, true ) with idx#2<true>
		Matching partner owlHasValueObject( C, P, Y ) with idx#1<C,P>
			If history <owlObjectProperty( P ),owlClassAssertion( U, C, true ),owlHasValueObject( C, P, Y )> Then
				store constraint owlObjectProperty( P )
				owlObjectPropertyAssertion( U, P, Y )
				If not alived owlObjectProperty( P ) Then goto next goal constraint
				If not alived owlClassAssertion( U, C, true ) Then goto next matching of owlClassAssertion( U, C, true )
				goto next matching of owlHasValueObject( C, P, Y )
			End history
		End matching partner owlHasValueObject( C, P, Y )
	End matching partner owlClassAssertion( U, C, true )
End
// Fail through
Begin owlObjectProperty_store
	Store constraint owlObjectProperty
	Schedule constraint owlObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 0
Begin owlObjectPropertyAssertion_0
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlObjectPropertyAssertion_1
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#2<X,P,Y>
		If guard
			( owlObjectPropertyAssertion( X, P, Y ) != owlObjectPropertyAssertion( X, P, Y ) )
		Then guard
			remove constraint owlObjectPropertyAssertion( X, P, Y )
			true
			goto next goal constraint
		End guard
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Rule NegativeObjectAssertion, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 1
Begin owlObjectPropertyAssertion_1
If empty store owlNegativeObjectAssertion( X, P, Y ) Then goto owlObjectPropertyAssertion_2
	Matching partner owlNegativeObjectAssertion( X, P, Y ) with idx#0<X,P,Y>
		remove constraint owlObjectPropertyAssertion( X, P, Y )
		remove constraint owlNegativeObjectAssertion( X, P, Y )
		failure
		goto next goal constraint
	End matching partner owlNegativeObjectAssertion( X, P, Y )
End
// Rule DisjointProperty, active constraint owlObjectPropertyAssertion( X, P1, Y ), occurrence 2
Begin owlObjectPropertyAssertion_2
If empty store owlObjectPropertyAssertion( X, P2, Y ) Then goto owlObjectPropertyAssertion_3
If empty store owlDisjointObjectProperty( L ) Then goto owlObjectPropertyAssertion_3
	Matching partner owlObjectPropertyAssertion( X, P2, Y ) with idx#3<X,Y>
		If guard
			( owlObjectPropertyAssertion( X, P2, Y ) != owlObjectPropertyAssertion( X, P1, Y ) )
		Then guard
			Matching partner owlDisjointObjectProperty( L )
				If guard
					contains( P1, L )
					&& contains( P2, L )
				Then guard
					remove constraint owlObjectPropertyAssertion( X, P1, Y )
					remove constraint owlObjectPropertyAssertion( X, P2, Y )
					remove constraint owlDisjointObjectProperty( L )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDisjointObjectProperty( L )
		End guard
	End matching partner owlObjectPropertyAssertion( X, P2, Y )
End
// Rule DisjointProperty, active constraint owlObjectPropertyAssertion( X, P2, Y ), occurrence 3
Begin owlObjectPropertyAssertion_3
If empty store owlObjectPropertyAssertion( X, P1, Y ) Then goto owlObjectPropertyAssertion_4
If empty store owlDisjointObjectProperty( L ) Then goto owlObjectPropertyAssertion_4
	Matching partner owlObjectPropertyAssertion( X, P1, Y ) with idx#3<X,Y>
		If guard
			( owlObjectPropertyAssertion( X, P1, Y ) != owlObjectPropertyAssertion( X, P2, Y ) )
		Then guard
			Matching partner owlDisjointObjectProperty( L )
				If guard
					contains( P1, L )
					&& contains( P2, L )
				Then guard
					remove constraint owlObjectPropertyAssertion( X, P2, Y )
					remove constraint owlObjectPropertyAssertion( X, P1, Y )
					remove constraint owlDisjointObjectProperty( L )
					failure
					goto next goal constraint
				End guard
			End matching partner owlDisjointObjectProperty( L )
		End guard
	End matching partner owlObjectPropertyAssertion( X, P1, Y )
End
// Rule irreflexiveProperty, active constraint owlObjectPropertyAssertion( X, P, X ), occurrence 4
Begin owlObjectPropertyAssertion_4
If empty store owlIrreflexiveObjectProperty( P ) Then goto owlObjectPropertyAssertion_5
	Matching partner owlIrreflexiveObjectProperty( P ) with idx#0<P>
		remove constraint owlObjectPropertyAssertion( X, P, X )
		remove constraint owlIrreflexiveObjectProperty( P )
		failure
		goto next goal constraint
	End matching partner owlIrreflexiveObjectProperty( P )
End
// Rule objectPropertydomain, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 5
Begin owlObjectPropertyAssertion_5
If empty store owlObjectPropertyDomain( P, DP ) Then goto owlObjectPropertyAssertion_6
	Matching partner owlObjectPropertyDomain( P, DP ) with idx#0<P>
		If history <owlObjectPropertyAssertion( X, P, Y ),owlObjectPropertyDomain( P, DP )> Then
			store constraint owlObjectPropertyAssertion( X, P, Y )
			owlClassAssertion( X, DP, true )
			If not alived owlObjectPropertyAssertion( X, P, Y ) Then goto next goal constraint
			goto next matching of owlObjectPropertyDomain( P, DP )
		End history
	End matching partner owlObjectPropertyDomain( P, DP )
End
// Rule objectPropertyCoDomain, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 6
Begin owlObjectPropertyAssertion_6
If empty store owlObjectPropertyRange( P, DP ) Then goto owlObjectPropertyAssertion_7
	Matching partner owlObjectPropertyRange( P, DP ) with idx#0<P>
		If history <owlObjectPropertyAssertion( X, P, Y ),owlObjectPropertyRange( P, DP )> Then
			store constraint owlObjectPropertyAssertion( X, P, Y )
			owlClassAssertion( Y, DP, true )
			If not alived owlObjectPropertyAssertion( X, P, Y ) Then goto next goal constraint
			goto next matching of owlObjectPropertyRange( P, DP )
		End history
	End matching partner owlObjectPropertyRange( P, DP )
End
// Rule inverseProperty, active constraint owlObjectPropertyAssertion( X, P1, Y ), occurrence 7
Begin owlObjectPropertyAssertion_7
If empty store owlInverseObjectProperty( P1, P2 ) Then goto owlObjectPropertyAssertion_8
	Matching partner owlInverseObjectProperty( P1, P2 ) with idx#1<P1>
		If history <owlObjectPropertyAssertion( X, P1, Y ),owlInverseObjectProperty( P1, P2 )> Then
			store constraint owlObjectPropertyAssertion( X, P1, Y )
			owlObjectPropertyAssertion( Y, P2, X )
			If not alived owlObjectPropertyAssertion( X, P1, Y ) Then goto next goal constraint
			goto next matching of owlInverseObjectProperty( P1, P2 )
		End history
	End matching partner owlInverseObjectProperty( P1, P2 )
End
// Rule symmetricProperty, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 8
Begin owlObjectPropertyAssertion_8
If empty store owlSymmetricObjectProperty( P ) Then goto owlObjectPropertyAssertion_9
	Matching partner owlSymmetricObjectProperty( P ) with idx#0<P>
		If history <owlObjectPropertyAssertion( X, P, Y ),owlSymmetricObjectProperty( P )> Then
			store constraint owlObjectPropertyAssertion( X, P, Y )
			owlObjectPropertyAssertion( Y, P, X )
			If not alived owlObjectPropertyAssertion( X, P, Y ) Then goto next goal constraint
			goto next matching of owlSymmetricObjectProperty( P )
		End history
	End matching partner owlSymmetricObjectProperty( P )
End
// Rule AsymmetricProperty1, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 9
Begin owlObjectPropertyAssertion_9
If empty store owlAsymmetricObjectProperty( P ) Then goto owlObjectPropertyAssertion_10
	Matching partner owlAsymmetricObjectProperty( P ) with idx#0<P>
		If history <owlObjectPropertyAssertion( X, P, Y ),owlAsymmetricObjectProperty( P )> Then
			store constraint owlObjectPropertyAssertion( X, P, Y )
			owlNegativeObjectAssertion( X, P, Y )
			If not alived owlObjectPropertyAssertion( X, P, Y ) Then goto next goal constraint
			goto next matching of owlAsymmetricObjectProperty( P )
		End history
	End matching partner owlAsymmetricObjectProperty( P )
End
// Rule reflexiveProperty, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 10
Begin owlObjectPropertyAssertion_10
If empty store owlReflexiveObjectProperty( P ) Then goto owlObjectPropertyAssertion_11
	Matching partner owlReflexiveObjectProperty( P ) with idx#0<P>
		If history <owlObjectPropertyAssertion( X, P, Y ),owlReflexiveObjectProperty( P )> Then
			store constraint owlObjectPropertyAssertion( X, P, Y )
			owlObjectPropertyAssertion( X, P, X )
			owlObjectPropertyAssertion( Y, P, Y )
			If not alived owlObjectPropertyAssertion( X, P, Y ) Then goto next goal constraint
			goto next matching of owlReflexiveObjectProperty( P )
		End history
	End matching partner owlReflexiveObjectProperty( P )
End
// Rule ObjectPropertyChain, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 11
Begin owlObjectPropertyAssertion_11
If empty store owlObjectPropertyChain( PC, P, 0, N ) Then goto owlObjectPropertyAssertion_12
	Matching partner owlObjectPropertyChain( PC, P, 0, N ) with idx#1<P,0>
		If history <owlObjectPropertyAssertion( X, P, Y ),owlObjectPropertyChain( PC, P, 0, N )> Then
			store constraint owlObjectPropertyAssertion( X, P, Y )
			constructPropertyChain( PC, 0, X, Y, N )
			If not alived owlObjectPropertyAssertion( X, P, Y ) Then goto next goal constraint
			goto next matching of owlObjectPropertyChain( PC, P, 0, N )
		End history
	End matching partner owlObjectPropertyChain( PC, P, 0, N )
End
// Rule chainStep, active constraint owlObjectPropertyAssertion( Y, P, Z ), occurrence 12
Begin owlObjectPropertyAssertion_12
If empty store constructPropertyChain( PC, I, X, Y, N ) Then goto owlObjectPropertyAssertion_13
If empty store owlObjectPropertyChain( PC, P, J, N ) Then goto owlObjectPropertyAssertion_13
	Matching partner constructPropertyChain( PC, I, X, Y, N ) with idx#0<Y>
		If guard
			( I < N )
		Then guard
			Matching partner owlObjectPropertyChain( PC, P, J, N ) with idx#2<PC,P,N>
				If guard
					equalIncrement( J, I )
				Then guard
					store constraint owlObjectPropertyAssertion( Y, P, Z )
					remove constraint constructPropertyChain( PC, I, X, Y, N )
					constructPropertyChain( PC, ( I + 1 ), X, Z, N )
					If not alived owlObjectPropertyAssertion( Y, P, Z ) Then goto next goal constraint
					goto next matching of constructPropertyChain( PC, I, X, Y, N )
				End guard
			End matching partner owlObjectPropertyChain( PC, P, J, N )
		End guard
	End matching partner constructPropertyChain( PC, I, X, Y, N )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 13
Begin owlObjectPropertyAssertion_13
If empty store owlClassAssertion( V, Y, true ) Then goto owlObjectPropertyAssertion_14
If empty store owlSomeValuesFrom( C, P, Y ) Then goto owlObjectPropertyAssertion_14
	Matching partner owlClassAssertion( V, Y, true ) with idx#0<V,true>
		Matching partner owlSomeValuesFrom( C, P, Y ) with idx#2<P,Y>
			If history <owlObjectPropertyAssertion( U, P, V ),owlClassAssertion( V, Y, true ),owlSomeValuesFrom( C, P, Y )> Then
				store constraint owlObjectPropertyAssertion( U, P, V )
				owlClassAssertion( U, C, true )
				If not alived owlObjectPropertyAssertion( U, P, V ) Then goto next goal constraint
				If not alived owlClassAssertion( V, Y, true ) Then goto next matching of owlClassAssertion( V, Y, true )
				goto next matching of owlSomeValuesFrom( C, P, Y )
			End history
		End matching partner owlSomeValuesFrom( C, P, Y )
	End matching partner owlClassAssertion( V, Y, true )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 14
Begin owlObjectPropertyAssertion_14
If empty store logicalName( emptyString, V ) Then goto owlObjectPropertyAssertion_15
If empty store owlClassAssertion( V, Y, true ) Then goto owlObjectPropertyAssertion_15
If empty store owlClassAssertion( W, Y, true ) Then goto owlObjectPropertyAssertion_15
If empty store owlObjectPropertyAssertion( U, P, W ) Then goto owlObjectPropertyAssertion_15
If empty store logicalName( URI, W ) Then goto owlObjectPropertyAssertion_15
	Matching partner logicalName( emptyString, V ) with idx#1<emptyString,V>
		Matching partner owlClassAssertion( V, Y, true ) with idx#0<V,true>
			Matching partner owlClassAssertion( W, Y, true ) with idx#1<Y,true>
				If guard
					( owlClassAssertion( W, Y, true ) != owlClassAssertion( V, Y, true ) )
				Then guard
					Matching partner owlObjectPropertyAssertion( U, P, W ) with idx#2<U,P,W>
						If guard
							( owlObjectPropertyAssertion( U, P, W ) != owlObjectPropertyAssertion( U, P, V ) )
						Then guard
							Matching partner logicalName( URI, W ) with idx#0<W>
								If guard
									( !( URI == emptyString ) )
									&& ( logicalName( URI, W ) != logicalName( emptyString, V ) )
								Then guard
									remove constraint owlObjectPropertyAssertion( U, P, V )
									remove constraint logicalName( emptyString, V )
									remove constraint owlClassAssertion( V, Y, true )
									success
									goto next goal constraint
								End guard
							End matching partner logicalName( URI, W )
						End guard
					End matching partner owlObjectPropertyAssertion( U, P, W )
				End guard
			End matching partner owlClassAssertion( W, Y, true )
		End matching partner owlClassAssertion( V, Y, true )
	End matching partner logicalName( emptyString, V )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, W ), occurrence 15
Begin owlObjectPropertyAssertion_15
If empty store owlClassAssertion( W, Y, true ) Then goto owlObjectPropertyAssertion_16
If empty store owlClassAssertion( V, Y, true ) Then goto owlObjectPropertyAssertion_16
If empty store logicalName( emptyString, V ) Then goto owlObjectPropertyAssertion_16
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlObjectPropertyAssertion_16
If empty store logicalName( URI, W ) Then goto owlObjectPropertyAssertion_16
	Matching partner owlClassAssertion( W, Y, true ) with idx#0<W,true>
		Matching partner owlClassAssertion( V, Y, true ) with idx#1<Y,true>
			If guard
				( owlClassAssertion( V, Y, true ) != owlClassAssertion( W, Y, true ) )
			Then guard
				Matching partner logicalName( emptyString, V ) with idx#1<emptyString,V>
					Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#2<U,P,V>
						If guard
							( owlObjectPropertyAssertion( U, P, V ) != owlObjectPropertyAssertion( U, P, W ) )
						Then guard
							Matching partner logicalName( URI, W ) with idx#0<W>
								If guard
									( !( URI == emptyString ) )
									&& ( logicalName( URI, W ) != logicalName( emptyString, V ) )
								Then guard
									store constraint owlObjectPropertyAssertion( U, P, W )
									remove constraint owlClassAssertion( V, Y, true )
									remove constraint logicalName( emptyString, V )
									remove constraint owlObjectPropertyAssertion( U, P, V )
									success
									If not alived owlObjectPropertyAssertion( U, P, W ) Then goto next goal constraint
									If not alived owlClassAssertion( W, Y, true ) Then goto next matching of owlClassAssertion( W, Y, true )
									goto next matching of owlClassAssertion( V, Y, true )
								End guard
							End matching partner logicalName( URI, W )
						End guard
					End matching partner owlObjectPropertyAssertion( U, P, V )
				End matching partner logicalName( emptyString, V )
			End guard
		End matching partner owlClassAssertion( V, Y, true )
	End matching partner owlClassAssertion( W, Y, true )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 16
Begin owlObjectPropertyAssertion_16
If empty store owlClassAssertion( U, C, true ) Then goto owlObjectPropertyAssertion_17
If empty store owlAllValuesFrom( C, P, Y ) Then goto owlObjectPropertyAssertion_17
	Matching partner owlClassAssertion( U, C, true ) with idx#0<U,true>
		Matching partner owlAllValuesFrom( C, P, Y ) with idx#0<C,P>
			If history <owlObjectPropertyAssertion( U, P, V ),owlClassAssertion( U, C, true ),owlAllValuesFrom( C, P, Y )> Then
				store constraint owlObjectPropertyAssertion( U, P, V )
				owlClassAssertion( V, Y, true )
				If not alived owlObjectPropertyAssertion( U, P, V ) Then goto next goal constraint
				If not alived owlClassAssertion( U, C, true ) Then goto next matching of owlClassAssertion( U, C, true )
				goto next matching of owlAllValuesFrom( C, P, Y )
			End history
		End matching partner owlAllValuesFrom( C, P, Y )
	End matching partner owlClassAssertion( U, C, true )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 17
Begin owlObjectPropertyAssertion_17
If empty store owlClassAssertion( U, C, false ) Then goto owlObjectPropertyAssertion_18
If empty store owlAllValuesFrom( C, P, Y ) Then goto owlObjectPropertyAssertion_18
If empty store logicalName( URIV, V ) Then goto owlObjectPropertyAssertion_18
If empty store logicalName( URIY, Y ) Then goto owlObjectPropertyAssertion_18
	Matching partner owlClassAssertion( U, C, false ) with idx#0<U,false>
		Matching partner owlAllValuesFrom( C, P, Y ) with idx#0<C,P>
			Matching partner logicalName( URIV, V ) with idx#0<V>
				Matching partner logicalName( URIY, Y ) with idx#0<Y>
					If guard
						( !checkClassification( ( *this ), URIV, URIY ) )
						&& ( logicalName( URIY, Y ) != logicalName( URIV, V ) )
					Then guard
						store constraint owlObjectPropertyAssertion( U, P, V )
						remove constraint owlClassAssertion( U, C, false )
						success
						If not alived owlObjectPropertyAssertion( U, P, V ) Then goto next goal constraint
						goto next matching of owlClassAssertion( U, C, false )
					End guard
				End matching partner logicalName( URIY, Y )
			End matching partner logicalName( URIV, V )
		End matching partner owlAllValuesFrom( C, P, Y )
	End matching partner owlClassAssertion( U, C, false )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, _ ), occurrence 18
Begin owlObjectPropertyAssertion_18
If empty store owlMaxCardinality( C, P, 0 ) Then goto owlObjectPropertyAssertion_19
If empty store owlClassAssertion( U, C, true ) Then goto owlObjectPropertyAssertion_19
	Matching partner owlMaxCardinality( C, P, 0 ) with idx#1<P,0>
		Matching partner owlClassAssertion( U, C, true ) with idx#3<U,C,true>
			remove constraint owlObjectPropertyAssertion( U, P, _ )
			remove constraint owlMaxCardinality( C, P, 0 )
			remove constraint owlClassAssertion( U, C, true )
			failure
			goto next goal constraint
		End matching partner owlClassAssertion( U, C, true )
	End matching partner owlMaxCardinality( C, P, 0 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y1 ), occurrence 19
Begin owlObjectPropertyAssertion_19
If empty store owlMaxCardinality( C, P, 1 ) Then goto owlObjectPropertyAssertion_20
If empty store owlClassAssertion( U, C, true ) Then goto owlObjectPropertyAssertion_20
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlObjectPropertyAssertion_20
	Matching partner owlMaxCardinality( C, P, 1 ) with idx#1<P,1>
		Matching partner owlClassAssertion( U, C, true ) with idx#3<U,C,true>
			Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#0<U,P>
				If guard
					( !( Y1 == Y2 ) )
					&& ( owlObjectPropertyAssertion( U, P, Y2 ) != owlObjectPropertyAssertion( U, P, Y1 ) )
				Then guard
					remove constraint owlObjectPropertyAssertion( U, P, Y1 )
					remove constraint owlMaxCardinality( C, P, 1 )
					remove constraint owlClassAssertion( U, C, true )
					remove constraint owlObjectPropertyAssertion( U, P, Y2 )
					owlSameIndividual( Y1, Y2 )
					goto next goal constraint
				End guard
			End matching partner owlObjectPropertyAssertion( U, P, Y2 )
		End matching partner owlClassAssertion( U, C, true )
	End matching partner owlMaxCardinality( C, P, 1 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y2 ), occurrence 20
Begin owlObjectPropertyAssertion_20
If empty store owlMaxCardinality( C, P, 1 ) Then goto owlObjectPropertyAssertion_21
If empty store owlClassAssertion( U, C, true ) Then goto owlObjectPropertyAssertion_21
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlObjectPropertyAssertion_21
	Matching partner owlMaxCardinality( C, P, 1 ) with idx#1<P,1>
		Matching partner owlClassAssertion( U, C, true ) with idx#3<U,C,true>
			Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#0<U,P>
				If guard
					( !( Y1 == Y2 ) )
					&& ( owlObjectPropertyAssertion( U, P, Y1 ) != owlObjectPropertyAssertion( U, P, Y2 ) )
				Then guard
					remove constraint owlObjectPropertyAssertion( U, P, Y2 )
					remove constraint owlMaxCardinality( C, P, 1 )
					remove constraint owlClassAssertion( U, C, true )
					remove constraint owlObjectPropertyAssertion( U, P, Y1 )
					owlSameIndividual( Y1, Y2 )
					goto next goal constraint
				End guard
			End matching partner owlObjectPropertyAssertion( U, P, Y1 )
		End matching partner owlClassAssertion( U, C, true )
	End matching partner owlMaxCardinality( C, P, 1 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y ), occurrence 21
Begin owlObjectPropertyAssertion_21
If empty store owlMaxQualifiedCardinality( X, P, C, 0 ) Then goto owlObjectPropertyAssertion_22
If empty store owlClassAssertion( U, X, true ) Then goto owlObjectPropertyAssertion_22
If empty store owlClassAssertion( Y, C, true ) Then goto owlObjectPropertyAssertion_22
	Matching partner owlMaxQualifiedCardinality( X, P, C, 0 ) with idx#2<P,0>
		Matching partner owlClassAssertion( U, X, true ) with idx#3<U,X,true>
			Matching partner owlClassAssertion( Y, C, true ) with idx#3<Y,C,true>
				If guard
					( owlClassAssertion( Y, C, true ) != owlClassAssertion( U, X, true ) )
				Then guard
					remove constraint owlObjectPropertyAssertion( U, P, Y )
					remove constraint owlMaxQualifiedCardinality( X, P, C, 0 )
					remove constraint owlClassAssertion( U, X, true )
					remove constraint owlClassAssertion( Y, C, true )
					failure
					goto next goal constraint
				End guard
			End matching partner owlClassAssertion( Y, C, true )
		End matching partner owlClassAssertion( U, X, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 0 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y1 ), occurrence 22
Begin owlObjectPropertyAssertion_22
If empty store owlMaxQualifiedCardinality( X, P, C, 1 ) Then goto owlObjectPropertyAssertion_23
If empty store owlClassAssertion( U, X, true ) Then goto owlObjectPropertyAssertion_23
If empty store owlClassAssertion( Y1, C, true ) Then goto owlObjectPropertyAssertion_23
If empty store owlClassAssertion( Y2, C, true ) Then goto owlObjectPropertyAssertion_23
If empty store owlObjectPropertyAssertion( U, P, Y2 ) Then goto owlObjectPropertyAssertion_23
	Matching partner owlMaxQualifiedCardinality( X, P, C, 1 ) with idx#2<P,1>
		Matching partner owlClassAssertion( U, X, true ) with idx#3<U,X,true>
			Matching partner owlClassAssertion( Y1, C, true ) with idx#3<Y1,C,true>
				If guard
					( owlClassAssertion( Y1, C, true ) != owlClassAssertion( U, X, true ) )
				Then guard
					Matching partner owlClassAssertion( Y2, C, true ) with idx#1<C,true>
						If guard
							( !( Y1 == Y2 ) )
							&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( Y1, C, true ) )
							&& ( owlClassAssertion( Y2, C, true ) != owlClassAssertion( U, X, true ) )
						Then guard
							Matching partner owlObjectPropertyAssertion( U, P, Y2 ) with idx#2<U,P,Y2>
								If guard
									( owlObjectPropertyAssertion( U, P, Y2 ) != owlObjectPropertyAssertion( U, P, Y1 ) )
								Then guard
									remove constraint owlObjectPropertyAssertion( U, P, Y1 )
									remove constraint owlMaxQualifiedCardinality( X, P, C, 1 )
									remove constraint owlClassAssertion( U, X, true )
									remove constraint owlClassAssertion( Y1, C, true )
									remove constraint owlClassAssertion( Y2, C, true )
									remove constraint owlObjectPropertyAssertion( U, P, Y2 )
									owlSameIndividual( Y1, Y2 )
									goto next goal constraint
								End guard
							End matching partner owlObjectPropertyAssertion( U, P, Y2 )
						End guard
					End matching partner owlClassAssertion( Y2, C, true )
				End guard
			End matching partner owlClassAssertion( Y1, C, true )
		End matching partner owlClassAssertion( U, X, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 1 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y2 ), occurrence 23
Begin owlObjectPropertyAssertion_23
If empty store owlMaxQualifiedCardinality( X, P, C, 1 ) Then goto owlObjectPropertyAssertion_24
If empty store owlClassAssertion( U, X, true ) Then goto owlObjectPropertyAssertion_24
If empty store owlClassAssertion( Y2, C, true ) Then goto owlObjectPropertyAssertion_24
If empty store owlClassAssertion( Y1, C, true ) Then goto owlObjectPropertyAssertion_24
If empty store owlObjectPropertyAssertion( U, P, Y1 ) Then goto owlObjectPropertyAssertion_24
	Matching partner owlMaxQualifiedCardinality( X, P, C, 1 ) with idx#2<P,1>
		Matching partner owlClassAssertion( U, X, true ) with idx#3<U,X,true>
			Matching partner owlClassAssertion( Y2, C, true ) with idx#3<Y2,C,true>
				If guard
					( owlClassAssertion( Y2, C, true ) != owlClassAssertion( U, X, true ) )
				Then guard
					Matching partner owlClassAssertion( Y1, C, true ) with idx#1<C,true>
						If guard
							( !( Y1 == Y2 ) )
							&& ( owlClassAssertion( Y1, C, true ) != owlClassAssertion( Y2, C, true ) )
							&& ( owlClassAssertion( Y1, C, true ) != owlClassAssertion( U, X, true ) )
						Then guard
							Matching partner owlObjectPropertyAssertion( U, P, Y1 ) with idx#2<U,P,Y1>
								If guard
									( owlObjectPropertyAssertion( U, P, Y1 ) != owlObjectPropertyAssertion( U, P, Y2 ) )
								Then guard
									remove constraint owlObjectPropertyAssertion( U, P, Y2 )
									remove constraint owlMaxQualifiedCardinality( X, P, C, 1 )
									remove constraint owlClassAssertion( U, X, true )
									remove constraint owlClassAssertion( Y2, C, true )
									remove constraint owlClassAssertion( Y1, C, true )
									remove constraint owlObjectPropertyAssertion( U, P, Y1 )
									owlSameIndividual( Y1, Y2 )
									goto next goal constraint
								End guard
							End matching partner owlObjectPropertyAssertion( U, P, Y1 )
						End guard
					End matching partner owlClassAssertion( Y1, C, true )
				End guard
			End matching partner owlClassAssertion( Y2, C, true )
		End matching partner owlClassAssertion( U, X, true )
	End matching partner owlMaxQualifiedCardinality( X, P, C, 1 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y ), occurrence 24
Begin owlObjectPropertyAssertion_24
If empty store owlHasValueObject( C, P, Y ) Then goto owlObjectPropertyAssertion_25
	Matching partner owlHasValueObject( C, P, Y ) with idx#2<P,Y>
		If history <owlObjectPropertyAssertion( U, P, Y ),owlHasValueObject( C, P, Y )> Then
			store constraint owlObjectPropertyAssertion( U, P, Y )
			owlClassAssertion( U, C, true )
			If not alived owlObjectPropertyAssertion( U, P, Y ) Then goto next goal constraint
			goto next matching of owlHasValueObject( C, P, Y )
		End history
	End matching partner owlHasValueObject( C, P, Y )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( X, P, V1 ), occurrence 25
Begin owlObjectPropertyAssertion_25
If empty store owlObjectPropertyAssertion( Y, P, V1 ) Then goto owlObjectPropertyAssertion_26
If empty store owlHasKeyLoop( IT, ITEND, X, Y ) Then goto owlObjectPropertyAssertion_26
	Matching partner owlObjectPropertyAssertion( Y, P, V1 ) with idx#5<P,V1>
		If guard
			( owlObjectPropertyAssertion( Y, P, V1 ) != owlObjectPropertyAssertion( X, P, V1 ) )
		Then guard
			Matching partner owlHasKeyLoop( IT, ITEND, X, Y ) with idx#0<X,Y>
				If guard
					( P == ( *( *IT ) ) )
				Then guard
					store constraint owlObjectPropertyAssertion( X, P, V1 )
					remove constraint owlHasKeyLoop( IT, ITEND, X, Y )
					owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )
					If not alived owlObjectPropertyAssertion( X, P, V1 ) Then goto next goal constraint
					If not alived owlObjectPropertyAssertion( Y, P, V1 ) Then goto next matching of owlObjectPropertyAssertion( Y, P, V1 )
					goto next matching of owlHasKeyLoop( IT, ITEND, X, Y )
				End guard
			End matching partner owlHasKeyLoop( IT, ITEND, X, Y )
		End guard
	End matching partner owlObjectPropertyAssertion( Y, P, V1 )
End
// Rule NO_NAME, active constraint owlObjectPropertyAssertion( Y, P, V1 ), occurrence 26
Begin owlObjectPropertyAssertion_26
If empty store owlObjectPropertyAssertion( X, P, V1 ) Then goto owlObjectPropertyAssertion_store
If empty store owlHasKeyLoop( IT, ITEND, X, Y ) Then goto owlObjectPropertyAssertion_store
	Matching partner owlObjectPropertyAssertion( X, P, V1 ) with idx#5<P,V1>
		If guard
			( owlObjectPropertyAssertion( X, P, V1 ) != owlObjectPropertyAssertion( Y, P, V1 ) )
		Then guard
			Matching partner owlHasKeyLoop( IT, ITEND, X, Y ) with idx#0<X,Y>
				If guard
					( P == ( *( *IT ) ) )
				Then guard
					store constraint owlObjectPropertyAssertion( Y, P, V1 )
					remove constraint owlHasKeyLoop( IT, ITEND, X, Y )
					owlHasKeyLoop( ( std :: next )( ( *IT ) ), ITEND, X, Y )
					If not alived owlObjectPropertyAssertion( Y, P, V1 ) Then goto next goal constraint
					If not alived owlObjectPropertyAssertion( X, P, V1 ) Then goto next matching of owlObjectPropertyAssertion( X, P, V1 )
					goto next matching of owlHasKeyLoop( IT, ITEND, X, Y )
				End guard
			End matching partner owlHasKeyLoop( IT, ITEND, X, Y )
		End guard
	End matching partner owlObjectPropertyAssertion( X, P, V1 )
End
// Fail through
Begin owlObjectPropertyAssertion_store
	Store constraint owlObjectPropertyAssertion
	Schedule constraint owlObjectPropertyAssertion with variable index 0
	Schedule constraint owlObjectPropertyAssertion with variable index 1
	Schedule constraint owlObjectPropertyAssertion with variable index 2
Goto next goal constraint
// Rule ObjectPropertyChain, active constraint owlObjectPropertyChain( PC, P, 0, N ), occurrence 0
Begin owlObjectPropertyChain_0
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlObjectPropertyChain_1
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#4<P>
		If history <owlObjectPropertyChain( PC, P, 0, N ),owlObjectPropertyAssertion( X, P, Y )> Then
			store constraint owlObjectPropertyChain( PC, P, 0, N )
			constructPropertyChain( PC, 0, X, Y, N )
			If not alived owlObjectPropertyChain( PC, P, 0, N ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Rule chainStep, active constraint owlObjectPropertyChain( PC, P, J, N ), occurrence 1
Begin owlObjectPropertyChain_1
If empty store constructPropertyChain( PC, I, X, Y, N ) Then goto owlObjectPropertyChain_store
If empty store owlObjectPropertyAssertion( Y, P, Z ) Then goto owlObjectPropertyChain_store
	Matching partner constructPropertyChain( PC, I, X, Y, N ) with idx#1<PC,N>
		If guard
			( I < N )
			&& equalIncrement( J, I )
		Then guard
			Matching partner owlObjectPropertyAssertion( Y, P, Z ) with idx#0<Y,P>
				store constraint owlObjectPropertyChain( PC, P, J, N )
				remove constraint constructPropertyChain( PC, I, X, Y, N )
				constructPropertyChain( PC, ( I + 1 ), X, Z, N )
				If not alived owlObjectPropertyChain( PC, P, J, N ) Then goto next goal constraint
				goto next matching of constructPropertyChain( PC, I, X, Y, N )
			End matching partner owlObjectPropertyAssertion( Y, P, Z )
		End guard
	End matching partner constructPropertyChain( PC, I, X, Y, N )
End
// Fail through
Begin owlObjectPropertyChain_store
	Store constraint owlObjectPropertyChain
	Schedule constraint owlObjectPropertyChain with variable index 0
	Schedule constraint owlObjectPropertyChain with variable index 1
	Schedule constraint owlObjectPropertyChain with variable index 2
	Schedule constraint owlObjectPropertyChain with variable index 3
Goto next goal constraint
// Rule NO_NAME, active constraint owlObjectPropertyDomain( P, C ), occurrence 0
Begin owlObjectPropertyDomain_0
If empty store owlObjectPropertyDomain( P, C ) Then goto owlObjectPropertyDomain_1
	Matching partner owlObjectPropertyDomain( P, C ) with idx#1<P,C>
		If guard
			( owlObjectPropertyDomain( P, C ) != owlObjectPropertyDomain( P, C ) )
		Then guard
			remove constraint owlObjectPropertyDomain( P, C )
			true
			goto next goal constraint
		End guard
	End matching partner owlObjectPropertyDomain( P, C )
End
// Rule objectPropertydomain, active constraint owlObjectPropertyDomain( P, DP ), occurrence 1
Begin owlObjectPropertyDomain_1
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlObjectPropertyDomain_store
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#4<P>
		If history <owlObjectPropertyDomain( P, DP ),owlObjectPropertyAssertion( X, P, Y )> Then
			store constraint owlObjectPropertyDomain( P, DP )
			owlClassAssertion( X, DP, true )
			If not alived owlObjectPropertyDomain( P, DP ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlObjectPropertyDomain_store
	Store constraint owlObjectPropertyDomain
	Schedule constraint owlObjectPropertyDomain with variable index 0
	Schedule constraint owlObjectPropertyDomain with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlObjectPropertyRange( P, C ), occurrence 0
Begin owlObjectPropertyRange_0
If empty store owlObjectPropertyRange( P, C ) Then goto owlObjectPropertyRange_1
	Matching partner owlObjectPropertyRange( P, C ) with idx#1<P,C>
		If guard
			( owlObjectPropertyRange( P, C ) != owlObjectPropertyRange( P, C ) )
		Then guard
			remove constraint owlObjectPropertyRange( P, C )
			true
			goto next goal constraint
		End guard
	End matching partner owlObjectPropertyRange( P, C )
End
// Rule objectPropertyCoDomain, active constraint owlObjectPropertyRange( P, DP ), occurrence 1
Begin owlObjectPropertyRange_1
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlObjectPropertyRange_store
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#4<P>
		If history <owlObjectPropertyRange( P, DP ),owlObjectPropertyAssertion( X, P, Y )> Then
			store constraint owlObjectPropertyRange( P, DP )
			owlClassAssertion( Y, DP, true )
			If not alived owlObjectPropertyRange( P, DP ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlObjectPropertyRange_store
	Store constraint owlObjectPropertyRange
	Schedule constraint owlObjectPropertyRange with variable index 0
	Schedule constraint owlObjectPropertyRange with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlObjectSubPropertyOf( A, B ), occurrence 0
Begin owlObjectSubPropertyOf_0
If empty store owlObjectSubPropertyOf( A, B ) Then goto owlObjectSubPropertyOf_store
	Matching partner owlObjectSubPropertyOf( A, B ) with idx#0<A,B>
		If guard
			( owlObjectSubPropertyOf( A, B ) != owlObjectSubPropertyOf( A, B ) )
		Then guard
			remove constraint owlObjectSubPropertyOf( A, B )
			true
			goto next goal constraint
		End guard
	End matching partner owlObjectSubPropertyOf( A, B )
End
// Fail through
Begin owlObjectSubPropertyOf_store
	Store constraint owlObjectSubPropertyOf
	Schedule constraint owlObjectSubPropertyOf with variable index 0
	Schedule constraint owlObjectSubPropertyOf with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlOneOf( C, S ), occurrence 0
Begin owlOneOf_0
	If history <owlOneOf( C, S )> Then
		store constraint owlOneOf( C, S )
		owlOneOfLoop( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) )
		If not alived owlOneOf( C, S ) Then goto next goal constraint
	End history
End
// Fail through
Begin owlOneOf_store
	Store constraint owlOneOf
	Schedule constraint owlOneOf with variable index 0
	Schedule constraint owlOneOf with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlOneOfLoop( C, ITEND, ITEND ), occurrence 0
Begin owlOneOfLoop_0
	remove constraint owlOneOfLoop( C, ITEND, ITEND )
	success
	goto next goal constraint
End
// Rule NO_NAME, active constraint owlOneOfLoop( C, IT, ITEND ), occurrence 1
Begin owlOneOfLoop_1
	remove constraint owlOneOfLoop( C, IT, ITEND )
	owlClassAssertion( ( *( *IT ) ), C, true )
	owlOneOfLoop( C, ( std :: next )( ( *IT ) ), ITEND )
	goto next goal constraint
End
// Fail through
Begin owlOneOfLoop_store
	Store constraint owlOneOfLoop
Goto next goal constraint
// Rule NO_NAME, active constraint owlReflexiveObjectProperty( P ), occurrence 0
Begin owlReflexiveObjectProperty_0
If empty store owlReflexiveObjectProperty( P ) Then goto owlReflexiveObjectProperty_1
	Matching partner owlReflexiveObjectProperty( P ) with idx#0<P>
		If guard
			( owlReflexiveObjectProperty( P ) != owlReflexiveObjectProperty( P ) )
		Then guard
			remove constraint owlReflexiveObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlReflexiveObjectProperty( P )
End
// Rule reflexiveProperty, active constraint owlReflexiveObjectProperty( P ), occurrence 1
Begin owlReflexiveObjectProperty_1
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlReflexiveObjectProperty_store
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#4<P>
		If history <owlReflexiveObjectProperty( P ),owlObjectPropertyAssertion( X, P, Y )> Then
			store constraint owlReflexiveObjectProperty( P )
			owlObjectPropertyAssertion( X, P, X )
			owlObjectPropertyAssertion( Y, P, Y )
			If not alived owlReflexiveObjectProperty( P ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlReflexiveObjectProperty_store
	Store constraint owlReflexiveObjectProperty
	Schedule constraint owlReflexiveObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlSameIndividual( X, Y ), occurrence 0
Begin owlSameIndividual_0
If empty store owlSameIndividual( X, Y ) Then goto owlSameIndividual_1
	Matching partner owlSameIndividual( X, Y ) with idx#0<X,Y>
		If guard
			( owlSameIndividual( X, Y ) != owlSameIndividual( X, Y ) )
		Then guard
			remove constraint owlSameIndividual( X, Y )
			true
			goto next goal constraint
		End guard
	End matching partner owlSameIndividual( X, Y )
End
// Rule sameIndividual, active constraint owlSameIndividual( X, Y ), occurrence 1
Begin owlSameIndividual_1
	If guard
		( !( X == Y ) )
	Then guard
		If history <owlSameIndividual( X, Y )> Then
			store constraint owlSameIndividual( X, Y )
			X %= Y
			If not alived owlSameIndividual( X, Y ) Then goto next goal constraint
		End history
	End guard
End
// Rule DifferentIndividual, active constraint owlSameIndividual( X, Y ), occurrence 2
Begin owlSameIndividual_2
If empty store owlDifferentIndividual( X, Y ) Then goto owlSameIndividual_store
	Matching partner owlDifferentIndividual( X, Y ) with idx#0<X,Y>
		remove constraint owlSameIndividual( X, Y )
		remove constraint owlDifferentIndividual( X, Y )
		failure
		goto next goal constraint
	End matching partner owlDifferentIndividual( X, Y )
End
// Fail through
Begin owlSameIndividual_store
	Store constraint owlSameIndividual
	Schedule constraint owlSameIndividual with variable index 0
	Schedule constraint owlSameIndividual with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlSomeValuesFrom( C, P, Y ), occurrence 0
Begin owlSomeValuesFrom_0
If empty store owlClassAssertion( V, Y, true ) Then goto owlSomeValuesFrom_1
If empty store owlObjectPropertyAssertion( U, P, V ) Then goto owlSomeValuesFrom_1
	Matching partner owlClassAssertion( V, Y, true ) with idx#1<Y,true>
		Matching partner owlObjectPropertyAssertion( U, P, V ) with idx#5<P,V>
			If history <owlSomeValuesFrom( C, P, Y ),owlClassAssertion( V, Y, true ),owlObjectPropertyAssertion( U, P, V )> Then
				store constraint owlSomeValuesFrom( C, P, Y )
				owlClassAssertion( U, C, true )
				If not alived owlSomeValuesFrom( C, P, Y ) Then goto next goal constraint
				If not alived owlClassAssertion( V, Y, true ) Then goto next matching of owlClassAssertion( V, Y, true )
				goto next matching of owlObjectPropertyAssertion( U, P, V )
			End history
		End matching partner owlObjectPropertyAssertion( U, P, V )
	End matching partner owlClassAssertion( V, Y, true )
End
// Rule NO_NAME, active constraint owlSomeValuesFrom( C, P, Y ), occurrence 1
Begin owlSomeValuesFrom_1
If empty store owlClassAssertion( U, C, true ) Then goto owlSomeValuesFrom_store
	Matching partner owlClassAssertion( U, C, true ) with idx#1<C,true>
		If history <owlSomeValuesFrom( C, P, Y ),owlClassAssertion( U, C, true )> Then
			store constraint owlSomeValuesFrom( C, P, Y )
			owlObjectPropertyAssertion( U, P, V )
			logicalName( emptyString, V )
			owlClassAssertion( V, Y, true )
			If not alived owlSomeValuesFrom( C, P, Y ) Then goto next goal constraint
			goto next matching of owlClassAssertion( U, C, true )
		End history
	End matching partner owlClassAssertion( U, C, true )
End
// Fail through
Begin owlSomeValuesFrom_store
	Store constraint owlSomeValuesFrom
	Schedule constraint owlSomeValuesFrom with variable index 0
	Schedule constraint owlSomeValuesFrom with variable index 1
	Schedule constraint owlSomeValuesFrom with variable index 2
Goto next goal constraint
// Rule NO_NAME, active constraint owlSubclassOf( A, B ), occurrence 0
Begin owlSubclassOf_0
If empty store owlSubclassOf( A, B ) Then goto owlSubclassOf_1
	Matching partner owlSubclassOf( A, B ) with idx#0<A,B>
		If guard
			( owlSubclassOf( A, B ) != owlSubclassOf( A, B ) )
		Then guard
			remove constraint owlSubclassOf( A, B )
			true
			goto next goal constraint
		End guard
	End matching partner owlSubclassOf( A, B )
End
// Rule NO_NAME, active constraint owlSubclassOf( C1, C2 ), occurrence 1
Begin owlSubclassOf_1
	If history <owlSubclassOf( C1, C2 )> Then
		store constraint owlSubclassOf( C1, C2 )
		owlClass( C1 )
		owlClass( C2 )
		If not alived owlSubclassOf( C1, C2 ) Then goto next goal constraint
	End history
End
// Fail through
Begin owlSubclassOf_store
	Store constraint owlSubclassOf
	Schedule constraint owlSubclassOf with variable index 0
	Schedule constraint owlSubclassOf with variable index 1
Goto next goal constraint
// Rule NO_NAME, active constraint owlSymmetricObjectProperty( P ), occurrence 0
Begin owlSymmetricObjectProperty_0
If empty store owlSymmetricObjectProperty( P ) Then goto owlSymmetricObjectProperty_1
	Matching partner owlSymmetricObjectProperty( P ) with idx#0<P>
		If guard
			( owlSymmetricObjectProperty( P ) != owlSymmetricObjectProperty( P ) )
		Then guard
			remove constraint owlSymmetricObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlSymmetricObjectProperty( P )
End
// Rule symmetricProperty, active constraint owlSymmetricObjectProperty( P ), occurrence 1
Begin owlSymmetricObjectProperty_1
If empty store owlObjectPropertyAssertion( X, P, Y ) Then goto owlSymmetricObjectProperty_store
	Matching partner owlObjectPropertyAssertion( X, P, Y ) with idx#4<P>
		If history <owlSymmetricObjectProperty( P ),owlObjectPropertyAssertion( X, P, Y )> Then
			store constraint owlSymmetricObjectProperty( P )
			owlObjectPropertyAssertion( Y, P, X )
			If not alived owlSymmetricObjectProperty( P ) Then goto next goal constraint
			goto next matching of owlObjectPropertyAssertion( X, P, Y )
		End history
	End matching partner owlObjectPropertyAssertion( X, P, Y )
End
// Fail through
Begin owlSymmetricObjectProperty_store
	Store constraint owlSymmetricObjectProperty
	Schedule constraint owlSymmetricObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlTransitiveObjectProperty( P ), occurrence 0
Begin owlTransitiveObjectProperty_0
If empty store owlTransitiveObjectProperty( P ) Then goto owlTransitiveObjectProperty_store
	Matching partner owlTransitiveObjectProperty( P ) with idx#0<P>
		If guard
			( owlTransitiveObjectProperty( P ) != owlTransitiveObjectProperty( P ) )
		Then guard
			remove constraint owlTransitiveObjectProperty( P )
			true
			goto next goal constraint
		End guard
	End matching partner owlTransitiveObjectProperty( P )
End
// Fail through
Begin owlTransitiveObjectProperty_store
	Store constraint owlTransitiveObjectProperty
	Schedule constraint owlTransitiveObjectProperty with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint owlUnionClass( C, V ), occurrence 0
Begin owlUnionClass_0
If empty store owlClassAssertion( X, V, true ) Then goto owlUnionClass_store
	Matching partner owlClassAssertion( X, V, true ) with idx#1<V,true>
		remove constraint owlUnionClass( C, V )
		owlClassAssertion( X, C, true )
		goto next goal constraint
	End matching partner owlClassAssertion( X, V, true )
End
// Fail through
Begin owlUnionClass_store
	Store constraint owlUnionClass
Goto next goal constraint
// Rule NO_NAME, active constraint owlUnionOf( C, ITEND, ITEND ), occurrence 0
Begin owlUnionOf_0
	remove constraint owlUnionOf( C, ITEND, ITEND )
	success
	goto next goal constraint
End
// Rule NO_NAME, active constraint owlUnionOf( C, IT, ITEND ), occurrence 1
Begin owlUnionOf_1
	remove constraint owlUnionOf( C, IT, ITEND )
	owlUnionClass( C, ( *( *IT ) ) )
	owlUnionOf( C, ( std :: next )( ( *IT ) ), ITEND )
	goto next goal constraint
End
// Fail through
Begin owlUnionOf_store
	Store constraint owlUnionOf
Goto next goal constraint
// Rule NO_NAME, active constraint owlUnionOf1( C, S ), occurrence 0
Begin owlUnionOf1_0
	If history <owlUnionOf1( C, S )> Then
		store constraint owlUnionOf1( C, S )
		owlUnionOf( C, ( ( *S ) . begin )(  ), ( ( *S ) . end )(  ) )
		If not alived owlUnionOf1( C, S ) Then goto next goal constraint
	End history
End
// Rule NO_NAME, active constraint owlUnionOf1( C1, S ), occurrence 1
Begin owlUnionOf1_1
If empty store owlUnionOf1( C2, S ) Then goto owlUnionOf1_2
	Matching partner owlUnionOf1( C2, S ) with idx#0<S>
		If guard
			( owlUnionOf1( C2, S ) != owlUnionOf1( C1, S ) )
		Then guard
			If history <owlUnionOf1( C1, S ),owlUnionOf1( C2, S )> Then
				store constraint owlUnionOf1( C1, S )
				owlEquivalentClass( C1, C2 )
				If not alived owlUnionOf1( C1, S ) Then goto next goal constraint
				goto next matching of owlUnionOf1( C2, S )
			End history
		End guard
	End matching partner owlUnionOf1( C2, S )
End
// Rule NO_NAME, active constraint owlUnionOf1( C2, S ), occurrence 2
Begin owlUnionOf1_2
If empty store owlUnionOf1( C1, S ) Then goto owlUnionOf1_store
	Matching partner owlUnionOf1( C1, S ) with idx#0<S>
		If guard
			( owlUnionOf1( C1, S ) != owlUnionOf1( C2, S ) )
		Then guard
			If history <owlUnionOf1( C2, S ),owlUnionOf1( C1, S )> Then
				store constraint owlUnionOf1( C2, S )
				owlEquivalentClass( C1, C2 )
				If not alived owlUnionOf1( C2, S ) Then goto next goal constraint
				goto next matching of owlUnionOf1( C1, S )
			End history
		End guard
	End matching partner owlUnionOf1( C1, S )
End
// Fail through
Begin owlUnionOf1_store
	Store constraint owlUnionOf1
Goto next goal constraint
// Rule NO_NAME, active constraint queryClassification( X ), occurrence 0
Begin queryClassification_0
If empty store owlClassAssertion( X, C, true ) Then goto queryClassification_1
If empty store logicalName( URIC, C ) Then goto queryClassification_1
	Matching partner owlClassAssertion( X, C, true ) with idx#0<X,true>
		Matching partner logicalName( URIC, C ) with idx#0<C>
			If history <queryClassification( X ),owlClassAssertion( X, C, true ),logicalName( URIC, C )> Then
				store constraint queryClassification( X )
				res( URIC )
				afficher( "passage" )
				If not alived queryClassification( X ) Then goto next goal constraint
				If not alived owlClassAssertion( X, C, true ) Then goto next matching of owlClassAssertion( X, C, true )
				goto next matching of logicalName( URIC, C )
			End history
		End matching partner logicalName( URIC, C )
	End matching partner owlClassAssertion( X, C, true )
End
// Rule NO_NAME, active constraint queryClassification( X ), occurrence 1
Begin queryClassification_1
	remove constraint queryClassification( X )
	success
	goto next goal constraint
End
// Fail through
Begin queryClassification_store
	Store constraint queryClassification
	Schedule constraint queryClassification with variable index 0
Goto next goal constraint
// Rule NO_NAME, active constraint res( X ), occurrence 0
Begin res_0
If empty store res( X ) Then goto res_1
	Matching partner res( X ) with idx#0<X>
		If guard
			( res( X ) != res( X ) )
		Then guard
			remove constraint res( X )
			true
			goto next goal constraint
		End guard
	End matching partner res( X )
End
// Rule NO_NAME, active constraint res( X ), occurrence 1
Begin res_1
	If history <res( X )> Then
		store constraint res( X )
		afficher( X )
		If not alived res( X ) Then goto next goal constraint
	End history
End
// Fail through
Begin res_store
	Store constraint res
Goto next goal constraint
// Fail through
Begin queryClassificationTemp_store
	Store constraint queryClassificationTemp
Goto next goal constraint
// Fail through
Begin owlPrefix_store
	Store constraint owlPrefix
Goto next goal constraint
// Fail through
Begin owlTempClassAssertion_store
	Store constraint owlTempClassAssertion
Goto next goal constraint
// Fail through
Begin queryFullUri_store
	Store constraint queryFullUri
Goto next goal constraint
// Fail through
Begin owlFunctionalDataProperty_store
	Store constraint owlFunctionalDataProperty
Goto next goal constraint
// Fail through
Begin querySuperClassOf_store
	Store constraint querySuperClassOf
Goto next goal constraint
// Fail through
Begin querySubClassOf_store
	Store constraint querySubClassOf
Goto next goal constraint
*/
#include <owlOWL2.hh>
chr::ES_CHR OWL2::do_constructPropertyChain(typename constructPropertyChain::Type c_args, typename constructPropertyChain::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] constructPropertyChain_call:
	// ***************************************************
	// constructPropertyChain_0 <=> Rule chainStep, active constraint constructPropertyChain( PC, I, X, Y, N ), occurrence 1
	[[maybe_unused]] constructPropertyChain_0:
	{
		if (owlObjectPropertyChain_constraint_store->empty()) goto constructPropertyChain_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto constructPropertyChain_1;
		auto& PC = std::get<1>(c_args);
		auto& I = std::get<2>(c_args);
		auto& X = std::get<3>(c_args);
		auto& Y = std::get<4>(c_args);
		auto& N = std::get<5>(c_args);
#line 375 "owl.chrpp"
		// Begin guard
		if (
			( I < N )
		) {
			auto it0_0 = owlObjectPropertyChain_constraint_store->template begin<0>(PC,N);
			while ( !it0_0.at_end() ) {
				auto P(std::get<2>(*it0_0));
				auto J(std::get<3>(*it0_0));
#line 375 "owl.chrpp"
				// Begin guard
				if (
					equalIncrement( J, I )
				) {
					auto it0_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(Y,P);
					if ( !it0_1.at_end() ) {
						auto Z(std::get<3>(*it0_1));
						if (c_stored_before) {
							c_it.kill();
						}
						// Body
						chr::Statistics::inc_nb_rules();
#line 375 "owl.chrpp"
						c_args = std::make_tuple(next_free_constraint_id++, PC, ( I + 1 ), X, Z, N);
						c_stored_before = false;
						goto constructPropertyChain_call;

						return chr::ES_CHR::SUCCESS;
					}
				} // End guard
				++it0_0;
			}
		} // End guard
	}
	// ***************************************************
	// constructPropertyChain_1 <=> Rule finalChain, active constraint constructPropertyChain( PC, N, X, Y, N ), occurrence 2
	[[maybe_unused]] constructPropertyChain_1:
	{
		auto& PC = std::get<1>(c_args);
		auto& N = std::get<2>(c_args);
		auto& X = std::get<3>(c_args);
		auto& Y = std::get<4>(c_args);
		if (N != std::get<5>(c_args)) goto constructPropertyChain_store;
		if (c_stored_before) {
			c_it.kill();
		}
		// Body
		chr::Statistics::inc_nb_rules();
#line 376 "owl.chrpp"
		if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( X, PC, Y )) return chr::ES_CHR::FAILURE;
		return chr::ES_CHR::SUCCESS;
	}
	// Store constraint
	[[maybe_unused]] constructPropertyChain_store:
		if (!c_stored_before) {
			c_it = constructPropertyChain_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename constructPropertyChain::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<4>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<5>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_logicalName(typename logicalName::Type c_args, typename logicalName::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] logicalName_call:
	// ***************************************************
	// logicalName_0 <=> Rule NO_NAME, active constraint logicalName( emptyString, V ), occurrence 1
	[[maybe_unused]] logicalName_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_1;
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto logicalName_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto logicalName_1;
		if (logicalName_constraint_store->empty()) goto logicalName_1;
		if (std::get<1>(c_args) != emptyString) goto logicalName_1;
		auto& V = std::get<2>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<0>(V,true);
		while ( !it0_0.at_end() ) {
			auto Y(std::get<2>(*it0_0));
			auto it0_1 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
			while ( !it0_1.at_end() ) {
				auto W(std::get<1>(*it0_1));
#line 390 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it0_1) != std::get<0>(*it0_0) )
				) {
					auto it0_2 = owlObjectPropertyAssertion_constraint_store->template begin<1>(W);
					while ( !it0_2.at_end() ) {
						auto U(std::get<1>(*it0_2));
						auto P(std::get<2>(*it0_2));
						auto it0_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,V);
						while ( !it0_3.at_end() ) {
#line 390 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it0_3) != std::get<0>(*it0_2) )
							) {
								auto it0_4 = logicalName_constraint_store->template begin<0>(W);
								while ( !it0_4.at_end() ) {
									auto URI(std::get<1>(*it0_4));
#line 390 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it0_4) != std::get<0>(c_args) )
										&& ( !( URI == emptyString ) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it0_0.kill();
										it0_3.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 390 "owl.chrpp"

										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it0_4;
								}
							} // End guard
							++it0_3;
						}
						++it0_2;
					}
				} // End guard
				++it0_1;
			}
			++it0_0;
		}
	}
	// ***************************************************
	// logicalName_1 <=> Rule NO_NAME, active constraint logicalName( URI, W ), occurrence 2
	[[maybe_unused]] logicalName_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_2;
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_2;
		if (logicalName_constraint_store->empty()) goto logicalName_2;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto logicalName_2;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto logicalName_2;
		auto& URI = std::get<1>(c_args);
		auto& W = std::get<2>(c_args);
#line 390 "owl.chrpp"
		// Begin guard
		if (
			( !( URI == emptyString ) )
		) {
			auto it1_0 = owlClassAssertion_constraint_store->template begin<0>(W,true);
			while ( !it1_0.at_end() ) {
				auto Y(std::get<2>(*it1_0));
				auto it1_1 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
				while ( !it1_1.at_end() ) {
					auto V(std::get<1>(*it1_1));
#line 390 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it1_1) != std::get<0>(*it1_0) )
					) {
						auto it1_2 = logicalName_constraint_store->template begin<1>(emptyString,V);
						while ( !it1_2.at_end() ) {
#line 390 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it1_2) != std::get<0>(c_args) )
							) {
								auto it1_3 = owlObjectPropertyAssertion_constraint_store->template begin<1>(W);
								while ( !it1_3.at_end() ) {
									auto U(std::get<1>(*it1_3));
									auto P(std::get<2>(*it1_3));
									auto it1_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,V);
									while ( !it1_4.at_end() ) {
#line 390 "owl.chrpp"
										// Begin guard
										if (
											( std::get<0>(*it1_4) != std::get<0>(*it1_3) )
										) {
											it1_0.lock();
											it1_1.lock();
											if (!c_stored_before) {
												c_it = logicalName_constraint_store->add(c_args);
												auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename logicalName::Constraint_callback(this,c_it));
												chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
												c_stored_before = true;
											}
											c_it.lock();
											it1_1.kill();
											it1_2.kill();
											it1_4.kill();
											// Body
											chr::Statistics::inc_nb_rules();
#line 390 "owl.chrpp"

											assert(c_stored_before);
											if (!c_it.alive()) {
												c_it.unlock();
												it1_0.unlock();
												it1_1.unlock();
												return chr::ES_CHR::SUCCESS;
											}
											c_it.unlock();
											if (!it1_0.alive()) {
												it1_1.unlock();
												goto it1_0_next;
											}
											it1_0.unlock();
											it1_1.next_and_unlock();
											goto it1_1_next;
										} // End guard
										++it1_4;
									}
									++it1_3;
								}
							} // End guard
							++it1_2;
						}
					} // End guard
					++it1_1;
					it1_1_next:;
				}
				++it1_0;
				it1_0_next:;
			}
		} // End guard
	}
	// ***************************************************
	// logicalName_2 <=> Rule NO_NAME, active constraint logicalName( URIV, V ), occurrence 3
	[[maybe_unused]] logicalName_2:
	{
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_3;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto logicalName_3;
		if (owlAllValuesFrom_constraint_store->empty()) goto logicalName_3;
		if (logicalName_constraint_store->empty()) goto logicalName_3;
		auto& URIV = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		auto it2_0 = owlClassAssertion_constraint_store->template begin<2>(false);
		while ( !it2_0.at_end() ) {
			auto U(std::get<1>(*it2_0));
			auto C(std::get<2>(*it2_0));
			auto it2_1 = owlObjectPropertyAssertion_constraint_store->template begin<3>(U,V);
			while ( !it2_1.at_end() ) {
				auto P(std::get<2>(*it2_1));
				auto it2_2 = owlAllValuesFrom_constraint_store->template begin<0>(C,P);
				while ( !it2_2.at_end() ) {
					auto Y(std::get<3>(*it2_2));
					auto it2_3 = logicalName_constraint_store->template begin<0>(Y);
					while ( !it2_3.at_end() ) {
						auto URIY(std::get<1>(*it2_3));
#line 397 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it2_3) != std::get<0>(c_args) )
							&& ( !checkClassification( ( *this ), URIV, URIY ) )
						) {
							it2_0.lock();
							if (!c_stored_before) {
								c_it = logicalName_constraint_store->add(c_args);
								auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename logicalName::Constraint_callback(this,c_it));
								chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
								c_stored_before = true;
							}
							c_it.lock();
							it2_0.kill();
							// Body
							chr::Statistics::inc_nb_rules();
#line 397 "owl.chrpp"

							assert(c_stored_before);
							if (!c_it.alive()) {
								c_it.unlock();
								it2_0.unlock();
								return chr::ES_CHR::SUCCESS;
							}
							c_it.unlock();
							it2_0.next_and_unlock();
							goto it2_0_next;
						} // End guard
						++it2_3;
					}
					++it2_2;
				}
				++it2_1;
			}
			++it2_0;
			it2_0_next:;
		}
	}
	// ***************************************************
	// logicalName_3 <=> Rule NO_NAME, active constraint logicalName( URIY, Y ), occurrence 4
	[[maybe_unused]] logicalName_3:
	{
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_4;
		if (owlAllValuesFrom_constraint_store->empty()) goto logicalName_4;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto logicalName_4;
		if (logicalName_constraint_store->empty()) goto logicalName_4;
		auto& URIY = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		auto it3_0 = owlClassAssertion_constraint_store->template begin<2>(false);
		while ( !it3_0.at_end() ) {
			auto U(std::get<1>(*it3_0));
			auto C(std::get<2>(*it3_0));
			auto it3_1 = owlAllValuesFrom_constraint_store->template begin<1>(C,Y);
			while ( !it3_1.at_end() ) {
				auto P(std::get<2>(*it3_1));
				auto it3_2 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
				while ( !it3_2.at_end() ) {
					auto V(std::get<3>(*it3_2));
					auto it3_3 = logicalName_constraint_store->template begin<0>(V);
					while ( !it3_3.at_end() ) {
						auto URIV(std::get<1>(*it3_3));
#line 397 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it3_3) != std::get<0>(c_args) )
							&& ( !checkClassification( ( *this ), URIV, URIY ) )
						) {
							it3_0.lock();
							if (!c_stored_before) {
								c_it = logicalName_constraint_store->add(c_args);
								auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename logicalName::Constraint_callback(this,c_it));
								chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
								c_stored_before = true;
							}
							c_it.lock();
							it3_0.kill();
							// Body
							chr::Statistics::inc_nb_rules();
#line 397 "owl.chrpp"

							assert(c_stored_before);
							if (!c_it.alive()) {
								c_it.unlock();
								it3_0.unlock();
								return chr::ES_CHR::SUCCESS;
							}
							c_it.unlock();
							it3_0.next_and_unlock();
							goto it3_0_next;
						} // End guard
						++it3_3;
					}
					++it3_2;
				}
				++it3_1;
			}
			++it3_0;
			it3_0_next:;
		}
	}
	// ***************************************************
	// logicalName_4 <=> Rule NO_NAME, active constraint logicalName( URIC, C ), occurrence 5
	[[maybe_unused]] logicalName_4:
	{
		if (owlClassAssertion_constraint_store->empty()) goto logicalName_store;
		if (queryClassification_constraint_store->empty()) goto logicalName_store;
		auto& URIC = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		auto it4_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it4_0.at_end() ) {
			auto X(std::get<1>(*it4_0));
			auto it4_1 = queryClassification_constraint_store->template begin<0>(X);
			while ( !it4_1.at_end() ) {
				// Check history
				if (_history.rule_80->check( {{std::get<0>(c_args),std::get<0>(*it4_0),std::get<0>(*it4_1)}} )) {
					it4_0.lock();
					it4_1.lock();
					if (!c_stored_before) {
						c_it = logicalName_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename logicalName::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 418 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == res( URIC )) return chr::ES_CHR::FAILURE;
#line 418 "owl.chrpp"
					CHECK_ES( afficher( "passage" ) );
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it4_0.unlock();
						it4_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it4_0.alive()) {
						it4_1.unlock();
						goto it4_0_next;
					}
					it4_0.unlock();
					it4_1.next_and_unlock();
				} // End history
				else {
					++it4_1;
				}
			}
			++it4_0;
			it4_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] logicalName_store:
		if (!c_stored_before) {
			c_it = logicalName_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename logicalName::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlAllValuesFrom(typename owlAllValuesFrom::Type c_args, typename owlAllValuesFrom::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlAllValuesFrom_call:
	// ***************************************************
	// owlAllValuesFrom_0 <=> Rule NO_NAME, active constraint owlAllValuesFrom( C, P, Y ), occurrence 1
	[[maybe_unused]] owlAllValuesFrom_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlAllValuesFrom_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlAllValuesFrom_1;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it0_0.at_end() ) {
			auto U(std::get<1>(*it0_0));
			auto it0_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			while ( !it0_1.at_end() ) {
				auto V(std::get<3>(*it0_1));
				// Check history
				if (_history.rule_76->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
					it0_0.lock();
					it0_1.lock();
					if (!c_stored_before) {
						c_it = owlAllValuesFrom_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlAllValuesFrom::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 394 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlClassAssertion( V, Y, true )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						it0_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it0_0.alive()) {
						it0_1.unlock();
						goto it0_0_next;
					}
					it0_0.unlock();
					it0_1.next_and_unlock();
				} // End history
				else {
					++it0_1;
				}
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// owlAllValuesFrom_1 <=> Rule NO_NAME, active constraint owlAllValuesFrom( C, P, Y ), occurrence 2
	[[maybe_unused]] owlAllValuesFrom_1:
	{
		if (owlNamedIndividual_constraint_store->empty()) goto owlAllValuesFrom_2;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlNamedIndividual_constraint_store->begin();
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			// Check history
			if (_history.rule_77->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlAllValuesFrom_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlAllValuesFrom::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 395 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C, false )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// ***************************************************
	// owlAllValuesFrom_2 <=> Rule NO_NAME, active constraint owlAllValuesFrom( C, P, Y ), occurrence 3
	[[maybe_unused]] owlAllValuesFrom_2:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlAllValuesFrom_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlAllValuesFrom_store;
		if (logicalName_constraint_store->empty()) goto owlAllValuesFrom_store;
		if (logicalName_constraint_store->empty()) goto owlAllValuesFrom_store;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it2_0 = owlClassAssertion_constraint_store->template begin<1>(C,false);
		while ( !it2_0.at_end() ) {
			auto U(std::get<1>(*it2_0));
			auto it2_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			while ( !it2_1.at_end() ) {
				auto V(std::get<3>(*it2_1));
				auto it2_2 = logicalName_constraint_store->template begin<0>(V);
				while ( !it2_2.at_end() ) {
					auto URIV(std::get<1>(*it2_2));
					auto it2_3 = logicalName_constraint_store->template begin<0>(Y);
					while ( !it2_3.at_end() ) {
						auto URIY(std::get<1>(*it2_3));
#line 397 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it2_3) != std::get<0>(*it2_2) )
							&& ( !checkClassification( ( *this ), URIV, URIY ) )
						) {
							it2_0.lock();
							if (!c_stored_before) {
								c_it = owlAllValuesFrom_constraint_store->add(c_args);
								auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlAllValuesFrom::Constraint_callback(this,c_it));
								chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
								chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
								chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
								c_stored_before = true;
							}
							c_it.lock();
							it2_0.kill();
							// Body
							chr::Statistics::inc_nb_rules();
#line 397 "owl.chrpp"

							assert(c_stored_before);
							if (!c_it.alive()) {
								c_it.unlock();
								it2_0.unlock();
								return chr::ES_CHR::SUCCESS;
							}
							c_it.unlock();
							it2_0.next_and_unlock();
							goto it2_0_next;
						} // End guard
						++it2_3;
					}
					++it2_2;
				}
				++it2_1;
			}
			++it2_0;
			it2_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlAllValuesFrom_store:
		if (!c_stored_before) {
			c_it = owlAllValuesFrom_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlAllValuesFrom::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlAsymmetricObjectProperty(typename owlAsymmetricObjectProperty::Type c_args, typename owlAsymmetricObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlAsymmetricObjectProperty_call:
	// ***************************************************
	// owlAsymmetricObjectProperty_0 <=> Rule NO_NAME, active constraint owlAsymmetricObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlAsymmetricObjectProperty_0:
	{
		if (owlAsymmetricObjectProperty_constraint_store->empty()) goto owlAsymmetricObjectProperty_1;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlAsymmetricObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 212 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 212 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlAsymmetricObjectProperty_1 <=> Rule AsymmetricProperty1, active constraint owlAsymmetricObjectProperty( P ), occurrence 2
	[[maybe_unused]] owlAsymmetricObjectProperty_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlAsymmetricObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto Y(std::get<3>(*it1_0));
			// Check history
			if (_history.rule_53->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlAsymmetricObjectProperty_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlAsymmetricObjectProperty::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 319 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlNegativeObjectAssertion( X, P, Y )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlAsymmetricObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlAsymmetricObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlAsymmetricObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlCandidatsIntersection(typename owlCandidatsIntersection::Type c_args, typename owlCandidatsIntersection::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlCandidatsIntersection_call:
	// ***************************************************
	// owlCandidatsIntersection_0 <=> Rule r3, active constraint owlCandidatsIntersection( X, C, I ), occurrence 1
	[[maybe_unused]] owlCandidatsIntersection_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlCandidatsIntersection_1;
		if (owlIntersectionClass_constraint_store->empty()) goto owlCandidatsIntersection_1;
		auto& X = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		auto& I = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it0_0.at_end() ) {
			auto V(std::get<2>(*it0_0));
			auto it0_1 = owlIntersectionClass_constraint_store->template begin<0>(C,V,I);
			while ( !it0_1.at_end() ) {
				// Check history
				if (_history.rule_63->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
					it0_0.lock();
					it0_1.lock();
					if (!c_stored_before) {
						c_it = owlCandidatsIntersection_constraint_store->add(c_args);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 359 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlCandidatsIntersection( X, C, ( I + 1 ) )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						it0_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it0_0.alive()) {
						it0_1.unlock();
						goto it0_0_next;
					}
					it0_0.unlock();
					it0_1.next_and_unlock();
				} // End history
				else {
					++it0_1;
				}
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// owlCandidatsIntersection_1 <=> Rule r5, active constraint owlCandidatsIntersection( X, C, I ), occurrence 2
	[[maybe_unused]] owlCandidatsIntersection_1:
	{
		if (owlIntersectionOf_constraint_store->empty()) goto owlCandidatsIntersection_store;
		auto& X = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		auto& I = std::get<3>(c_args);
		auto it1_0 = owlIntersectionOf_constraint_store->template begin<0>(C,I);
		while ( !it1_0.at_end() ) {
			auto ITEND(std::get<2>(*it1_0));
			auto _LV_0_(std::get<3>(*it1_0));
#line 363 "owl.chrpp"
			// Begin guard
			if (
				( _LV_0_ == ITEND )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 363 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C, true )) return chr::ES_CHR::FAILURE;
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it1_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlCandidatsIntersection_store:
		if (!c_stored_before) {
			(void) owlCandidatsIntersection_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlClass(typename owlClass::Type c_args, typename owlClass::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlClass_call:
	// ***************************************************
	// owlClass_0 <=> Rule NO_NAME, active constraint owlClass( C ), occurrence 1
	[[maybe_unused]] owlClass_0:
	{
		if (owlClass_constraint_store->empty()) goto owlClass_1;
		auto& C = std::get<1>(c_args);
		auto it0_0 = owlClass_constraint_store->template begin<0>(C);
		while ( !it0_0.at_end() ) {
#line 199 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 199 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlClass_1 <=> Rule NO_NAME, active constraint owlClass( A ), occurrence 2
	[[maybe_unused]] owlClass_1:
	{
		auto& A = std::get<1>(c_args);
		// Check history
		if (_history.rule_34->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlClass_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClass::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 246 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlSubclassOf( A, A )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlClass_2 <=> Rule NO_NAME, active constraint owlClass( C ), occurrence 3
	[[maybe_unused]] owlClass_2:
	{
		auto& C = std::get<1>(c_args);
		// Check history
		if (_history.rule_35->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlClass_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClass::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 250 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlEquivalentClass( C, C )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlClass_3 <=> Rule NO_NAME, active constraint owlClass( C ), occurrence 4
	[[maybe_unused]] owlClass_3:
	{
		auto& C = std::get<1>(c_args);
		// Check history
		if (_history.rule_36->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlClass_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClass::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 256 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlSubclassOf( C, owlThing )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlClass_4 <=> Rule NO_NAME, active constraint owlClass( C ), occurrence 5
	[[maybe_unused]] owlClass_4:
	{
		auto& C = std::get<1>(c_args);
		// Check history
		if (_history.rule_37->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlClass_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClass::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 257 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlSubclassOf( owlNothing, C )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// Store constraint
	[[maybe_unused]] owlClass_store:
		if (!c_stored_before) {
			c_it = owlClass_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClass::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlClassAssertion(typename owlClassAssertion::Type c_args, typename owlClassAssertion::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlClassAssertion_call:
	// ***************************************************
	// owlClassAssertion_0 <=> Rule NO_NAME, active constraint owlClassAssertion( X, A, B ), occurrence 1
	[[maybe_unused]] owlClassAssertion_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_1;
		auto& X = std::get<1>(c_args);
		auto& A = std::get<2>(c_args);
		auto& B = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<3>(X,A,B);
		while ( !it0_0.at_end() ) {
#line 220 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 220 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_1 <=> Rule DisjointClass, active constraint owlClassAssertion( X, A, true ), occurrence 2
	[[maybe_unused]] owlClassAssertion_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_2;
		if (owlDisjointClass_constraint_store->empty()) goto owlClassAssertion_2;
		auto& X = std::get<1>(c_args);
		auto& A = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_2;
		auto it1_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it1_0.at_end() ) {
			auto B(std::get<2>(*it1_0));
#line 228 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it1_0) != std::get<0>(c_args) )
			) {
				auto it1_1 = owlDisjointClass_constraint_store->begin();
				while ( !it1_1.at_end() ) {
					auto L(std::get<1>(*it1_1));
#line 228 "owl.chrpp"
					// Begin guard
					if (
						contains( A, L )
						&& contains( B, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it1_0.kill();
						it1_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 228 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it1_1;
				}
			} // End guard
			++it1_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_2 <=> Rule DisjointClass, active constraint owlClassAssertion( X, B, true ), occurrence 3
	[[maybe_unused]] owlClassAssertion_2:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_3;
		if (owlDisjointClass_constraint_store->empty()) goto owlClassAssertion_3;
		auto& X = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_3;
		auto it2_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it2_0.at_end() ) {
			auto A(std::get<2>(*it2_0));
#line 228 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it2_0) != std::get<0>(c_args) )
			) {
				auto it2_1 = owlDisjointClass_constraint_store->begin();
				while ( !it2_1.at_end() ) {
					auto L(std::get<1>(*it2_1));
#line 228 "owl.chrpp"
					// Begin guard
					if (
						contains( A, L )
						&& contains( B, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it2_0.kill();
						it2_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 228 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it2_1;
				}
			} // End guard
			++it2_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_3 <=> Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 4
	[[maybe_unused]] owlClassAssertion_3:
	{
		auto& X = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_4;
		// Check history
		if (_history.rule_33->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlClassAssertion_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 244 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlClass( C )) return chr::ES_CHR::FAILURE;
#line 244 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlNamedIndividual( X )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlClassAssertion_4 <=> Rule NO_NAME, active constraint owlClassAssertion( X, V, true ), occurrence 5
	[[maybe_unused]] owlClassAssertion_4:
	{
		if (owlUnionClass_constraint_store->empty()) goto owlClassAssertion_5;
		auto& X = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_5;
		auto it4_0 = owlUnionClass_constraint_store->template begin<0>(V);
		while ( !it4_0.at_end() ) {
			auto C(std::get<1>(*it4_0));
			it4_0.lock();
			if (!c_stored_before) {
				c_it = owlClassAssertion_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			it4_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 340 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C, true )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				it4_0.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
			it4_0.next_and_unlock();
		}
	}
	// ***************************************************
	// owlClassAssertion_5 <=> Rule r2, active constraint owlClassAssertion( X, V, true ), occurrence 6
	[[maybe_unused]] owlClassAssertion_5:
	{
		if (owlIntersectionClass_constraint_store->empty()) goto owlClassAssertion_6;
		auto& X = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_6;
		auto it5_0 = owlIntersectionClass_constraint_store->template begin<1>(V,0);
		while ( !it5_0.at_end() ) {
			auto C(std::get<1>(*it5_0));
			// Check history
			if (_history.rule_62->check( {{std::get<0>(c_args),std::get<0>(*it5_0)}} )) {
				it5_0.lock();
				if (!c_stored_before) {
					c_it = owlClassAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 355 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlCandidatsIntersection( X, C, 0 )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it5_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it5_0.next_and_unlock();
			} // End history
			else {
				++it5_0;
			}
		}
	}
	// ***************************************************
	// owlClassAssertion_6 <=> Rule r3, active constraint owlClassAssertion( X, V, true ), occurrence 7
	[[maybe_unused]] owlClassAssertion_6:
	{
		if (owlIntersectionClass_constraint_store->empty()) goto owlClassAssertion_7;
		if (owlCandidatsIntersection_constraint_store->empty()) goto owlClassAssertion_7;
		auto& X = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_7;
		auto it6_0 = owlIntersectionClass_constraint_store->template begin<2>(V);
		while ( !it6_0.at_end() ) {
			auto C(std::get<1>(*it6_0));
			auto I(std::get<3>(*it6_0));
			auto it6_1 = owlCandidatsIntersection_constraint_store->template begin<0>(X,C,I);
			while ( !it6_1.at_end() ) {
				// Check history
				if (_history.rule_63->check( {{std::get<0>(c_args),std::get<0>(*it6_0),std::get<0>(*it6_1)}} )) {
					it6_0.lock();
					it6_1.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 359 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlCandidatsIntersection( X, C, ( I + 1 ) )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it6_0.unlock();
						it6_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it6_0.alive()) {
						it6_1.unlock();
						goto it6_0_next;
					}
					it6_0.unlock();
					it6_1.next_and_unlock();
				} // End history
				else {
					++it6_1;
				}
			}
			++it6_0;
			it6_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_7 <=> Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 8
	[[maybe_unused]] owlClassAssertion_7:
	{
		if (owlIntersectionClass_constraint_store->empty()) goto owlClassAssertion_8;
		auto& X = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_8;
		auto it7_0 = owlIntersectionClass_constraint_store->template begin<3>(C);
		while ( !it7_0.at_end() ) {
			auto C1(std::get<2>(*it7_0));
			// Check history
			if (_history.rule_66->check( {{std::get<0>(c_args),std::get<0>(*it7_0)}} )) {
				it7_0.lock();
				if (!c_stored_before) {
					c_it = owlClassAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 369 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C1, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it7_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it7_0.next_and_unlock();
			} // End history
			else {
				++it7_0;
			}
		}
	}
	// ***************************************************
	// owlClassAssertion_8 <=> Rule NO_NAME, active constraint owlClassAssertion( X, NOTA, false ), occurrence 9
	[[maybe_unused]] owlClassAssertion_8:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_9;
		if (owlComplementOf_constraint_store->empty()) goto owlClassAssertion_9;
		auto& X = std::get<1>(c_args);
		auto& NOTA = std::get<2>(c_args);
		if (std::get<3>(c_args) != false) goto owlClassAssertion_9;
		auto it8_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it8_0.at_end() ) {
			auto A(std::get<2>(*it8_0));
#line 382 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it8_0) != std::get<0>(c_args) )
			) {
				auto it8_1 = owlComplementOf_constraint_store->template begin<0>(A,NOTA);
				if ( !it8_1.at_end() ) {
					if (c_stored_before) {
						c_it.kill();
					}
					// Body
					chr::Statistics::inc_nb_rules();
#line 382 "owl.chrpp"

					return chr::ES_CHR::SUCCESS;
				}
			} // End guard
			++it8_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_9 <=> Rule NO_NAME, active constraint owlClassAssertion( X, A, true ), occurrence 10
	[[maybe_unused]] owlClassAssertion_9:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_10;
		if (owlComplementOf_constraint_store->empty()) goto owlClassAssertion_10;
		auto& X = std::get<1>(c_args);
		auto& A = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_10;
		auto it9_0 = owlClassAssertion_constraint_store->template begin<0>(X,false);
		while ( !it9_0.at_end() ) {
			auto NOTA(std::get<2>(*it9_0));
#line 382 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it9_0) != std::get<0>(c_args) )
			) {
				auto it9_1 = owlComplementOf_constraint_store->template begin<0>(A,NOTA);
				while ( !it9_1.at_end() ) {
					it9_0.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					it9_0.kill();
					// Body
					chr::Statistics::inc_nb_rules();
#line 382 "owl.chrpp"

					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it9_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it9_0.next_and_unlock();
					goto it9_0_next;
				}
			} // End guard
			++it9_0;
			it9_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_10 <=> Rule NO_NAME, active constraint owlClassAssertion( X, A, true ), occurrence 11
	[[maybe_unused]] owlClassAssertion_10:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_11;
		if (owlComplementOf_constraint_store->empty()) goto owlClassAssertion_11;
		auto& X = std::get<1>(c_args);
		auto& A = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_11;
		auto it10_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it10_0.at_end() ) {
			auto NOTA(std::get<2>(*it10_0));
#line 383 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it10_0) != std::get<0>(c_args) )
			) {
				auto it10_1 = owlComplementOf_constraint_store->template begin<0>(A,NOTA);
				if ( !it10_1.at_end() ) {
					if (c_stored_before) {
						c_it.kill();
					}
					it10_0.kill();
					it10_1.kill();
					// Body
					chr::Statistics::inc_nb_rules();
#line 383 "owl.chrpp"
					return chr::failure();
					return chr::ES_CHR::SUCCESS;
				}
			} // End guard
			++it10_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_11 <=> Rule NO_NAME, active constraint owlClassAssertion( X, NOTA, true ), occurrence 12
	[[maybe_unused]] owlClassAssertion_11:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_12;
		if (owlComplementOf_constraint_store->empty()) goto owlClassAssertion_12;
		auto& X = std::get<1>(c_args);
		auto& NOTA = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_12;
		auto it11_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it11_0.at_end() ) {
			auto A(std::get<2>(*it11_0));
#line 383 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it11_0) != std::get<0>(c_args) )
			) {
				auto it11_1 = owlComplementOf_constraint_store->template begin<0>(A,NOTA);
				if ( !it11_1.at_end() ) {
					if (c_stored_before) {
						c_it.kill();
					}
					it11_0.kill();
					it11_1.kill();
					// Body
					chr::Statistics::inc_nb_rules();
#line 383 "owl.chrpp"
					return chr::failure();
					return chr::ES_CHR::SUCCESS;
				}
			} // End guard
			++it11_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_12 <=> Rule NO_NAME, active constraint owlClassAssertion( V, Y, true ), occurrence 13
	[[maybe_unused]] owlClassAssertion_12:
	{
		if (owlSomeValuesFrom_constraint_store->empty()) goto owlClassAssertion_13;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_13;
		auto& V = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_13;
		auto it12_0 = owlSomeValuesFrom_constraint_store->template begin<0>(Y);
		while ( !it12_0.at_end() ) {
			auto C(std::get<1>(*it12_0));
			auto P(std::get<2>(*it12_0));
			auto it12_1 = owlObjectPropertyAssertion_constraint_store->template begin<5>(P,V);
			while ( !it12_1.at_end() ) {
				auto U(std::get<1>(*it12_1));
				// Check history
				if (_history.rule_73->check( {{std::get<0>(c_args),std::get<0>(*it12_0),std::get<0>(*it12_1)}} )) {
					it12_0.lock();
					it12_1.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 388 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it12_0.unlock();
						it12_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it12_0.alive()) {
						it12_1.unlock();
						goto it12_0_next;
					}
					it12_0.unlock();
					it12_1.next_and_unlock();
				} // End history
				else {
					++it12_1;
				}
			}
			++it12_0;
			it12_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_13 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 14
	[[maybe_unused]] owlClassAssertion_13:
	{
		if (owlSomeValuesFrom_constraint_store->empty()) goto owlClassAssertion_14;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_14;
		auto it13_0 = owlSomeValuesFrom_constraint_store->template begin<1>(C);
		while ( !it13_0.at_end() ) {
			auto P(std::get<2>(*it13_0));
			auto Y(std::get<3>(*it13_0));
			// Check history
			if (_history.rule_74->check( {{std::get<0>(c_args),std::get<0>(*it13_0)}} )) {
				it13_0.lock();
				if (!c_stored_before) {
					c_it = owlClassAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
				typename std::tuple_element<3,typename owlObjectPropertyAssertion::Type>::type V;
#line 389 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( U, P, V )) return chr::ES_CHR::FAILURE;
#line 389 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == logicalName( emptyString, V )) return chr::ES_CHR::FAILURE;
#line 389 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( V, Y, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it13_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it13_0.next_and_unlock();
			} // End history
			else {
				++it13_0;
			}
		}
	}
	// ***************************************************
	// owlClassAssertion_14 <=> Rule NO_NAME, active constraint owlClassAssertion( V, Y, true ), occurrence 15
	[[maybe_unused]] owlClassAssertion_14:
	{
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_15;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_15;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_15;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_15;
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_15;
		auto& V = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_15;
		auto it14_0 = logicalName_constraint_store->template begin<1>(emptyString,V);
		while ( !it14_0.at_end() ) {
			auto it14_1 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
			while ( !it14_1.at_end() ) {
				auto W(std::get<1>(*it14_1));
#line 390 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it14_1) != std::get<0>(c_args) )
				) {
					auto it14_2 = owlObjectPropertyAssertion_constraint_store->template begin<1>(W);
					while ( !it14_2.at_end() ) {
						auto U(std::get<1>(*it14_2));
						auto P(std::get<2>(*it14_2));
						auto it14_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,V);
						while ( !it14_3.at_end() ) {
#line 390 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it14_3) != std::get<0>(*it14_2) )
							) {
								auto it14_4 = logicalName_constraint_store->template begin<0>(W);
								while ( !it14_4.at_end() ) {
									auto URI(std::get<1>(*it14_4));
#line 390 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it14_4) != std::get<0>(*it14_0) )
										&& ( !( URI == emptyString ) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it14_0.kill();
										it14_3.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 390 "owl.chrpp"

										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it14_4;
								}
							} // End guard
							++it14_3;
						}
						++it14_2;
					}
				} // End guard
				++it14_1;
			}
			++it14_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_15 <=> Rule NO_NAME, active constraint owlClassAssertion( W, Y, true ), occurrence 16
	[[maybe_unused]] owlClassAssertion_15:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_16;
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_16;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_16;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_16;
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_16;
		auto& W = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_16;
		auto it15_0 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
		while ( !it15_0.at_end() ) {
			auto V(std::get<1>(*it15_0));
#line 390 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it15_0) != std::get<0>(c_args) )
			) {
				auto it15_1 = logicalName_constraint_store->template begin<1>(emptyString,V);
				while ( !it15_1.at_end() ) {
					auto it15_2 = owlObjectPropertyAssertion_constraint_store->template begin<1>(V);
					while ( !it15_2.at_end() ) {
						auto U(std::get<1>(*it15_2));
						auto P(std::get<2>(*it15_2));
						auto it15_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,W);
						while ( !it15_3.at_end() ) {
#line 390 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it15_3) != std::get<0>(*it15_2) )
							) {
								auto it15_4 = logicalName_constraint_store->template begin<0>(W);
								while ( !it15_4.at_end() ) {
									auto URI(std::get<1>(*it15_4));
#line 390 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it15_4) != std::get<0>(*it15_1) )
										&& ( !( URI == emptyString ) )
									) {
										it15_0.lock();
										if (!c_stored_before) {
											c_it = owlClassAssertion_constraint_store->add(c_args);
											auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
											chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
											chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
											c_stored_before = true;
										}
										c_it.lock();
										it15_0.kill();
										it15_1.kill();
										it15_2.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 390 "owl.chrpp"

										assert(c_stored_before);
										if (!c_it.alive()) {
											c_it.unlock();
											it15_0.unlock();
											return chr::ES_CHR::SUCCESS;
										}
										c_it.unlock();
										it15_0.next_and_unlock();
										goto it15_0_next;
									} // End guard
									++it15_4;
								}
							} // End guard
							++it15_3;
						}
						++it15_2;
					}
					++it15_1;
				}
			} // End guard
			++it15_0;
			it15_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_16 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 17
	[[maybe_unused]] owlClassAssertion_16:
	{
		if (owlAllValuesFrom_constraint_store->empty()) goto owlClassAssertion_17;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_17;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_17;
		auto it16_0 = owlAllValuesFrom_constraint_store->template begin<2>(C);
		while ( !it16_0.at_end() ) {
			auto P(std::get<2>(*it16_0));
			auto Y(std::get<3>(*it16_0));
			auto it16_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			while ( !it16_1.at_end() ) {
				auto V(std::get<3>(*it16_1));
				// Check history
				if (_history.rule_76->check( {{std::get<0>(c_args),std::get<0>(*it16_0),std::get<0>(*it16_1)}} )) {
					it16_0.lock();
					it16_1.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 394 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlClassAssertion( V, Y, true )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it16_0.unlock();
						it16_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it16_0.alive()) {
						it16_1.unlock();
						goto it16_0_next;
					}
					it16_0.unlock();
					it16_1.next_and_unlock();
				} // End history
				else {
					++it16_1;
				}
			}
			++it16_0;
			it16_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_17 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, false ), occurrence 18
	[[maybe_unused]] owlClassAssertion_17:
	{
		if (owlAllValuesFrom_constraint_store->empty()) goto owlClassAssertion_18;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_18;
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_18;
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_18;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != false) goto owlClassAssertion_18;
		auto it17_0 = owlAllValuesFrom_constraint_store->template begin<2>(C);
		while ( !it17_0.at_end() ) {
			auto P(std::get<2>(*it17_0));
			auto Y(std::get<3>(*it17_0));
			auto it17_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			while ( !it17_1.at_end() ) {
				auto V(std::get<3>(*it17_1));
				auto it17_2 = logicalName_constraint_store->template begin<0>(V);
				while ( !it17_2.at_end() ) {
					auto URIV(std::get<1>(*it17_2));
					auto it17_3 = logicalName_constraint_store->template begin<0>(Y);
					while ( !it17_3.at_end() ) {
						auto URIY(std::get<1>(*it17_3));
#line 397 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it17_3) != std::get<0>(*it17_2) )
							&& ( !checkClassification( ( *this ), URIV, URIY ) )
						) {
							if (c_stored_before) {
								c_it.kill();
							}
							// Body
							chr::Statistics::inc_nb_rules();
#line 397 "owl.chrpp"

							return chr::ES_CHR::SUCCESS;
						} // End guard
						++it17_3;
					}
					++it17_2;
				}
				++it17_1;
			}
			++it17_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_18 <=> Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 19
	[[maybe_unused]] owlClassAssertion_18:
	{
		if (queryClassification_constraint_store->empty()) goto owlClassAssertion_19;
		if (logicalName_constraint_store->empty()) goto owlClassAssertion_19;
		auto& X = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_19;
		auto it18_0 = queryClassification_constraint_store->template begin<0>(X);
		while ( !it18_0.at_end() ) {
			auto it18_1 = logicalName_constraint_store->template begin<0>(C);
			while ( !it18_1.at_end() ) {
				auto URIC(std::get<1>(*it18_1));
				// Check history
				if (_history.rule_80->check( {{std::get<0>(c_args),std::get<0>(*it18_0),std::get<0>(*it18_1)}} )) {
					it18_0.lock();
					it18_1.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 418 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == res( URIC )) return chr::ES_CHR::FAILURE;
#line 418 "owl.chrpp"
					CHECK_ES( afficher( "passage" ) );
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it18_0.unlock();
						it18_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it18_0.alive()) {
						it18_1.unlock();
						goto it18_0_next;
					}
					it18_0.unlock();
					it18_1.next_and_unlock();
				} // End history
				else {
					++it18_1;
				}
			}
			++it18_0;
			it18_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_19 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 20
	[[maybe_unused]] owlClassAssertion_19:
	{
		if (owlMaxCardinality_constraint_store->empty()) goto owlClassAssertion_20;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_20;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_20;
		auto it19_0 = owlMaxCardinality_constraint_store->template begin<0>(C,0);
		while ( !it19_0.at_end() ) {
			auto P(std::get<2>(*it19_0));
			auto it19_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			if ( !it19_1.at_end() ) {
				if (c_stored_before) {
					c_it.kill();
				}
				it19_0.kill();
				it19_1.kill();
				// Body
				chr::Statistics::inc_nb_rules();
#line 430 "owl.chrpp"
				return chr::failure();
				return chr::ES_CHR::SUCCESS;
			}
			++it19_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_20 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 21
	[[maybe_unused]] owlClassAssertion_20:
	{
		if (owlMaxCardinality_constraint_store->empty()) goto owlClassAssertion_21;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_21;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_21;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_21;
		auto it20_0 = owlMaxCardinality_constraint_store->template begin<0>(C,1);
		while ( !it20_0.at_end() ) {
			auto P(std::get<2>(*it20_0));
			auto it20_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			while ( !it20_1.at_end() ) {
				auto Y1(std::get<3>(*it20_1));
				auto it20_2 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
				while ( !it20_2.at_end() ) {
					auto Y2(std::get<3>(*it20_2));
#line 431 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it20_2) != std::get<0>(*it20_1) )
						&& ( !( Y1 == Y2 ) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it20_0.kill();
						it20_1.kill();
						it20_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 431 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it20_2;
				}
				++it20_1;
			}
			++it20_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_21 <=> Rule NO_NAME, active constraint owlClassAssertion( U, X, true ), occurrence 22
	[[maybe_unused]] owlClassAssertion_21:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlClassAssertion_22;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_22;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_22;
		auto& U = std::get<1>(c_args);
		auto& X = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_22;
		auto it21_0 = owlMaxQualifiedCardinality_constraint_store->template begin<0>(X,0);
		while ( !it21_0.at_end() ) {
			auto P(std::get<2>(*it21_0));
			auto C(std::get<3>(*it21_0));
			auto it21_1 = owlClassAssertion_constraint_store->template begin<1>(C,true);
			while ( !it21_1.at_end() ) {
				auto Y(std::get<1>(*it21_1));
#line 433 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it21_1) != std::get<0>(c_args) )
				) {
					auto it21_2 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y);
					if ( !it21_2.at_end() ) {
						if (c_stored_before) {
							c_it.kill();
						}
						it21_0.kill();
						it21_1.kill();
						it21_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 433 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					}
				} // End guard
				++it21_1;
			}
			++it21_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_22 <=> Rule NO_NAME, active constraint owlClassAssertion( Y, C, true ), occurrence 23
	[[maybe_unused]] owlClassAssertion_22:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlClassAssertion_23;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_23;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_23;
		auto& Y = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_23;
		auto it22_0 = owlMaxQualifiedCardinality_constraint_store->template begin<1>(C,0);
		while ( !it22_0.at_end() ) {
			auto X(std::get<1>(*it22_0));
			auto P(std::get<2>(*it22_0));
			auto it22_1 = owlClassAssertion_constraint_store->template begin<1>(X,true);
			while ( !it22_1.at_end() ) {
				auto U(std::get<1>(*it22_1));
#line 433 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it22_1) != std::get<0>(c_args) )
				) {
					auto it22_2 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y);
					if ( !it22_2.at_end() ) {
						if (c_stored_before) {
							c_it.kill();
						}
						it22_0.kill();
						it22_1.kill();
						it22_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 433 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					}
				} // End guard
				++it22_1;
			}
			++it22_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_23 <=> Rule NO_NAME, active constraint owlClassAssertion( U, X, true ), occurrence 24
	[[maybe_unused]] owlClassAssertion_23:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlClassAssertion_24;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_24;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_24;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_24;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_24;
		auto& U = std::get<1>(c_args);
		auto& X = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_24;
		auto it23_0 = owlMaxQualifiedCardinality_constraint_store->template begin<0>(X,1);
		while ( !it23_0.at_end() ) {
			auto P(std::get<2>(*it23_0));
			auto C(std::get<3>(*it23_0));
			auto it23_1 = owlClassAssertion_constraint_store->template begin<1>(C,true);
			while ( !it23_1.at_end() ) {
				auto Y1(std::get<1>(*it23_1));
#line 434 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it23_1) != std::get<0>(c_args) )
				) {
					auto it23_2 = owlClassAssertion_constraint_store->template begin<1>(C,true);
					while ( !it23_2.at_end() ) {
						auto Y2(std::get<1>(*it23_2));
#line 434 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it23_2) != std::get<0>(c_args) )
							&& ( std::get<0>(*it23_2) != std::get<0>(*it23_1) )
							&& ( !( Y1 == Y2 ) )
						) {
							auto it23_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y2);
							while ( !it23_3.at_end() ) {
								auto it23_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y1);
								while ( !it23_4.at_end() ) {
#line 434 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it23_4) != std::get<0>(*it23_3) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it23_0.kill();
										it23_1.kill();
										it23_2.kill();
										it23_3.kill();
										it23_4.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 434 "owl.chrpp"
										if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it23_4;
								}
								++it23_3;
							}
						} // End guard
						++it23_2;
					}
				} // End guard
				++it23_1;
			}
			++it23_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_24 <=> Rule NO_NAME, active constraint owlClassAssertion( Y1, C, true ), occurrence 25
	[[maybe_unused]] owlClassAssertion_24:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlClassAssertion_25;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_25;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_25;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_25;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_25;
		auto& Y1 = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_25;
		auto it24_0 = owlMaxQualifiedCardinality_constraint_store->template begin<1>(C,1);
		while ( !it24_0.at_end() ) {
			auto X(std::get<1>(*it24_0));
			auto P(std::get<2>(*it24_0));
			auto it24_1 = owlClassAssertion_constraint_store->template begin<1>(X,true);
			while ( !it24_1.at_end() ) {
				auto U(std::get<1>(*it24_1));
#line 434 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it24_1) != std::get<0>(c_args) )
				) {
					auto it24_2 = owlClassAssertion_constraint_store->template begin<1>(C,true);
					while ( !it24_2.at_end() ) {
						auto Y2(std::get<1>(*it24_2));
#line 434 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it24_2) != std::get<0>(c_args) )
							&& ( std::get<0>(*it24_2) != std::get<0>(*it24_1) )
							&& ( !( Y1 == Y2 ) )
						) {
							auto it24_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y2);
							while ( !it24_3.at_end() ) {
								auto it24_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y1);
								while ( !it24_4.at_end() ) {
#line 434 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it24_4) != std::get<0>(*it24_3) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it24_0.kill();
										it24_1.kill();
										it24_2.kill();
										it24_3.kill();
										it24_4.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 434 "owl.chrpp"
										if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it24_4;
								}
								++it24_3;
							}
						} // End guard
						++it24_2;
					}
				} // End guard
				++it24_1;
			}
			++it24_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_25 <=> Rule NO_NAME, active constraint owlClassAssertion( Y2, C, true ), occurrence 26
	[[maybe_unused]] owlClassAssertion_25:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlClassAssertion_26;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_26;
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_26;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_26;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlClassAssertion_26;
		auto& Y2 = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_26;
		auto it25_0 = owlMaxQualifiedCardinality_constraint_store->template begin<1>(C,1);
		while ( !it25_0.at_end() ) {
			auto X(std::get<1>(*it25_0));
			auto P(std::get<2>(*it25_0));
			auto it25_1 = owlClassAssertion_constraint_store->template begin<1>(X,true);
			while ( !it25_1.at_end() ) {
				auto U(std::get<1>(*it25_1));
#line 434 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it25_1) != std::get<0>(c_args) )
				) {
					auto it25_2 = owlClassAssertion_constraint_store->template begin<1>(C,true);
					while ( !it25_2.at_end() ) {
						auto Y1(std::get<1>(*it25_2));
#line 434 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it25_2) != std::get<0>(c_args) )
							&& ( std::get<0>(*it25_2) != std::get<0>(*it25_1) )
							&& ( !( Y1 == Y2 ) )
						) {
							auto it25_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y1);
							while ( !it25_3.at_end() ) {
								auto it25_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y2);
								while ( !it25_4.at_end() ) {
#line 434 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it25_4) != std::get<0>(*it25_3) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it25_0.kill();
										it25_1.kill();
										it25_2.kill();
										it25_3.kill();
										it25_4.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 434 "owl.chrpp"
										if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it25_4;
								}
								++it25_3;
							}
						} // End guard
						++it25_2;
					}
				} // End guard
				++it25_1;
			}
			++it25_0;
		}
	}
	// ***************************************************
	// owlClassAssertion_26 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 27
	[[maybe_unused]] owlClassAssertion_26:
	{
		if (owlHasValueObject_constraint_store->empty()) goto owlClassAssertion_27;
		if (owlObjectProperty_constraint_store->empty()) goto owlClassAssertion_27;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_27;
		auto it26_0 = owlHasValueObject_constraint_store->template begin<0>(C);
		while ( !it26_0.at_end() ) {
			auto P(std::get<2>(*it26_0));
			auto Y(std::get<3>(*it26_0));
			auto it26_1 = owlObjectProperty_constraint_store->template begin<0>(P);
			while ( !it26_1.at_end() ) {
				// Check history
				if (_history.rule_86->check( {{std::get<0>(c_args),std::get<0>(*it26_0),std::get<0>(*it26_1)}} )) {
					it26_0.lock();
					it26_1.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 436 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( U, P, Y )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it26_0.unlock();
						it26_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it26_0.alive()) {
						it26_1.unlock();
						goto it26_0_next;
					}
					it26_0.unlock();
					it26_1.next_and_unlock();
				} // End history
				else {
					++it26_1;
				}
			}
			++it26_0;
			it26_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_27 <=> Rule NO_NAME, active constraint owlClassAssertion( U, C, true ), occurrence 28
	[[maybe_unused]] owlClassAssertion_27:
	{
		if (owlHasValueData_constraint_store->empty()) goto owlClassAssertion_28;
		if (owlDataProperty_constraint_store->empty()) goto owlClassAssertion_28;
		auto& U = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_28;
		auto it27_0 = owlHasValueData_constraint_store->template begin<0>(C);
		while ( !it27_0.at_end() ) {
			auto P(std::get<2>(*it27_0));
			auto Y(std::get<3>(*it27_0));
			auto it27_1 = owlDataProperty_constraint_store->template begin<0>(P);
			while ( !it27_1.at_end() ) {
				// Check history
				if (_history.rule_87->check( {{std::get<0>(c_args),std::get<0>(*it27_0),std::get<0>(*it27_1)}} )) {
					it27_0.lock();
					it27_1.lock();
					if (!c_stored_before) {
						c_it = owlClassAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 437 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlDataPropertyAssertion( U, P, Y )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it27_0.unlock();
						it27_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it27_0.alive()) {
						it27_1.unlock();
						goto it27_0_next;
					}
					it27_0.unlock();
					it27_1.next_and_unlock();
				} // End history
				else {
					++it27_1;
				}
			}
			++it27_0;
			it27_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_28 <=> Rule NO_NAME, active constraint owlClassAssertion( X, C, true ), occurrence 29
	[[maybe_unused]] owlClassAssertion_28:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_29;
		if (owlHasKey_constraint_store->empty()) goto owlClassAssertion_29;
		auto& X = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_29;
		auto it28_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it28_0.at_end() ) {
			auto Y(std::get<1>(*it28_0));
#line 447 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it28_0) != std::get<0>(c_args) )
				&& ( !( X == Y ) )
			) {
				auto it28_1 = owlHasKey_constraint_store->template begin<0>(C);
				while ( !it28_1.at_end() ) {
					auto E(std::get<1>(*it28_1));
					auto P(std::get<2>(*it28_1));
					// Check history
					if (_history.rule_93->check( {{std::get<0>(c_args),std::get<0>(*it28_0),std::get<0>(*it28_1)}} )) {
						it28_0.lock();
						it28_1.lock();
						if (!c_stored_before) {
							c_it = owlClassAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						// Body
						chr::Statistics::inc_nb_rules();
#line 447 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( (*P ) . begin(  ), (*P ) . end(  ), X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it28_0.unlock();
							it28_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it28_0.alive()) {
							it28_1.unlock();
							goto it28_0_next;
						}
						it28_0.unlock();
						it28_1.next_and_unlock();
					} // End history
					else {
						++it28_1;
					}
				}
			} // End guard
			++it28_0;
			it28_0_next:;
		}
	}
	// ***************************************************
	// owlClassAssertion_29 <=> Rule NO_NAME, active constraint owlClassAssertion( Y, C, true ), occurrence 30
	[[maybe_unused]] owlClassAssertion_29:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlClassAssertion_store;
		if (owlHasKey_constraint_store->empty()) goto owlClassAssertion_store;
		auto& Y = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		if (std::get<3>(c_args) != true) goto owlClassAssertion_store;
		auto it29_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it29_0.at_end() ) {
			auto X(std::get<1>(*it29_0));
#line 447 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it29_0) != std::get<0>(c_args) )
				&& ( !( X == Y ) )
			) {
				auto it29_1 = owlHasKey_constraint_store->template begin<0>(C);
				while ( !it29_1.at_end() ) {
					auto E(std::get<1>(*it29_1));
					auto P(std::get<2>(*it29_1));
					// Check history
					if (_history.rule_93->check( {{std::get<0>(c_args),std::get<0>(*it29_0),std::get<0>(*it29_1)}} )) {
						it29_0.lock();
						it29_1.lock();
						if (!c_stored_before) {
							c_it = owlClassAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						// Body
						chr::Statistics::inc_nb_rules();
#line 447 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( (*P ) . begin(  ), (*P ) . end(  ), X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it29_0.unlock();
							it29_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it29_0.alive()) {
							it29_1.unlock();
							goto it29_0_next;
						}
						it29_0.unlock();
						it29_1.next_and_unlock();
					} // End history
					else {
						++it29_1;
					}
				}
			} // End guard
			++it29_0;
			it29_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlClassAssertion_store:
		if (!c_stored_before) {
			c_it = owlClassAssertion_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlClassAssertion::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlComplementOf(typename owlComplementOf::Type c_args, typename owlComplementOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlComplementOf_call:
	// ***************************************************
	// owlComplementOf_0 <=> Rule NO_NAME, active constraint owlComplementOf( A, NOTA ), occurrence 1
	[[maybe_unused]] owlComplementOf_0:
	{
		if (owlNamedIndividual_constraint_store->empty()) goto owlComplementOf_1;
		auto& A = std::get<1>(c_args);
		auto& NOTA = std::get<2>(c_args);
		auto it0_0 = owlNamedIndividual_constraint_store->begin();
		while ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			// Check history
			if (_history.rule_70->check( {{std::get<0>(c_args),std::get<0>(*it0_0)}} )) {
				it0_0.lock();
				if (!c_stored_before) {
					c_it = owlComplementOf_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlComplementOf::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 380 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, NOTA, false )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it0_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it0_0.next_and_unlock();
			} // End history
			else {
				++it0_0;
			}
		}
	}
	// ***************************************************
	// owlComplementOf_1 <=> Rule NO_NAME, active constraint owlComplementOf( A, NOTA ), occurrence 2
	[[maybe_unused]] owlComplementOf_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlComplementOf_2;
		if (owlClassAssertion_constraint_store->empty()) goto owlComplementOf_2;
		auto& A = std::get<1>(c_args);
		auto& NOTA = std::get<2>(c_args);
		auto it1_0 = owlClassAssertion_constraint_store->template begin<1>(NOTA,false);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto it1_1 = owlClassAssertion_constraint_store->template begin<3>(X,A,true);
			while ( !it1_1.at_end() ) {
#line 382 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it1_1) != std::get<0>(*it1_0) )
				) {
					it1_0.lock();
					if (!c_stored_before) {
						c_it = owlComplementOf_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlComplementOf::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					it1_0.kill();
					// Body
					chr::Statistics::inc_nb_rules();
#line 382 "owl.chrpp"

					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it1_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it1_0.next_and_unlock();
					goto it1_0_next;
				} // End guard
				++it1_1;
			}
			++it1_0;
			it1_0_next:;
		}
	}
	// ***************************************************
	// owlComplementOf_2 <=> Rule NO_NAME, active constraint owlComplementOf( A, NOTA ), occurrence 3
	[[maybe_unused]] owlComplementOf_2:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlComplementOf_store;
		if (owlClassAssertion_constraint_store->empty()) goto owlComplementOf_store;
		auto& A = std::get<1>(c_args);
		auto& NOTA = std::get<2>(c_args);
		auto it2_0 = owlClassAssertion_constraint_store->template begin<1>(A,true);
		while ( !it2_0.at_end() ) {
			auto X(std::get<1>(*it2_0));
			auto it2_1 = owlClassAssertion_constraint_store->template begin<3>(X,NOTA,true);
			while ( !it2_1.at_end() ) {
#line 383 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it2_1) != std::get<0>(*it2_0) )
				) {
					if (c_stored_before) {
						c_it.kill();
					}
					it2_0.kill();
					it2_1.kill();
					// Body
					chr::Statistics::inc_nb_rules();
#line 383 "owl.chrpp"
					return chr::failure();
					return chr::ES_CHR::SUCCESS;
				} // End guard
				++it2_1;
			}
			++it2_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlComplementOf_store:
		if (!c_stored_before) {
			c_it = owlComplementOf_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlComplementOf::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDataProperty(typename owlDataProperty::Type c_args, typename owlDataProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDataProperty_call:
	// ***************************************************
	// owlDataProperty_0 <=> Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 1
	[[maybe_unused]] owlDataProperty_0:
	{
		if (owlDataProperty_constraint_store->empty()) goto owlDataProperty_1;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlDataProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 202 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 202 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlDataProperty_1 <=> Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 2
	[[maybe_unused]] owlDataProperty_1:
	{
		auto& P = std::get<1>(c_args);
		// Check history
		if (_history.rule_39->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlDataProperty_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataProperty::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 261 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlObjectSubPropertyOf( P, P )) return chr::ES_CHR::FAILURE;
#line 261 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlEquivalentObjectProperty( P, P )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlDataProperty_2 <=> Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 3
	[[maybe_unused]] owlDataProperty_2:
	{
		auto& P = std::get<1>(c_args);
		// Check history
		if (_history.rule_40->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlDataProperty_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataProperty::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 266 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlDataSubPropertyOf( P, P )) return chr::ES_CHR::FAILURE;
#line 266 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlEquivalentDataProperty( P, P )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlDataProperty_3 <=> Rule NO_NAME, active constraint owlDataProperty( P ), occurrence 4
	[[maybe_unused]] owlDataProperty_3:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlDataProperty_store;
		if (owlHasValueData_constraint_store->empty()) goto owlDataProperty_store;
		auto& P = std::get<1>(c_args);
		auto it3_0 = owlClassAssertion_constraint_store->template begin<2>(true);
		while ( !it3_0.at_end() ) {
			auto U(std::get<1>(*it3_0));
			auto C(std::get<2>(*it3_0));
			auto it3_1 = owlHasValueData_constraint_store->template begin<1>(C,P);
			while ( !it3_1.at_end() ) {
				auto Y(std::get<3>(*it3_1));
				// Check history
				if (_history.rule_87->check( {{std::get<0>(c_args),std::get<0>(*it3_0),std::get<0>(*it3_1)}} )) {
					it3_0.lock();
					it3_1.lock();
					if (!c_stored_before) {
						c_it = owlDataProperty_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataProperty::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 437 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlDataPropertyAssertion( U, P, Y )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it3_0.unlock();
						it3_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it3_0.alive()) {
						it3_1.unlock();
						goto it3_0_next;
					}
					it3_0.unlock();
					it3_1.next_and_unlock();
				} // End history
				else {
					++it3_1;
				}
			}
			++it3_0;
			it3_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDataProperty_store:
		if (!c_stored_before) {
			c_it = owlDataProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDataPropertyAssertion(typename owlDataPropertyAssertion::Type c_args, typename owlDataPropertyAssertion::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDataPropertyAssertion_call:
	// ***************************************************
	// owlDataPropertyAssertion_0 <=> Rule NegativeDataAssertion, active constraint owlDataPropertyAssertion( X, P, Y ), occurrence 1
	[[maybe_unused]] owlDataPropertyAssertion_0:
	{
		if (owlNegativeDataAssertion_constraint_store->empty()) goto owlDataPropertyAssertion_1;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlNegativeDataAssertion_constraint_store->template begin<0>(X,P,Y);
		if ( !it0_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it0_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 236 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_1 <=> Rule DisjointDataProperty, active constraint owlDataPropertyAssertion( X, P1, Y ), occurrence 2
	[[maybe_unused]] owlDataPropertyAssertion_1:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDataPropertyAssertion_2;
		if (owlDisjointDataProperty_constraint_store->empty()) goto owlDataPropertyAssertion_2;
		auto& X = std::get<1>(c_args);
		auto& P1 = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlDataPropertyAssertion_constraint_store->template begin<0>(X,Y);
		while ( !it1_0.at_end() ) {
			auto P2(std::get<2>(*it1_0));
#line 239 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it1_0) != std::get<0>(c_args) )
			) {
				auto it1_1 = owlDisjointDataProperty_constraint_store->begin();
				while ( !it1_1.at_end() ) {
					auto L(std::get<1>(*it1_1));
#line 239 "owl.chrpp"
					// Begin guard
					if (
						contains( P1, L )
						&& contains( P2, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it1_0.kill();
						it1_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 239 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it1_1;
				}
			} // End guard
			++it1_0;
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_2 <=> Rule DisjointDataProperty, active constraint owlDataPropertyAssertion( X, P2, Y ), occurrence 3
	[[maybe_unused]] owlDataPropertyAssertion_2:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDataPropertyAssertion_3;
		if (owlDisjointDataProperty_constraint_store->empty()) goto owlDataPropertyAssertion_3;
		auto& X = std::get<1>(c_args);
		auto& P2 = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it2_0 = owlDataPropertyAssertion_constraint_store->template begin<0>(X,Y);
		while ( !it2_0.at_end() ) {
			auto P1(std::get<2>(*it2_0));
#line 239 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it2_0) != std::get<0>(c_args) )
			) {
				auto it2_1 = owlDisjointDataProperty_constraint_store->begin();
				while ( !it2_1.at_end() ) {
					auto L(std::get<1>(*it2_1));
#line 239 "owl.chrpp"
					// Begin guard
					if (
						contains( P1, L )
						&& contains( P2, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it2_0.kill();
						it2_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 239 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it2_1;
				}
			} // End guard
			++it2_0;
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_3 <=> Rule DataPropertyDomain, active constraint owlDataPropertyAssertion( X, P, _ ), occurrence 4
	[[maybe_unused]] owlDataPropertyAssertion_3:
	{
		if (owlDataPropertyDomain_constraint_store->empty()) goto owlDataPropertyAssertion_4;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto it3_0 = owlDataPropertyDomain_constraint_store->template begin<0>(P);
		while ( !it3_0.at_end() ) {
			auto DP(std::get<2>(*it3_0));
			// Check history
			if (_history.rule_46->check( {{std::get<0>(c_args),std::get<0>(*it3_0)}} )) {
				it3_0.lock();
				if (!c_stored_before) {
					c_it = owlDataPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 302 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, DP, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it3_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it3_0.next_and_unlock();
			} // End history
			else {
				++it3_0;
			}
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_4 <=> Rule DataPropertyRange, active constraint owlDataPropertyAssertion( _, P, Y ), occurrence 5
	[[maybe_unused]] owlDataPropertyAssertion_4:
	{
		if (owlDataPropertyRange_constraint_store->empty()) goto owlDataPropertyAssertion_5;
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it4_0 = owlDataPropertyRange_constraint_store->template begin<0>(P);
		while ( !it4_0.at_end() ) {
			auto DR(std::get<2>(*it4_0));
#line 303 "owl.chrpp"
			// Begin guard
			if (
				invalidType( DR, Y )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				it4_0.kill();
				// Body
				chr::Statistics::inc_nb_rules();
#line 303 "owl.chrpp"
				return chr::failure();
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it4_0;
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_5 <=> Rule NO_NAME, active constraint owlDataPropertyAssertion( U, P, Y ), occurrence 6
	[[maybe_unused]] owlDataPropertyAssertion_5:
	{
		if (owlHasValueData_constraint_store->empty()) goto owlDataPropertyAssertion_6;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it5_0 = owlHasValueData_constraint_store->template begin<2>(P,Y);
		while ( !it5_0.at_end() ) {
			auto C(std::get<1>(*it5_0));
			// Check history
			if (_history.rule_89->check( {{std::get<0>(c_args),std::get<0>(*it5_0)}} )) {
				it5_0.lock();
				if (!c_stored_before) {
					c_it = owlDataPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 439 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it5_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it5_0.next_and_unlock();
			} // End history
			else {
				++it5_0;
			}
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_6 <=> Rule NO_NAME, active constraint owlDataPropertyAssertion( X, P, V1 ), occurrence 7
	[[maybe_unused]] owlDataPropertyAssertion_6:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDataPropertyAssertion_7;
		if (owlHasKeyLoop_constraint_store->empty()) goto owlDataPropertyAssertion_7;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V1 = std::get<3>(c_args);
		auto it6_0 = owlDataPropertyAssertion_constraint_store->template begin<1>(P,V1);
		while ( !it6_0.at_end() ) {
			auto Y(std::get<1>(*it6_0));
#line 450 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it6_0) != std::get<0>(c_args) )
			) {
				auto it6_1 = owlHasKeyLoop_constraint_store->template begin<0>(X,Y);
				while ( !it6_1.at_end() ) {
					auto IT(std::get<1>(*it6_1));
					auto ITEND(std::get<2>(*it6_1));
#line 450 "owl.chrpp"
					// Begin guard
					if (
						( P == ( *( *IT ) ) )
					) {
						it6_0.lock();
						it6_1.lock();
						if (!c_stored_before) {
							c_it = owlDataPropertyAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataPropertyAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						it6_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 450 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( ( std :: next )( (*IT ) ), ITEND, X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it6_0.unlock();
							it6_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it6_0.alive()) {
							it6_1.unlock();
							goto it6_0_next;
						}
						it6_0.unlock();
						it6_1.next_and_unlock();
						goto it6_1_next;
					} // End guard
					++it6_1;
					it6_1_next:;
				}
			} // End guard
			++it6_0;
			it6_0_next:;
		}
	}
	// ***************************************************
	// owlDataPropertyAssertion_7 <=> Rule NO_NAME, active constraint owlDataPropertyAssertion( Y, P, V1 ), occurrence 8
	[[maybe_unused]] owlDataPropertyAssertion_7:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDataPropertyAssertion_store;
		if (owlHasKeyLoop_constraint_store->empty()) goto owlDataPropertyAssertion_store;
		auto& Y = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V1 = std::get<3>(c_args);
		auto it7_0 = owlDataPropertyAssertion_constraint_store->template begin<1>(P,V1);
		while ( !it7_0.at_end() ) {
			auto X(std::get<1>(*it7_0));
#line 450 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it7_0) != std::get<0>(c_args) )
			) {
				auto it7_1 = owlHasKeyLoop_constraint_store->template begin<0>(X,Y);
				while ( !it7_1.at_end() ) {
					auto IT(std::get<1>(*it7_1));
					auto ITEND(std::get<2>(*it7_1));
#line 450 "owl.chrpp"
					// Begin guard
					if (
						( P == ( *( *IT ) ) )
					) {
						it7_0.lock();
						it7_1.lock();
						if (!c_stored_before) {
							c_it = owlDataPropertyAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataPropertyAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						it7_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 450 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( ( std :: next )( (*IT ) ), ITEND, X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it7_0.unlock();
							it7_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it7_0.alive()) {
							it7_1.unlock();
							goto it7_0_next;
						}
						it7_0.unlock();
						it7_1.next_and_unlock();
						goto it7_1_next;
					} // End guard
					++it7_1;
					it7_1_next:;
				}
			} // End guard
			++it7_0;
			it7_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDataPropertyAssertion_store:
		if (!c_stored_before) {
			c_it = owlDataPropertyAssertion_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDataPropertyAssertion::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDataPropertyDomain(typename owlDataPropertyDomain::Type c_args, typename owlDataPropertyDomain::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDataPropertyDomain_call:
	// ***************************************************
	// owlDataPropertyDomain_0 <=> Rule DataPropertyDomain, active constraint owlDataPropertyDomain( P, DP ), occurrence 1
	[[maybe_unused]] owlDataPropertyDomain_0:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDataPropertyDomain_store;
		auto& P = std::get<1>(c_args);
		auto& DP = std::get<2>(c_args);
		auto it0_0 = owlDataPropertyAssertion_constraint_store->template begin<2>(P);
		while ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			// Check history
			if (_history.rule_46->check( {{std::get<0>(c_args),std::get<0>(*it0_0)}} )) {
				it0_0.lock();
				if (!c_stored_before) {
					c_it = owlDataPropertyDomain_constraint_store->add(c_args);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 302 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, DP, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it0_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it0_0.next_and_unlock();
			} // End history
			else {
				++it0_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlDataPropertyDomain_store:
		if (!c_stored_before) {
			(void) owlDataPropertyDomain_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDataPropertyRange(typename owlDataPropertyRange::Type c_args, typename owlDataPropertyRange::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDataPropertyRange_call:
	// ***************************************************
	// owlDataPropertyRange_0 <=> Rule DataPropertyRange, active constraint owlDataPropertyRange( P, DR ), occurrence 1
	[[maybe_unused]] owlDataPropertyRange_0:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDataPropertyRange_store;
		auto& P = std::get<1>(c_args);
		auto& DR = std::get<2>(c_args);
		auto it0_0 = owlDataPropertyAssertion_constraint_store->template begin<2>(P);
		while ( !it0_0.at_end() ) {
			auto Y(std::get<3>(*it0_0));
#line 303 "owl.chrpp"
			// Begin guard
			if (
				invalidType( DR, Y )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				it0_0.kill();
				// Body
				chr::Statistics::inc_nb_rules();
#line 303 "owl.chrpp"
				return chr::failure();
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDataPropertyRange_store:
		if (!c_stored_before) {
			(void) owlDataPropertyRange_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDataSubPropertyOf(typename owlDataSubPropertyOf::Type c_args, typename owlDataSubPropertyOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDataSubPropertyOf_call:
	// ***************************************************
	// owlDataSubPropertyOf_0 <=> Rule NO_NAME, active constraint owlDataSubPropertyOf( A, B ), occurrence 1
	[[maybe_unused]] owlDataSubPropertyOf_0:
	{
		if (owlDataSubPropertyOf_constraint_store->empty()) goto owlDataSubPropertyOf_1;
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
		auto it0_0 = owlDataSubPropertyOf_constraint_store->template begin<0>(B);
		while ( !it0_0.at_end() ) {
			auto C(std::get<2>(*it0_0));
#line 267 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
				&& guard_condition( A, B, C )
			) {
				// Check history
				if (_history.rule_41->check( {{std::get<0>(c_args),std::get<0>(*it0_0)}} )) {
					it0_0.lock();
					if (!c_stored_before) {
						c_it = owlDataSubPropertyOf_constraint_store->add(c_args);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 267 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlDataSubPropertyOf( A, C )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it0_0.next_and_unlock();
					goto it0_0_next;
				} // End history
				else {
					++it0_0;
					goto it0_0_next;
				}
			} // End guard
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// owlDataSubPropertyOf_1 <=> Rule NO_NAME, active constraint owlDataSubPropertyOf( B, C ), occurrence 2
	[[maybe_unused]] owlDataSubPropertyOf_1:
	{
		if (owlDataSubPropertyOf_constraint_store->empty()) goto owlDataSubPropertyOf_2;
		auto& B = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		auto it1_0 = owlDataSubPropertyOf_constraint_store->template begin<1>(B);
		while ( !it1_0.at_end() ) {
			auto A(std::get<1>(*it1_0));
#line 267 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it1_0) != std::get<0>(c_args) )
				&& guard_condition( A, B, C )
			) {
				// Check history
				if (_history.rule_41->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
					it1_0.lock();
					if (!c_stored_before) {
						c_it = owlDataSubPropertyOf_constraint_store->add(c_args);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 267 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlDataSubPropertyOf( A, C )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it1_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it1_0.next_and_unlock();
					goto it1_0_next;
				} // End history
				else {
					++it1_0;
					goto it1_0_next;
				}
			} // End guard
			++it1_0;
			it1_0_next:;
		}
	}
	// ***************************************************
	// owlDataSubPropertyOf_2 <=> Rule NO_NAME, active constraint owlDataSubPropertyOf( A, B ), occurrence 3
	[[maybe_unused]] owlDataSubPropertyOf_2:
	{
		if (owlDataSubPropertyOf_constraint_store->empty()) goto owlDataSubPropertyOf_3;
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
#line 269 "owl.chrpp"
		// Begin guard
		if (
			different( A, B )
		) {
			auto it2_0 = owlDataSubPropertyOf_constraint_store->template begin<2>(B,A);
			while ( !it2_0.at_end() ) {
#line 269 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it2_0) != std::get<0>(c_args) )
				) {
					// Check history
					if (_history.rule_43->check( {{std::get<0>(c_args),std::get<0>(*it2_0)}} )) {
						it2_0.lock();
						if (!c_stored_before) {
							c_it = owlDataSubPropertyOf_constraint_store->add(c_args);
							c_stored_before = true;
						}
						c_it.lock();
						// Body
						chr::Statistics::inc_nb_rules();
#line 269 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlEquivalentDataProperty( A, B )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it2_0.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						it2_0.next_and_unlock();
						goto it2_0_next;
					} // End history
					else {
						++it2_0;
						goto it2_0_next;
					}
				} // End guard
				++it2_0;
				it2_0_next:;
			}
		} // End guard
	}
	// ***************************************************
	// owlDataSubPropertyOf_3 <=> Rule NO_NAME, active constraint owlDataSubPropertyOf( B, A ), occurrence 4
	[[maybe_unused]] owlDataSubPropertyOf_3:
	{
		if (owlDataSubPropertyOf_constraint_store->empty()) goto owlDataSubPropertyOf_store;
		auto& B = std::get<1>(c_args);
		auto& A = std::get<2>(c_args);
#line 269 "owl.chrpp"
		// Begin guard
		if (
			different( A, B )
		) {
			auto it3_0 = owlDataSubPropertyOf_constraint_store->template begin<2>(A,B);
			while ( !it3_0.at_end() ) {
#line 269 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it3_0) != std::get<0>(c_args) )
				) {
					// Check history
					if (_history.rule_43->check( {{std::get<0>(c_args),std::get<0>(*it3_0)}} )) {
						it3_0.lock();
						if (!c_stored_before) {
							c_it = owlDataSubPropertyOf_constraint_store->add(c_args);
							c_stored_before = true;
						}
						c_it.lock();
						// Body
						chr::Statistics::inc_nb_rules();
#line 269 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlEquivalentDataProperty( A, B )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it3_0.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						it3_0.next_and_unlock();
						goto it3_0_next;
					} // End history
					else {
						++it3_0;
						goto it3_0_next;
					}
				} // End guard
				++it3_0;
				it3_0_next:;
			}
		} // End guard
	}
	// Store constraint
	[[maybe_unused]] owlDataSubPropertyOf_store:
		if (!c_stored_before) {
			(void) owlDataSubPropertyOf_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDifferentIndividual(typename owlDifferentIndividual::Type c_args, typename owlDifferentIndividual::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDifferentIndividual_call:
	// ***************************************************
	// owlDifferentIndividual_0 <=> Rule NO_NAME, active constraint owlDifferentIndividual( X, Y ), occurrence 1
	[[maybe_unused]] owlDifferentIndividual_0:
	{
		if (owlDifferentIndividual_constraint_store->empty()) goto owlDifferentIndividual_1;
		auto& X = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		auto it0_0 = owlDifferentIndividual_constraint_store->template begin<0>(X,Y);
		while ( !it0_0.at_end() ) {
#line 209 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 209 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlDifferentIndividual_1 <=> Rule DifferentIndividual, active constraint owlDifferentIndividual( X, Y ), occurrence 2
	[[maybe_unused]] owlDifferentIndividual_1:
	{
		if (owlSameIndividual_constraint_store->empty()) goto owlDifferentIndividual_store;
		auto& X = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		auto it1_0 = owlSameIndividual_constraint_store->template begin<0>(X,Y);
		if ( !it1_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it1_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 309 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDifferentIndividual_store:
		if (!c_stored_before) {
			c_it = owlDifferentIndividual_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDifferentIndividual::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDisjointClass(typename owlDisjointClass::Type c_args, typename owlDisjointClass::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDisjointClass_call:
	// ***************************************************
	// owlDisjointClass_0 <=> Rule NO_NAME, active constraint owlDisjointClass( L ), occurrence 1
	[[maybe_unused]] owlDisjointClass_0:
	{
		if (owlDisjointClass_constraint_store->empty()) goto owlDisjointClass_1;
		auto& L = std::get<1>(c_args);
		auto it0_0 = owlDisjointClass_constraint_store->template begin<0>(L);
		while ( !it0_0.at_end() ) {
#line 205 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 205 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlDisjointClass_1 <=> Rule DisjointClass, active constraint owlDisjointClass( L ), occurrence 2
	[[maybe_unused]] owlDisjointClass_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlDisjointClass_store;
		if (owlClassAssertion_constraint_store->empty()) goto owlDisjointClass_store;
		auto& L = std::get<1>(c_args);
		auto it1_0 = owlClassAssertion_constraint_store->template begin<2>(true);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto A(std::get<2>(*it1_0));
#line 228 "owl.chrpp"
			// Begin guard
			if (
				contains( A, L )
			) {
				auto it1_1 = owlClassAssertion_constraint_store->template begin<0>(X,true);
				while ( !it1_1.at_end() ) {
					auto B(std::get<2>(*it1_1));
#line 228 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it1_1) != std::get<0>(*it1_0) )
						&& contains( B, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it1_0.kill();
						it1_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 228 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it1_1;
				}
			} // End guard
			++it1_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDisjointClass_store:
		if (!c_stored_before) {
			c_it = owlDisjointClass_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDisjointClass::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDisjointDataProperty(typename owlDisjointDataProperty::Type c_args, typename owlDisjointDataProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDisjointDataProperty_call:
	// ***************************************************
	// owlDisjointDataProperty_0 <=> Rule DisjointDataProperty, active constraint owlDisjointDataProperty( L ), occurrence 1
	[[maybe_unused]] owlDisjointDataProperty_0:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDisjointDataProperty_store;
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlDisjointDataProperty_store;
		auto& L = std::get<1>(c_args);
		auto it0_0 = owlDataPropertyAssertion_constraint_store->begin();
		while ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			auto P1(std::get<2>(*it0_0));
			auto Y(std::get<3>(*it0_0));
#line 239 "owl.chrpp"
			// Begin guard
			if (
				contains( P1, L )
			) {
				auto it0_1 = owlDataPropertyAssertion_constraint_store->template begin<0>(X,Y);
				while ( !it0_1.at_end() ) {
					auto P2(std::get<2>(*it0_1));
#line 239 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it0_1) != std::get<0>(*it0_0) )
						&& contains( P2, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it0_0.kill();
						it0_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 239 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it0_1;
				}
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDisjointDataProperty_store:
		if (!c_stored_before) {
			c_it = owlDisjointDataProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDisjointDataProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlDisjointObjectProperty(typename owlDisjointObjectProperty::Type c_args, typename owlDisjointObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlDisjointObjectProperty_call:
	// ***************************************************
	// owlDisjointObjectProperty_0 <=> Rule NO_NAME, active constraint owlDisjointObjectProperty( L ), occurrence 1
	[[maybe_unused]] owlDisjointObjectProperty_0:
	{
		if (owlDisjointObjectProperty_constraint_store->empty()) goto owlDisjointObjectProperty_1;
		auto& L = std::get<1>(c_args);
		auto it0_0 = owlDisjointObjectProperty_constraint_store->template begin<0>(L);
		while ( !it0_0.at_end() ) {
#line 207 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 207 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlDisjointObjectProperty_1 <=> Rule DisjointProperty, active constraint owlDisjointObjectProperty( L ), occurrence 2
	[[maybe_unused]] owlDisjointObjectProperty_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlDisjointObjectProperty_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlDisjointObjectProperty_store;
		auto& L = std::get<1>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->begin();
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto P1(std::get<2>(*it1_0));
			auto Y(std::get<3>(*it1_0));
#line 232 "owl.chrpp"
			// Begin guard
			if (
				contains( P1, L )
			) {
				auto it1_1 = owlObjectPropertyAssertion_constraint_store->template begin<3>(X,Y);
				while ( !it1_1.at_end() ) {
					auto P2(std::get<2>(*it1_1));
#line 232 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it1_1) != std::get<0>(*it1_0) )
						&& contains( P2, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it1_0.kill();
						it1_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 232 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it1_1;
				}
			} // End guard
			++it1_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlDisjointObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlDisjointObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlDisjointObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlEquivalentClass(typename owlEquivalentClass::Type c_args, typename owlEquivalentClass::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlEquivalentClass_call:
	// ***************************************************
	// owlEquivalentClass_0 <=> Rule NO_NAME, active constraint owlEquivalentClass( A, B ), occurrence 1
	[[maybe_unused]] owlEquivalentClass_0:
	{
		if (owlEquivalentClass_constraint_store->empty()) goto owlEquivalentClass_store;
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
		auto it0_0 = owlEquivalentClass_constraint_store->template begin<0>(A,B);
		while ( !it0_0.at_end() ) {
#line 222 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 222 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlEquivalentClass_store:
		if (!c_stored_before) {
			c_it = owlEquivalentClass_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlEquivalentClass::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlEquivalentDataProperty(typename owlEquivalentDataProperty::Type c_args, typename owlEquivalentDataProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlEquivalentDataProperty_call:
	// ***************************************************
	// owlEquivalentDataProperty_0 <=> Rule NO_NAME, active constraint owlEquivalentDataProperty( A, B ), occurrence 1
	[[maybe_unused]] owlEquivalentDataProperty_0:
	{
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
#line 268 "owl.chrpp"
		// Begin guard
		if (
			different( A, B )
		) {
			// Check history
			if (_history.rule_42->check( {{std::get<0>(c_args)}} )) {
				// Body
				chr::Statistics::inc_nb_rules();
#line 268 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlDataSubPropertyOf( A, B )) return chr::ES_CHR::FAILURE;
#line 268 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlDataSubPropertyOf( B, A )) return chr::ES_CHR::FAILURE;
			} // End history
		} // End guard
	}
	// Store constraint
	[[maybe_unused]] owlEquivalentDataProperty_store:
		if (!c_stored_before) {
			(void) owlEquivalentDataProperty_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlEquivalentObjectProperty(typename owlEquivalentObjectProperty::Type c_args, typename owlEquivalentObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlEquivalentObjectProperty_call:
	// ***************************************************
	// owlEquivalentObjectProperty_0 <=> Rule NO_NAME, active constraint owlEquivalentObjectProperty( A, B ), occurrence 1
	[[maybe_unused]] owlEquivalentObjectProperty_0:
	{
		if (owlEquivalentObjectProperty_constraint_store->empty()) goto owlEquivalentObjectProperty_store;
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
		auto it0_0 = owlEquivalentObjectProperty_constraint_store->template begin<0>(A,B);
		while ( !it0_0.at_end() ) {
#line 223 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 223 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlEquivalentObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlEquivalentObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlEquivalentObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlFunctionalObjectProperty(typename owlFunctionalObjectProperty::Type c_args, typename owlFunctionalObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlFunctionalObjectProperty_call:
	// ***************************************************
	// owlFunctionalObjectProperty_0 <=> Rule NO_NAME, active constraint owlFunctionalObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlFunctionalObjectProperty_0:
	{
		if (owlFunctionalObjectProperty_constraint_store->empty()) goto owlFunctionalObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlFunctionalObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 215 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 215 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlFunctionalObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlFunctionalObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlFunctionalObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlHasKey(typename owlHasKey::Type c_args, typename owlHasKey::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlHasKey_call:
	// ***************************************************
	// owlHasKey_0 <=> Rule NO_NAME, active constraint owlHasKey( E, P, C ), occurrence 1
	[[maybe_unused]] owlHasKey_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlHasKey_store;
		if (owlClassAssertion_constraint_store->empty()) goto owlHasKey_store;
		auto& E = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& C = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			auto it0_1 = owlClassAssertion_constraint_store->template begin<1>(C,true);
			while ( !it0_1.at_end() ) {
				auto Y(std::get<1>(*it0_1));
#line 447 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it0_1) != std::get<0>(*it0_0) )
					&& ( !( X == Y ) )
				) {
					// Check history
					if (_history.rule_93->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
						it0_0.lock();
						it0_1.lock();
						if (!c_stored_before) {
							c_it = owlHasKey_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasKey::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						// Body
						chr::Statistics::inc_nb_rules();
#line 447 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( (*P ) . begin(  ), (*P ) . end(  ), X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it0_0.unlock();
							it0_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it0_0.alive()) {
							it0_1.unlock();
							goto it0_0_next;
						}
						it0_0.unlock();
						it0_1.next_and_unlock();
						goto it0_1_next;
					} // End history
					else {
						++it0_1;
						goto it0_1_next;
					}
				} // End guard
				++it0_1;
				it0_1_next:;
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlHasKey_store:
		if (!c_stored_before) {
			c_it = owlHasKey_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasKey::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlHasKeyLoop(typename owlHasKeyLoop::Type c_args, typename owlHasKeyLoop::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlHasKeyLoop_call:
	// ***************************************************
	// owlHasKeyLoop_0 <=> Rule NO_NAME, active constraint owlHasKeyLoop( ITEND, ITEND, X, Y ), occurrence 1
	[[maybe_unused]] owlHasKeyLoop_0:
	{
		auto& ITEND = std::get<1>(c_args);
		if (ITEND != std::get<2>(c_args)) goto owlHasKeyLoop_1;
		auto& X = std::get<3>(c_args);
		auto& Y = std::get<4>(c_args);
		if (c_stored_before) {
			c_it.kill();
		}
		// Body
		chr::Statistics::inc_nb_rules();
#line 448 "owl.chrpp"
		if (chr::ES_CHR::FAILURE == owlSameIndividual( X, Y )) return chr::ES_CHR::FAILURE;
		return chr::ES_CHR::SUCCESS;
	}
	// ***************************************************
	// owlHasKeyLoop_1 <=> Rule NO_NAME, active constraint owlHasKeyLoop( IT, ITEND, X, Y ), occurrence 2
	[[maybe_unused]] owlHasKeyLoop_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlHasKeyLoop_2;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlHasKeyLoop_2;
		auto& IT = std::get<1>(c_args);
		auto& ITEND = std::get<2>(c_args);
		auto& X = std::get<3>(c_args);
		auto& Y = std::get<4>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<6>(X);
		while ( !it1_0.at_end() ) {
			auto P(std::get<2>(*it1_0));
			auto V1(std::get<3>(*it1_0));
#line 449 "owl.chrpp"
			// Begin guard
			if (
				( P == ( *( *IT ) ) )
			) {
				auto it1_1 = owlObjectPropertyAssertion_constraint_store->template begin<2>(Y,P,V1);
				while ( !it1_1.at_end() ) {
#line 449 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it1_1) != std::get<0>(*it1_0) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						// Body
						chr::Statistics::inc_nb_rules();
#line 449 "owl.chrpp"
						c_args = std::make_tuple(next_free_constraint_id++, ( std :: next )( (*IT ) ), ITEND, X, Y);
						c_stored_before = false;
						goto owlHasKeyLoop_call;

						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it1_1;
				}
			} // End guard
			++it1_0;
		}
	}
	// ***************************************************
	// owlHasKeyLoop_2 <=> Rule NO_NAME, active constraint owlHasKeyLoop( IT, ITEND, X, Y ), occurrence 3
	[[maybe_unused]] owlHasKeyLoop_2:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlHasKeyLoop_store;
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlHasKeyLoop_store;
		auto& IT = std::get<1>(c_args);
		auto& ITEND = std::get<2>(c_args);
		auto& X = std::get<3>(c_args);
		auto& Y = std::get<4>(c_args);
		auto it2_0 = owlDataPropertyAssertion_constraint_store->template begin<3>(X);
		while ( !it2_0.at_end() ) {
			auto P(std::get<2>(*it2_0));
			auto V1(std::get<3>(*it2_0));
#line 450 "owl.chrpp"
			// Begin guard
			if (
				( P == ( *( *IT ) ) )
			) {
				auto it2_1 = owlDataPropertyAssertion_constraint_store->template begin<4>(Y,P,V1);
				while ( !it2_1.at_end() ) {
#line 450 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it2_1) != std::get<0>(*it2_0) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						// Body
						chr::Statistics::inc_nb_rules();
#line 450 "owl.chrpp"
						c_args = std::make_tuple(next_free_constraint_id++, ( std :: next )( (*IT ) ), ITEND, X, Y);
						c_stored_before = false;
						goto owlHasKeyLoop_call;

						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it2_1;
				}
			} // End guard
			++it2_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlHasKeyLoop_store:
		if (!c_stored_before) {
			c_it = owlHasKeyLoop_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasKeyLoop::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<4>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlHasValueData(typename owlHasValueData::Type c_args, typename owlHasValueData::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlHasValueData_call:
	// ***************************************************
	// owlHasValueData_0 <=> Rule NO_NAME, active constraint owlHasValueData( C, P, Y ), occurrence 1
	[[maybe_unused]] owlHasValueData_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlHasValueData_1;
		if (owlDataProperty_constraint_store->empty()) goto owlHasValueData_1;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it0_0.at_end() ) {
			auto U(std::get<1>(*it0_0));
			auto it0_1 = owlDataProperty_constraint_store->template begin<0>(P);
			while ( !it0_1.at_end() ) {
				// Check history
				if (_history.rule_87->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
					it0_0.lock();
					it0_1.lock();
					if (!c_stored_before) {
						c_it = owlHasValueData_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasValueData::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 437 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlDataPropertyAssertion( U, P, Y )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						it0_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it0_0.alive()) {
						it0_1.unlock();
						goto it0_0_next;
					}
					it0_0.unlock();
					it0_1.next_and_unlock();
				} // End history
				else {
					++it0_1;
				}
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// owlHasValueData_1 <=> Rule NO_NAME, active constraint owlHasValueData( C, P, Y ), occurrence 2
	[[maybe_unused]] owlHasValueData_1:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlHasValueData_store;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlDataPropertyAssertion_constraint_store->template begin<1>(P,Y);
		while ( !it1_0.at_end() ) {
			auto U(std::get<1>(*it1_0));
			// Check history
			if (_history.rule_89->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlHasValueData_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasValueData::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 439 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlHasValueData_store:
		if (!c_stored_before) {
			c_it = owlHasValueData_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasValueData::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlHasValueObject(typename owlHasValueObject::Type c_args, typename owlHasValueObject::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlHasValueObject_call:
	// ***************************************************
	// owlHasValueObject_0 <=> Rule NO_NAME, active constraint owlHasValueObject( C, P, Y ), occurrence 1
	[[maybe_unused]] owlHasValueObject_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlHasValueObject_1;
		if (owlObjectProperty_constraint_store->empty()) goto owlHasValueObject_1;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it0_0.at_end() ) {
			auto U(std::get<1>(*it0_0));
			auto it0_1 = owlObjectProperty_constraint_store->template begin<0>(P);
			while ( !it0_1.at_end() ) {
				// Check history
				if (_history.rule_86->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
					it0_0.lock();
					it0_1.lock();
					if (!c_stored_before) {
						c_it = owlHasValueObject_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasValueObject::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 436 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( U, P, Y )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						it0_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it0_0.alive()) {
						it0_1.unlock();
						goto it0_0_next;
					}
					it0_0.unlock();
					it0_1.next_and_unlock();
				} // End history
				else {
					++it0_1;
				}
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// owlHasValueObject_1 <=> Rule NO_NAME, active constraint owlHasValueObject( C, P, Y ), occurrence 2
	[[maybe_unused]] owlHasValueObject_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlHasValueObject_store;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<5>(P,Y);
		while ( !it1_0.at_end() ) {
			auto U(std::get<1>(*it1_0));
			// Check history
			if (_history.rule_88->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlHasValueObject_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasValueObject::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 438 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlHasValueObject_store:
		if (!c_stored_before) {
			c_it = owlHasValueObject_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlHasValueObject::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlIntersectionClass(typename owlIntersectionClass::Type c_args, typename owlIntersectionClass::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlIntersectionClass_call:
	// ***************************************************
	// owlIntersectionClass_0 <=> Rule r2, active constraint owlIntersectionClass( C, V, 0 ), occurrence 1
	[[maybe_unused]] owlIntersectionClass_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlIntersectionClass_1;
		auto& C = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		if (std::get<3>(c_args) != 0) goto owlIntersectionClass_1;
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(V,true);
		while ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			// Check history
			if (_history.rule_62->check( {{std::get<0>(c_args),std::get<0>(*it0_0)}} )) {
				it0_0.lock();
				if (!c_stored_before) {
					c_it = owlIntersectionClass_constraint_store->add(c_args);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 355 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlCandidatsIntersection( X, C, 0 )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it0_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it0_0.next_and_unlock();
			} // End history
			else {
				++it0_0;
			}
		}
	}
	// ***************************************************
	// owlIntersectionClass_1 <=> Rule r3, active constraint owlIntersectionClass( C, V, I ), occurrence 2
	[[maybe_unused]] owlIntersectionClass_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlIntersectionClass_2;
		if (owlCandidatsIntersection_constraint_store->empty()) goto owlIntersectionClass_2;
		auto& C = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		auto& I = std::get<3>(c_args);
		auto it1_0 = owlClassAssertion_constraint_store->template begin<1>(V,true);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto it1_1 = owlCandidatsIntersection_constraint_store->template begin<0>(X,C,I);
			while ( !it1_1.at_end() ) {
				// Check history
				if (_history.rule_63->check( {{std::get<0>(c_args),std::get<0>(*it1_0),std::get<0>(*it1_1)}} )) {
					it1_0.lock();
					it1_1.lock();
					if (!c_stored_before) {
						c_it = owlIntersectionClass_constraint_store->add(c_args);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 359 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlCandidatsIntersection( X, C, ( I + 1 ) )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it1_0.unlock();
						it1_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it1_0.alive()) {
						it1_1.unlock();
						goto it1_0_next;
					}
					it1_0.unlock();
					it1_1.next_and_unlock();
				} // End history
				else {
					++it1_1;
				}
			}
			++it1_0;
			it1_0_next:;
		}
	}
	// ***************************************************
	// owlIntersectionClass_2 <=> Rule NO_NAME, active constraint owlIntersectionClass( C, C1, _ ), occurrence 3
	[[maybe_unused]] owlIntersectionClass_2:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlIntersectionClass_store;
		auto& C = std::get<1>(c_args);
		auto& C1 = std::get<2>(c_args);
		auto it2_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it2_0.at_end() ) {
			auto X(std::get<1>(*it2_0));
			// Check history
			if (_history.rule_66->check( {{std::get<0>(c_args),std::get<0>(*it2_0)}} )) {
				it2_0.lock();
				if (!c_stored_before) {
					c_it = owlIntersectionClass_constraint_store->add(c_args);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 369 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C1, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it2_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it2_0.next_and_unlock();
			} // End history
			else {
				++it2_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlIntersectionClass_store:
		if (!c_stored_before) {
			(void) owlIntersectionClass_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlIntersectionOf(typename owlIntersectionOf::Type c_args, typename owlIntersectionOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlIntersectionOf_call:
	// ***************************************************
	// owlIntersectionOf_0 <=> Rule r1, active constraint owlIntersectionOf( C, IT, ITEND, I ), occurrence 1
	[[maybe_unused]] owlIntersectionOf_0:
	{
		auto& C = std::get<1>(c_args);
		auto& IT = std::get<2>(c_args);
		auto& ITEND = std::get<3>(c_args);
		auto& I = std::get<4>(c_args);
#line 351 "owl.chrpp"
		// Begin guard
		if (
			( IT != ITEND )
		) {
			if (c_stored_before) {
				c_it.kill();
			}
			// Body
			chr::Statistics::inc_nb_rules();
#line 351 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlIntersectionClass( C, (*(*IT ) ), I )) return chr::ES_CHR::FAILURE;
#line 351 "owl.chrpp"
			c_args = std::forward_as_tuple(next_free_constraint_id++, C, ( std :: next )( (*IT ) ), ITEND, ( I + 1 ));
			c_stored_before = false;
			goto owlIntersectionOf_call;

			return chr::ES_CHR::SUCCESS;
		} // End guard
	}
	// ***************************************************
	// owlIntersectionOf_1 <=> Rule r5, active constraint owlIntersectionOf( C, ITEND, ITEND, I ), occurrence 2
	[[maybe_unused]] owlIntersectionOf_1:
	{
		if (owlCandidatsIntersection_constraint_store->empty()) goto owlIntersectionOf_2;
		auto& C = std::get<1>(c_args);
		auto& ITEND = std::get<2>(c_args);
		if (ITEND != std::get<3>(c_args)) goto owlIntersectionOf_2;
		auto& I = std::get<4>(c_args);
		auto it1_0 = owlCandidatsIntersection_constraint_store->template begin<1>(C,I);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			it1_0.lock();
			if (!c_stored_before) {
				c_it = owlIntersectionOf_constraint_store->add(c_args);
				c_stored_before = true;
			}
			c_it.lock();
			it1_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 363 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C, true )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				it1_0.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
			it1_0.next_and_unlock();
		}
	}
	// ***************************************************
	// owlIntersectionOf_2 <=> Rule r4, active constraint owlIntersectionOf( C, ITEND, ITEND, I ), occurrence 3
	[[maybe_unused]] owlIntersectionOf_2:
	{
		auto& C = std::get<1>(c_args);
		auto& ITEND = std::get<2>(c_args);
		if (ITEND != std::get<3>(c_args)) goto owlIntersectionOf_store;
		auto& I = std::get<4>(c_args);
		if (c_stored_before) {
			c_it.kill();
		}
		// Body
		chr::Statistics::inc_nb_rules();
#line 366 "owl.chrpp"

		return chr::ES_CHR::SUCCESS;
	}
	// Store constraint
	[[maybe_unused]] owlIntersectionOf_store:
		if (!c_stored_before) {
			(void) owlIntersectionOf_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlIntersectionOf1(typename owlIntersectionOf1::Type c_args, typename owlIntersectionOf1::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlIntersectionOf1_call:
	// ***************************************************
	// owlIntersectionOf1_0 <=> Rule r0, active constraint owlIntersectionOf1( C, S ), occurrence 1
	[[maybe_unused]] owlIntersectionOf1_0:
	{
		auto& C = std::get<1>(c_args);
		auto& S = std::get<2>(c_args);
		// Check history
		if (_history.rule_60->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlIntersectionOf1_constraint_store->add(c_args);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 348 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlIntersectionOf( C, (*S ) . begin(  ), (*S ) . end(  ), 0 )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// Store constraint
	[[maybe_unused]] owlIntersectionOf1_store:
		if (!c_stored_before) {
			(void) owlIntersectionOf1_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlInverseFunctionalObjectProperty(typename owlInverseFunctionalObjectProperty::Type c_args, typename owlInverseFunctionalObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlInverseFunctionalObjectProperty_call:
	// ***************************************************
	// owlInverseFunctionalObjectProperty_0 <=> Rule NO_NAME, active constraint owlInverseFunctionalObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlInverseFunctionalObjectProperty_0:
	{
		if (owlInverseFunctionalObjectProperty_constraint_store->empty()) goto owlInverseFunctionalObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlInverseFunctionalObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 216 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 216 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlInverseFunctionalObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlInverseFunctionalObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlInverseFunctionalObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlInverseObjectProperty(typename owlInverseObjectProperty::Type c_args, typename owlInverseObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlInverseObjectProperty_call:
	// ***************************************************
	// owlInverseObjectProperty_0 <=> Rule NO_NAME, active constraint owlInverseObjectProperty( P1, P2 ), occurrence 1
	[[maybe_unused]] owlInverseObjectProperty_0:
	{
		if (owlInverseObjectProperty_constraint_store->empty()) goto owlInverseObjectProperty_1;
		auto& P1 = std::get<1>(c_args);
		auto& P2 = std::get<2>(c_args);
		auto it0_0 = owlInverseObjectProperty_constraint_store->template begin<0>(P1,P2);
		while ( !it0_0.at_end() ) {
#line 210 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 210 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlInverseObjectProperty_1 <=> Rule inverseProperty, active constraint owlInverseObjectProperty( P1, P2 ), occurrence 2
	[[maybe_unused]] owlInverseObjectProperty_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlInverseObjectProperty_2;
		auto& P1 = std::get<1>(c_args);
		auto& P2 = std::get<2>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P1);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto Y(std::get<3>(*it1_0));
			// Check history
			if (_history.rule_50->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlInverseObjectProperty_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlInverseObjectProperty::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 312 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( Y, P2, X )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// ***************************************************
	// owlInverseObjectProperty_2 <=> Rule NO_NAME, active constraint owlInverseObjectProperty( P1, P2 ), occurrence 3
	[[maybe_unused]] owlInverseObjectProperty_2:
	{
		auto& P1 = std::get<1>(c_args);
		auto& P2 = std::get<2>(c_args);
		// Check history
		if (_history.rule_51->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlInverseObjectProperty_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlInverseObjectProperty::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 313 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlInverseObjectProperty( P2, P1 )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// Store constraint
	[[maybe_unused]] owlInverseObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlInverseObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlInverseObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlIrreflexiveObjectProperty(typename owlIrreflexiveObjectProperty::Type c_args, typename owlIrreflexiveObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlIrreflexiveObjectProperty_call:
	// ***************************************************
	// owlIrreflexiveObjectProperty_0 <=> Rule NO_NAME, active constraint owlIrreflexiveObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlIrreflexiveObjectProperty_0:
	{
		if (owlIrreflexiveObjectProperty_constraint_store->empty()) goto owlIrreflexiveObjectProperty_1;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlIrreflexiveObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 214 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 214 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlIrreflexiveObjectProperty_1 <=> Rule irreflexiveProperty, active constraint owlIrreflexiveObjectProperty( P ), occurrence 2
	[[maybe_unused]] owlIrreflexiveObjectProperty_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlIrreflexiveObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto _LV_0_(std::get<3>(*it1_0));
#line 234 "owl.chrpp"
			// Begin guard
			if (
				( _LV_0_ == X )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				it1_0.kill();
				// Body
				chr::Statistics::inc_nb_rules();
#line 234 "owl.chrpp"
				return chr::failure();
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it1_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlIrreflexiveObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlIrreflexiveObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlIrreflexiveObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlMaxCardinality(typename owlMaxCardinality::Type c_args, typename owlMaxCardinality::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlMaxCardinality_call:
	// ***************************************************
	// owlMaxCardinality_0 <=> Rule NO_NAME, active constraint owlMaxCardinality( C, P, 0 ), occurrence 1
	[[maybe_unused]] owlMaxCardinality_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxCardinality_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlMaxCardinality_1;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		if (std::get<3>(c_args) != 0) goto owlMaxCardinality_1;
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it0_0.at_end() ) {
			auto U(std::get<1>(*it0_0));
			auto it0_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			if ( !it0_1.at_end() ) {
				if (c_stored_before) {
					c_it.kill();
				}
				it0_0.kill();
				it0_1.kill();
				// Body
				chr::Statistics::inc_nb_rules();
#line 430 "owl.chrpp"
				return chr::failure();
				return chr::ES_CHR::SUCCESS;
			}
			++it0_0;
		}
	}
	// ***************************************************
	// owlMaxCardinality_1 <=> Rule NO_NAME, active constraint owlMaxCardinality( C, P, 1 ), occurrence 2
	[[maybe_unused]] owlMaxCardinality_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxCardinality_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlMaxCardinality_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlMaxCardinality_store;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		if (std::get<3>(c_args) != 1) goto owlMaxCardinality_store;
		auto it1_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it1_0.at_end() ) {
			auto U(std::get<1>(*it1_0));
			auto it1_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
			while ( !it1_1.at_end() ) {
				auto Y1(std::get<3>(*it1_1));
				auto it1_2 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
				while ( !it1_2.at_end() ) {
					auto Y2(std::get<3>(*it1_2));
#line 431 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it1_2) != std::get<0>(*it1_1) )
						&& ( !( Y1 == Y2 ) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it1_0.kill();
						it1_1.kill();
						it1_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 431 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it1_2;
				}
				++it1_1;
			}
			++it1_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlMaxCardinality_store:
		if (!c_stored_before) {
			c_it = owlMaxCardinality_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlMaxCardinality::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlMaxQualifiedCardinality(typename owlMaxQualifiedCardinality::Type c_args, typename owlMaxQualifiedCardinality::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlMaxQualifiedCardinality_call:
	// ***************************************************
	// owlMaxQualifiedCardinality_0 <=> Rule NO_NAME, active constraint owlMaxQualifiedCardinality( X, P, C, 0 ), occurrence 1
	[[maybe_unused]] owlMaxQualifiedCardinality_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_1;
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_1;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& C = std::get<3>(c_args);
		if (std::get<4>(c_args) != 0) goto owlMaxQualifiedCardinality_1;
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(X,true);
		while ( !it0_0.at_end() ) {
			auto U(std::get<1>(*it0_0));
			auto it0_1 = owlClassAssertion_constraint_store->template begin<1>(C,true);
			while ( !it0_1.at_end() ) {
				auto Y(std::get<1>(*it0_1));
#line 433 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it0_1) != std::get<0>(*it0_0) )
				) {
					auto it0_2 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y);
					if ( !it0_2.at_end() ) {
						if (c_stored_before) {
							c_it.kill();
						}
						it0_0.kill();
						it0_1.kill();
						it0_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 433 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					}
				} // End guard
				++it0_1;
			}
			++it0_0;
		}
	}
	// ***************************************************
	// owlMaxQualifiedCardinality_1 <=> Rule NO_NAME, active constraint owlMaxQualifiedCardinality( X, P, C, 1 ), occurrence 2
	[[maybe_unused]] owlMaxQualifiedCardinality_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_store;
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_store;
		if (owlClassAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlMaxQualifiedCardinality_store;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& C = std::get<3>(c_args);
		if (std::get<4>(c_args) != 1) goto owlMaxQualifiedCardinality_store;
		auto it1_0 = owlClassAssertion_constraint_store->template begin<1>(X,true);
		while ( !it1_0.at_end() ) {
			auto U(std::get<1>(*it1_0));
			auto it1_1 = owlClassAssertion_constraint_store->template begin<1>(C,true);
			while ( !it1_1.at_end() ) {
				auto Y1(std::get<1>(*it1_1));
#line 434 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it1_1) != std::get<0>(*it1_0) )
				) {
					auto it1_2 = owlClassAssertion_constraint_store->template begin<1>(C,true);
					while ( !it1_2.at_end() ) {
						auto Y2(std::get<1>(*it1_2));
#line 434 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it1_2) != std::get<0>(*it1_0) )
							&& ( std::get<0>(*it1_2) != std::get<0>(*it1_1) )
							&& ( !( Y1 == Y2 ) )
						) {
							auto it1_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y2);
							while ( !it1_3.at_end() ) {
								auto it1_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y1);
								while ( !it1_4.at_end() ) {
#line 434 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it1_4) != std::get<0>(*it1_3) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it1_0.kill();
										it1_1.kill();
										it1_2.kill();
										it1_3.kill();
										it1_4.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 434 "owl.chrpp"
										if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it1_4;
								}
								++it1_3;
							}
						} // End guard
						++it1_2;
					}
				} // End guard
				++it1_1;
			}
			++it1_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlMaxQualifiedCardinality_store:
		if (!c_stored_before) {
			c_it = owlMaxQualifiedCardinality_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlMaxQualifiedCardinality::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlNamedIndividual(typename owlNamedIndividual::Type c_args, typename owlNamedIndividual::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlNamedIndividual_call:
	// ***************************************************
	// owlNamedIndividual_0 <=> Rule NO_NAME, active constraint owlNamedIndividual( C ), occurrence 1
	[[maybe_unused]] owlNamedIndividual_0:
	{
		if (owlNamedIndividual_constraint_store->empty()) goto owlNamedIndividual_1;
		auto& C = std::get<1>(c_args);
		auto it0_0 = owlNamedIndividual_constraint_store->template begin<0>(C);
		while ( !it0_0.at_end() ) {
#line 200 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 200 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlNamedIndividual_1 <=> Rule NO_NAME, active constraint owlNamedIndividual( X ), occurrence 2
	[[maybe_unused]] owlNamedIndividual_1:
	{
		if (owlComplementOf_constraint_store->empty()) goto owlNamedIndividual_2;
		auto& X = std::get<1>(c_args);
		auto it1_0 = owlComplementOf_constraint_store->begin();
		while ( !it1_0.at_end() ) {
			auto A(std::get<1>(*it1_0));
			auto NOTA(std::get<2>(*it1_0));
			// Check history
			if (_history.rule_70->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlNamedIndividual_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlNamedIndividual::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 380 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, NOTA, false )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// ***************************************************
	// owlNamedIndividual_2 <=> Rule NO_NAME, active constraint owlNamedIndividual( X ), occurrence 3
	[[maybe_unused]] owlNamedIndividual_2:
	{
		if (owlAllValuesFrom_constraint_store->empty()) goto owlNamedIndividual_store;
		auto& X = std::get<1>(c_args);
		auto it2_0 = owlAllValuesFrom_constraint_store->begin();
		while ( !it2_0.at_end() ) {
			auto C(std::get<1>(*it2_0));
			auto P(std::get<2>(*it2_0));
			auto Y(std::get<3>(*it2_0));
			// Check history
			if (_history.rule_77->check( {{std::get<0>(c_args),std::get<0>(*it2_0)}} )) {
				it2_0.lock();
				if (!c_stored_before) {
					c_it = owlNamedIndividual_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlNamedIndividual::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 395 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C, false )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it2_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it2_0.next_and_unlock();
			} // End history
			else {
				++it2_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlNamedIndividual_store:
		if (!c_stored_before) {
			c_it = owlNamedIndividual_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlNamedIndividual::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlNegativeDataAssertion(typename owlNegativeDataAssertion::Type c_args, typename owlNegativeDataAssertion::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlNegativeDataAssertion_call:
	// ***************************************************
	// owlNegativeDataAssertion_0 <=> Rule NegativeDataAssertion, active constraint owlNegativeDataAssertion( X, P, Y ), occurrence 1
	[[maybe_unused]] owlNegativeDataAssertion_0:
	{
		if (owlDataPropertyAssertion_constraint_store->empty()) goto owlNegativeDataAssertion_store;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlDataPropertyAssertion_constraint_store->template begin<4>(X,P,Y);
		if ( !it0_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it0_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 236 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// Store constraint
	[[maybe_unused]] owlNegativeDataAssertion_store:
		if (!c_stored_before) {
			(void) owlNegativeDataAssertion_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlNegativeObjectAssertion(typename owlNegativeObjectAssertion::Type c_args, typename owlNegativeObjectAssertion::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlNegativeObjectAssertion_call:
	// ***************************************************
	// owlNegativeObjectAssertion_0 <=> Rule NO_NAME, active constraint owlNegativeObjectAssertion( X, P, Y ), occurrence 1
	[[maybe_unused]] owlNegativeObjectAssertion_0:
	{
		if (owlNegativeObjectAssertion_constraint_store->empty()) goto owlNegativeObjectAssertion_1;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlNegativeObjectAssertion_constraint_store->template begin<0>(X,P,Y);
		while ( !it0_0.at_end() ) {
#line 206 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 206 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlNegativeObjectAssertion_1 <=> Rule NegativeObjectAssertion, active constraint owlNegativeObjectAssertion( X, P, Y ), occurrence 2
	[[maybe_unused]] owlNegativeObjectAssertion_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlNegativeObjectAssertion_store;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<2>(X,P,Y);
		if ( !it1_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it1_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 230 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// Store constraint
	[[maybe_unused]] owlNegativeObjectAssertion_store:
		if (!c_stored_before) {
			c_it = owlNegativeObjectAssertion_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlNegativeObjectAssertion::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlObjectProperty(typename owlObjectProperty::Type c_args, typename owlObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlObjectProperty_call:
	// ***************************************************
	// owlObjectProperty_0 <=> Rule NO_NAME, active constraint owlObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlObjectProperty_0:
	{
		if (owlObjectProperty_constraint_store->empty()) goto owlObjectProperty_1;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 201 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 201 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlObjectProperty_1 <=> Rule NO_NAME, active constraint owlObjectProperty( P ), occurrence 2
	[[maybe_unused]] owlObjectProperty_1:
	{
		auto& P = std::get<1>(c_args);
		// Check history
		if (_history.rule_38->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlObjectProperty_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectProperty::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 260 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlObjectSubPropertyOf( P, P )) return chr::ES_CHR::FAILURE;
#line 260 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlEquivalentObjectProperty( P, P )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlObjectProperty_2 <=> Rule NO_NAME, active constraint owlObjectProperty( P ), occurrence 3
	[[maybe_unused]] owlObjectProperty_2:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectProperty_store;
		if (owlHasValueObject_constraint_store->empty()) goto owlObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it2_0 = owlClassAssertion_constraint_store->template begin<2>(true);
		while ( !it2_0.at_end() ) {
			auto U(std::get<1>(*it2_0));
			auto C(std::get<2>(*it2_0));
			auto it2_1 = owlHasValueObject_constraint_store->template begin<1>(C,P);
			while ( !it2_1.at_end() ) {
				auto Y(std::get<3>(*it2_1));
				// Check history
				if (_history.rule_86->check( {{std::get<0>(c_args),std::get<0>(*it2_0),std::get<0>(*it2_1)}} )) {
					it2_0.lock();
					it2_1.lock();
					if (!c_stored_before) {
						c_it = owlObjectProperty_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectProperty::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 436 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( U, P, Y )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it2_0.unlock();
						it2_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it2_0.alive()) {
						it2_1.unlock();
						goto it2_0_next;
					}
					it2_0.unlock();
					it2_1.next_and_unlock();
				} // End history
				else {
					++it2_1;
				}
			}
			++it2_0;
			it2_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlObjectPropertyAssertion(typename owlObjectPropertyAssertion::Type c_args, typename owlObjectPropertyAssertion::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlObjectPropertyAssertion_call:
	// ***************************************************
	// owlObjectPropertyAssertion_0 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 1
	[[maybe_unused]] owlObjectPropertyAssertion_0:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_1;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlObjectPropertyAssertion_constraint_store->template begin<2>(X,P,Y);
		while ( !it0_0.at_end() ) {
#line 221 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 221 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_1 <=> Rule NegativeObjectAssertion, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 2
	[[maybe_unused]] owlObjectPropertyAssertion_1:
	{
		if (owlNegativeObjectAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_2;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlNegativeObjectAssertion_constraint_store->template begin<0>(X,P,Y);
		if ( !it1_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it1_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 230 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_2 <=> Rule DisjointProperty, active constraint owlObjectPropertyAssertion( X, P1, Y ), occurrence 3
	[[maybe_unused]] owlObjectPropertyAssertion_2:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_3;
		if (owlDisjointObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_3;
		auto& X = std::get<1>(c_args);
		auto& P1 = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it2_0 = owlObjectPropertyAssertion_constraint_store->template begin<3>(X,Y);
		while ( !it2_0.at_end() ) {
			auto P2(std::get<2>(*it2_0));
#line 232 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it2_0) != std::get<0>(c_args) )
			) {
				auto it2_1 = owlDisjointObjectProperty_constraint_store->begin();
				while ( !it2_1.at_end() ) {
					auto L(std::get<1>(*it2_1));
#line 232 "owl.chrpp"
					// Begin guard
					if (
						contains( P1, L )
						&& contains( P2, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it2_0.kill();
						it2_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 232 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it2_1;
				}
			} // End guard
			++it2_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_3 <=> Rule DisjointProperty, active constraint owlObjectPropertyAssertion( X, P2, Y ), occurrence 4
	[[maybe_unused]] owlObjectPropertyAssertion_3:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_4;
		if (owlDisjointObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_4;
		auto& X = std::get<1>(c_args);
		auto& P2 = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it3_0 = owlObjectPropertyAssertion_constraint_store->template begin<3>(X,Y);
		while ( !it3_0.at_end() ) {
			auto P1(std::get<2>(*it3_0));
#line 232 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it3_0) != std::get<0>(c_args) )
			) {
				auto it3_1 = owlDisjointObjectProperty_constraint_store->begin();
				while ( !it3_1.at_end() ) {
					auto L(std::get<1>(*it3_1));
#line 232 "owl.chrpp"
					// Begin guard
					if (
						contains( P1, L )
						&& contains( P2, L )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it3_0.kill();
						it3_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 232 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it3_1;
				}
			} // End guard
			++it3_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_4 <=> Rule irreflexiveProperty, active constraint owlObjectPropertyAssertion( X, P, X ), occurrence 5
	[[maybe_unused]] owlObjectPropertyAssertion_4:
	{
		if (owlIrreflexiveObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_5;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		if (X != std::get<3>(c_args)) goto owlObjectPropertyAssertion_5;
		auto it4_0 = owlIrreflexiveObjectProperty_constraint_store->template begin<0>(P);
		if ( !it4_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it4_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 234 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_5 <=> Rule objectPropertydomain, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 6
	[[maybe_unused]] owlObjectPropertyAssertion_5:
	{
		if (owlObjectPropertyDomain_constraint_store->empty()) goto owlObjectPropertyAssertion_6;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it5_0 = owlObjectPropertyDomain_constraint_store->template begin<0>(P);
		while ( !it5_0.at_end() ) {
			auto DP(std::get<2>(*it5_0));
			// Check history
			if (_history.rule_44->check( {{std::get<0>(c_args),std::get<0>(*it5_0)}} )) {
				it5_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 296 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, DP, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it5_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it5_0.next_and_unlock();
			} // End history
			else {
				++it5_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_6 <=> Rule objectPropertyCoDomain, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 7
	[[maybe_unused]] owlObjectPropertyAssertion_6:
	{
		if (owlObjectPropertyRange_constraint_store->empty()) goto owlObjectPropertyAssertion_7;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it6_0 = owlObjectPropertyRange_constraint_store->template begin<0>(P);
		while ( !it6_0.at_end() ) {
			auto DP(std::get<2>(*it6_0));
			// Check history
			if (_history.rule_45->check( {{std::get<0>(c_args),std::get<0>(*it6_0)}} )) {
				it6_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 297 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( Y, DP, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it6_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it6_0.next_and_unlock();
			} // End history
			else {
				++it6_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_7 <=> Rule inverseProperty, active constraint owlObjectPropertyAssertion( X, P1, Y ), occurrence 8
	[[maybe_unused]] owlObjectPropertyAssertion_7:
	{
		if (owlInverseObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_8;
		auto& X = std::get<1>(c_args);
		auto& P1 = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it7_0 = owlInverseObjectProperty_constraint_store->template begin<1>(P1);
		while ( !it7_0.at_end() ) {
			auto P2(std::get<2>(*it7_0));
			// Check history
			if (_history.rule_50->check( {{std::get<0>(c_args),std::get<0>(*it7_0)}} )) {
				it7_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 312 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( Y, P2, X )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it7_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it7_0.next_and_unlock();
			} // End history
			else {
				++it7_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_8 <=> Rule symmetricProperty, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 9
	[[maybe_unused]] owlObjectPropertyAssertion_8:
	{
		if (owlSymmetricObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_9;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it8_0 = owlSymmetricObjectProperty_constraint_store->template begin<0>(P);
		while ( !it8_0.at_end() ) {
			// Check history
			if (_history.rule_52->check( {{std::get<0>(c_args),std::get<0>(*it8_0)}} )) {
				it8_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 316 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( Y, P, X )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it8_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it8_0.next_and_unlock();
			} // End history
			else {
				++it8_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_9 <=> Rule AsymmetricProperty1, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 10
	[[maybe_unused]] owlObjectPropertyAssertion_9:
	{
		if (owlAsymmetricObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_10;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it9_0 = owlAsymmetricObjectProperty_constraint_store->template begin<0>(P);
		while ( !it9_0.at_end() ) {
			// Check history
			if (_history.rule_53->check( {{std::get<0>(c_args),std::get<0>(*it9_0)}} )) {
				it9_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 319 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlNegativeObjectAssertion( X, P, Y )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it9_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it9_0.next_and_unlock();
			} // End history
			else {
				++it9_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_10 <=> Rule reflexiveProperty, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 11
	[[maybe_unused]] owlObjectPropertyAssertion_10:
	{
		if (owlReflexiveObjectProperty_constraint_store->empty()) goto owlObjectPropertyAssertion_11;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it10_0 = owlReflexiveObjectProperty_constraint_store->template begin<0>(P);
		while ( !it10_0.at_end() ) {
			// Check history
			if (_history.rule_54->check( {{std::get<0>(c_args),std::get<0>(*it10_0)}} )) {
				it10_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 322 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( X, P, X )) return chr::ES_CHR::FAILURE;
#line 322 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( Y, P, Y )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it10_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it10_0.next_and_unlock();
			} // End history
			else {
				++it10_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_11 <=> Rule ObjectPropertyChain, active constraint owlObjectPropertyAssertion( X, P, Y ), occurrence 12
	[[maybe_unused]] owlObjectPropertyAssertion_11:
	{
		if (owlObjectPropertyChain_constraint_store->empty()) goto owlObjectPropertyAssertion_12;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it11_0 = owlObjectPropertyChain_constraint_store->template begin<1>(P,0);
		while ( !it11_0.at_end() ) {
			auto PC(std::get<1>(*it11_0));
			auto N(std::get<4>(*it11_0));
			// Check history
			if (_history.rule_67->check( {{std::get<0>(c_args),std::get<0>(*it11_0)}} )) {
				it11_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 373 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == constructPropertyChain( PC, 0, X, Y, N )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it11_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it11_0.next_and_unlock();
			} // End history
			else {
				++it11_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_12 <=> Rule chainStep, active constraint owlObjectPropertyAssertion( Y, P, Z ), occurrence 13
	[[maybe_unused]] owlObjectPropertyAssertion_12:
	{
		if (constructPropertyChain_constraint_store->empty()) goto owlObjectPropertyAssertion_13;
		if (owlObjectPropertyChain_constraint_store->empty()) goto owlObjectPropertyAssertion_13;
		auto& Y = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Z = std::get<3>(c_args);
		auto it12_0 = constructPropertyChain_constraint_store->template begin<0>(Y);
		while ( !it12_0.at_end() ) {
			auto PC(std::get<1>(*it12_0));
			auto I(std::get<2>(*it12_0));
			auto X(std::get<3>(*it12_0));
			auto N(std::get<5>(*it12_0));
#line 375 "owl.chrpp"
			// Begin guard
			if (
				( I < N )
			) {
				auto it12_1 = owlObjectPropertyChain_constraint_store->template begin<2>(PC,P,N);
				while ( !it12_1.at_end() ) {
					auto J(std::get<3>(*it12_1));
#line 375 "owl.chrpp"
					// Begin guard
					if (
						equalIncrement( J, I )
					) {
						it12_0.lock();
						if (!c_stored_before) {
							c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						it12_0.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 375 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == constructPropertyChain( PC, ( I + 1 ), X, Z, N )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it12_0.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						it12_0.next_and_unlock();
						goto it12_0_next;
					} // End guard
					++it12_1;
				}
			} // End guard
			++it12_0;
			it12_0_next:;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_13 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 14
	[[maybe_unused]] owlObjectPropertyAssertion_13:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_14;
		if (owlSomeValuesFrom_constraint_store->empty()) goto owlObjectPropertyAssertion_14;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V = std::get<3>(c_args);
		auto it13_0 = owlClassAssertion_constraint_store->template begin<0>(V,true);
		while ( !it13_0.at_end() ) {
			auto Y(std::get<2>(*it13_0));
			auto it13_1 = owlSomeValuesFrom_constraint_store->template begin<2>(P,Y);
			while ( !it13_1.at_end() ) {
				auto C(std::get<1>(*it13_1));
				// Check history
				if (_history.rule_73->check( {{std::get<0>(c_args),std::get<0>(*it13_0),std::get<0>(*it13_1)}} )) {
					it13_0.lock();
					it13_1.lock();
					if (!c_stored_before) {
						c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 388 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it13_0.unlock();
						it13_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it13_0.alive()) {
						it13_1.unlock();
						goto it13_0_next;
					}
					it13_0.unlock();
					it13_1.next_and_unlock();
				} // End history
				else {
					++it13_1;
				}
			}
			++it13_0;
			it13_0_next:;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_14 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 15
	[[maybe_unused]] owlObjectPropertyAssertion_14:
	{
		if (logicalName_constraint_store->empty()) goto owlObjectPropertyAssertion_15;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_15;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_15;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_15;
		if (logicalName_constraint_store->empty()) goto owlObjectPropertyAssertion_15;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V = std::get<3>(c_args);
		auto it14_0 = logicalName_constraint_store->template begin<1>(emptyString,V);
		while ( !it14_0.at_end() ) {
			auto it14_1 = owlClassAssertion_constraint_store->template begin<0>(V,true);
			while ( !it14_1.at_end() ) {
				auto Y(std::get<2>(*it14_1));
				auto it14_2 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
				while ( !it14_2.at_end() ) {
					auto W(std::get<1>(*it14_2));
#line 390 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it14_2) != std::get<0>(*it14_1) )
					) {
						auto it14_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,W);
						while ( !it14_3.at_end() ) {
#line 390 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it14_3) != std::get<0>(c_args) )
							) {
								auto it14_4 = logicalName_constraint_store->template begin<0>(W);
								while ( !it14_4.at_end() ) {
									auto URI(std::get<1>(*it14_4));
#line 390 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it14_4) != std::get<0>(*it14_0) )
										&& ( !( URI == emptyString ) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it14_0.kill();
										it14_1.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 390 "owl.chrpp"

										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it14_4;
								}
							} // End guard
							++it14_3;
						}
					} // End guard
					++it14_2;
				}
				++it14_1;
			}
			++it14_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_15 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, W ), occurrence 16
	[[maybe_unused]] owlObjectPropertyAssertion_15:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_16;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_16;
		if (logicalName_constraint_store->empty()) goto owlObjectPropertyAssertion_16;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_16;
		if (logicalName_constraint_store->empty()) goto owlObjectPropertyAssertion_16;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& W = std::get<3>(c_args);
		auto it15_0 = owlClassAssertion_constraint_store->template begin<0>(W,true);
		while ( !it15_0.at_end() ) {
			auto Y(std::get<2>(*it15_0));
			auto it15_1 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
			while ( !it15_1.at_end() ) {
				auto V(std::get<1>(*it15_1));
#line 390 "owl.chrpp"
				// Begin guard
				if (
					( std::get<0>(*it15_1) != std::get<0>(*it15_0) )
				) {
					auto it15_2 = logicalName_constraint_store->template begin<1>(emptyString,V);
					while ( !it15_2.at_end() ) {
						auto it15_3 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,V);
						while ( !it15_3.at_end() ) {
#line 390 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it15_3) != std::get<0>(c_args) )
							) {
								auto it15_4 = logicalName_constraint_store->template begin<0>(W);
								while ( !it15_4.at_end() ) {
									auto URI(std::get<1>(*it15_4));
#line 390 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it15_4) != std::get<0>(*it15_2) )
										&& ( !( URI == emptyString ) )
									) {
										it15_0.lock();
										it15_1.lock();
										if (!c_stored_before) {
											c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
											auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
											chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
											chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
											chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
											c_stored_before = true;
										}
										c_it.lock();
										it15_1.kill();
										it15_2.kill();
										it15_3.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 390 "owl.chrpp"

										assert(c_stored_before);
										if (!c_it.alive()) {
											c_it.unlock();
											it15_0.unlock();
											it15_1.unlock();
											return chr::ES_CHR::SUCCESS;
										}
										c_it.unlock();
										if (!it15_0.alive()) {
											it15_1.unlock();
											goto it15_0_next;
										}
										it15_0.unlock();
										it15_1.next_and_unlock();
										goto it15_1_next;
									} // End guard
									++it15_4;
								}
							} // End guard
							++it15_3;
						}
						++it15_2;
					}
				} // End guard
				++it15_1;
				it15_1_next:;
			}
			++it15_0;
			it15_0_next:;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_16 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 17
	[[maybe_unused]] owlObjectPropertyAssertion_16:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_17;
		if (owlAllValuesFrom_constraint_store->empty()) goto owlObjectPropertyAssertion_17;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V = std::get<3>(c_args);
		auto it16_0 = owlClassAssertion_constraint_store->template begin<0>(U,true);
		while ( !it16_0.at_end() ) {
			auto C(std::get<2>(*it16_0));
			auto it16_1 = owlAllValuesFrom_constraint_store->template begin<0>(C,P);
			while ( !it16_1.at_end() ) {
				auto Y(std::get<3>(*it16_1));
				// Check history
				if (_history.rule_76->check( {{std::get<0>(c_args),std::get<0>(*it16_0),std::get<0>(*it16_1)}} )) {
					it16_0.lock();
					it16_1.lock();
					if (!c_stored_before) {
						c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 394 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlClassAssertion( V, Y, true )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it16_0.unlock();
						it16_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it16_0.alive()) {
						it16_1.unlock();
						goto it16_0_next;
					}
					it16_0.unlock();
					it16_1.next_and_unlock();
				} // End history
				else {
					++it16_1;
				}
			}
			++it16_0;
			it16_0_next:;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_17 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, V ), occurrence 18
	[[maybe_unused]] owlObjectPropertyAssertion_17:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_18;
		if (owlAllValuesFrom_constraint_store->empty()) goto owlObjectPropertyAssertion_18;
		if (logicalName_constraint_store->empty()) goto owlObjectPropertyAssertion_18;
		if (logicalName_constraint_store->empty()) goto owlObjectPropertyAssertion_18;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V = std::get<3>(c_args);
		auto it17_0 = owlClassAssertion_constraint_store->template begin<0>(U,false);
		while ( !it17_0.at_end() ) {
			auto C(std::get<2>(*it17_0));
			auto it17_1 = owlAllValuesFrom_constraint_store->template begin<0>(C,P);
			while ( !it17_1.at_end() ) {
				auto Y(std::get<3>(*it17_1));
				auto it17_2 = logicalName_constraint_store->template begin<0>(V);
				while ( !it17_2.at_end() ) {
					auto URIV(std::get<1>(*it17_2));
					auto it17_3 = logicalName_constraint_store->template begin<0>(Y);
					while ( !it17_3.at_end() ) {
						auto URIY(std::get<1>(*it17_3));
#line 397 "owl.chrpp"
						// Begin guard
						if (
							( std::get<0>(*it17_3) != std::get<0>(*it17_2) )
							&& ( !checkClassification( ( *this ), URIV, URIY ) )
						) {
							it17_0.lock();
							if (!c_stored_before) {
								c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
								auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
								chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
								chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
								chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
								c_stored_before = true;
							}
							c_it.lock();
							it17_0.kill();
							// Body
							chr::Statistics::inc_nb_rules();
#line 397 "owl.chrpp"

							assert(c_stored_before);
							if (!c_it.alive()) {
								c_it.unlock();
								it17_0.unlock();
								return chr::ES_CHR::SUCCESS;
							}
							c_it.unlock();
							it17_0.next_and_unlock();
							goto it17_0_next;
						} // End guard
						++it17_3;
					}
					++it17_2;
				}
				++it17_1;
			}
			++it17_0;
			it17_0_next:;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_18 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, _ ), occurrence 19
	[[maybe_unused]] owlObjectPropertyAssertion_18:
	{
		if (owlMaxCardinality_constraint_store->empty()) goto owlObjectPropertyAssertion_19;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_19;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto it18_0 = owlMaxCardinality_constraint_store->template begin<1>(P,0);
		while ( !it18_0.at_end() ) {
			auto C(std::get<1>(*it18_0));
			auto it18_1 = owlClassAssertion_constraint_store->template begin<3>(U,C,true);
			if ( !it18_1.at_end() ) {
				if (c_stored_before) {
					c_it.kill();
				}
				it18_0.kill();
				it18_1.kill();
				// Body
				chr::Statistics::inc_nb_rules();
#line 430 "owl.chrpp"
				return chr::failure();
				return chr::ES_CHR::SUCCESS;
			}
			++it18_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_19 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y1 ), occurrence 20
	[[maybe_unused]] owlObjectPropertyAssertion_19:
	{
		if (owlMaxCardinality_constraint_store->empty()) goto owlObjectPropertyAssertion_20;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_20;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_20;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y1 = std::get<3>(c_args);
		auto it19_0 = owlMaxCardinality_constraint_store->template begin<1>(P,1);
		while ( !it19_0.at_end() ) {
			auto C(std::get<1>(*it19_0));
			auto it19_1 = owlClassAssertion_constraint_store->template begin<3>(U,C,true);
			while ( !it19_1.at_end() ) {
				auto it19_2 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
				while ( !it19_2.at_end() ) {
					auto Y2(std::get<3>(*it19_2));
#line 431 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it19_2) != std::get<0>(c_args) )
						&& ( !( Y1 == Y2 ) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it19_0.kill();
						it19_1.kill();
						it19_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 431 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it19_2;
				}
				++it19_1;
			}
			++it19_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_20 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y2 ), occurrence 21
	[[maybe_unused]] owlObjectPropertyAssertion_20:
	{
		if (owlMaxCardinality_constraint_store->empty()) goto owlObjectPropertyAssertion_21;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_21;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_21;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y2 = std::get<3>(c_args);
		auto it20_0 = owlMaxCardinality_constraint_store->template begin<1>(P,1);
		while ( !it20_0.at_end() ) {
			auto C(std::get<1>(*it20_0));
			auto it20_1 = owlClassAssertion_constraint_store->template begin<3>(U,C,true);
			while ( !it20_1.at_end() ) {
				auto it20_2 = owlObjectPropertyAssertion_constraint_store->template begin<0>(U,P);
				while ( !it20_2.at_end() ) {
					auto Y1(std::get<3>(*it20_2));
#line 431 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it20_2) != std::get<0>(c_args) )
						&& ( !( Y1 == Y2 ) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it20_0.kill();
						it20_1.kill();
						it20_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 431 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it20_2;
				}
				++it20_1;
			}
			++it20_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_21 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y ), occurrence 22
	[[maybe_unused]] owlObjectPropertyAssertion_21:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlObjectPropertyAssertion_22;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_22;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_22;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it21_0 = owlMaxQualifiedCardinality_constraint_store->template begin<2>(P,0);
		while ( !it21_0.at_end() ) {
			auto X(std::get<1>(*it21_0));
			auto C(std::get<3>(*it21_0));
			auto it21_1 = owlClassAssertion_constraint_store->template begin<3>(U,X,true);
			while ( !it21_1.at_end() ) {
				auto it21_2 = owlClassAssertion_constraint_store->template begin<3>(Y,C,true);
				while ( !it21_2.at_end() ) {
#line 433 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it21_2) != std::get<0>(*it21_1) )
					) {
						if (c_stored_before) {
							c_it.kill();
						}
						it21_0.kill();
						it21_1.kill();
						it21_2.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 433 "owl.chrpp"
						return chr::failure();
						return chr::ES_CHR::SUCCESS;
					} // End guard
					++it21_2;
				}
				++it21_1;
			}
			++it21_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_22 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y1 ), occurrence 23
	[[maybe_unused]] owlObjectPropertyAssertion_22:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlObjectPropertyAssertion_23;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_23;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_23;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_23;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_23;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y1 = std::get<3>(c_args);
		auto it22_0 = owlMaxQualifiedCardinality_constraint_store->template begin<2>(P,1);
		while ( !it22_0.at_end() ) {
			auto X(std::get<1>(*it22_0));
			auto C(std::get<3>(*it22_0));
			auto it22_1 = owlClassAssertion_constraint_store->template begin<3>(U,X,true);
			while ( !it22_1.at_end() ) {
				auto it22_2 = owlClassAssertion_constraint_store->template begin<3>(Y1,C,true);
				while ( !it22_2.at_end() ) {
#line 434 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it22_2) != std::get<0>(*it22_1) )
					) {
						auto it22_3 = owlClassAssertion_constraint_store->template begin<1>(C,true);
						while ( !it22_3.at_end() ) {
							auto Y2(std::get<1>(*it22_3));
#line 434 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it22_3) != std::get<0>(*it22_1) )
								&& ( std::get<0>(*it22_3) != std::get<0>(*it22_2) )
								&& ( !( Y1 == Y2 ) )
							) {
								auto it22_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y2);
								while ( !it22_4.at_end() ) {
#line 434 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it22_4) != std::get<0>(c_args) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it22_0.kill();
										it22_1.kill();
										it22_2.kill();
										it22_3.kill();
										it22_4.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 434 "owl.chrpp"
										if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it22_4;
								}
							} // End guard
							++it22_3;
						}
					} // End guard
					++it22_2;
				}
				++it22_1;
			}
			++it22_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_23 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y2 ), occurrence 24
	[[maybe_unused]] owlObjectPropertyAssertion_23:
	{
		if (owlMaxQualifiedCardinality_constraint_store->empty()) goto owlObjectPropertyAssertion_24;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_24;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_24;
		if (owlClassAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_24;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_24;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y2 = std::get<3>(c_args);
		auto it23_0 = owlMaxQualifiedCardinality_constraint_store->template begin<2>(P,1);
		while ( !it23_0.at_end() ) {
			auto X(std::get<1>(*it23_0));
			auto C(std::get<3>(*it23_0));
			auto it23_1 = owlClassAssertion_constraint_store->template begin<3>(U,X,true);
			while ( !it23_1.at_end() ) {
				auto it23_2 = owlClassAssertion_constraint_store->template begin<3>(Y2,C,true);
				while ( !it23_2.at_end() ) {
#line 434 "owl.chrpp"
					// Begin guard
					if (
						( std::get<0>(*it23_2) != std::get<0>(*it23_1) )
					) {
						auto it23_3 = owlClassAssertion_constraint_store->template begin<1>(C,true);
						while ( !it23_3.at_end() ) {
							auto Y1(std::get<1>(*it23_3));
#line 434 "owl.chrpp"
							// Begin guard
							if (
								( std::get<0>(*it23_3) != std::get<0>(*it23_1) )
								&& ( std::get<0>(*it23_3) != std::get<0>(*it23_2) )
								&& ( !( Y1 == Y2 ) )
							) {
								auto it23_4 = owlObjectPropertyAssertion_constraint_store->template begin<2>(U,P,Y1);
								while ( !it23_4.at_end() ) {
#line 434 "owl.chrpp"
									// Begin guard
									if (
										( std::get<0>(*it23_4) != std::get<0>(c_args) )
									) {
										if (c_stored_before) {
											c_it.kill();
										}
										it23_0.kill();
										it23_1.kill();
										it23_2.kill();
										it23_3.kill();
										it23_4.kill();
										// Body
										chr::Statistics::inc_nb_rules();
#line 434 "owl.chrpp"
										if (chr::ES_CHR::FAILURE == owlSameIndividual( Y1, Y2 )) return chr::ES_CHR::FAILURE;
										return chr::ES_CHR::SUCCESS;
									} // End guard
									++it23_4;
								}
							} // End guard
							++it23_3;
						}
					} // End guard
					++it23_2;
				}
				++it23_1;
			}
			++it23_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_24 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( U, P, Y ), occurrence 25
	[[maybe_unused]] owlObjectPropertyAssertion_24:
	{
		if (owlHasValueObject_constraint_store->empty()) goto owlObjectPropertyAssertion_25;
		auto& U = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it24_0 = owlHasValueObject_constraint_store->template begin<2>(P,Y);
		while ( !it24_0.at_end() ) {
			auto C(std::get<1>(*it24_0));
			// Check history
			if (_history.rule_88->check( {{std::get<0>(c_args),std::get<0>(*it24_0)}} )) {
				it24_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 438 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it24_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it24_0.next_and_unlock();
			} // End history
			else {
				++it24_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_25 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( X, P, V1 ), occurrence 26
	[[maybe_unused]] owlObjectPropertyAssertion_25:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_26;
		if (owlHasKeyLoop_constraint_store->empty()) goto owlObjectPropertyAssertion_26;
		auto& X = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V1 = std::get<3>(c_args);
		auto it25_0 = owlObjectPropertyAssertion_constraint_store->template begin<5>(P,V1);
		while ( !it25_0.at_end() ) {
			auto Y(std::get<1>(*it25_0));
#line 449 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it25_0) != std::get<0>(c_args) )
			) {
				auto it25_1 = owlHasKeyLoop_constraint_store->template begin<0>(X,Y);
				while ( !it25_1.at_end() ) {
					auto IT(std::get<1>(*it25_1));
					auto ITEND(std::get<2>(*it25_1));
#line 449 "owl.chrpp"
					// Begin guard
					if (
						( P == ( *( *IT ) ) )
					) {
						it25_0.lock();
						it25_1.lock();
						if (!c_stored_before) {
							c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						it25_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 449 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( ( std :: next )( (*IT ) ), ITEND, X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it25_0.unlock();
							it25_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it25_0.alive()) {
							it25_1.unlock();
							goto it25_0_next;
						}
						it25_0.unlock();
						it25_1.next_and_unlock();
						goto it25_1_next;
					} // End guard
					++it25_1;
					it25_1_next:;
				}
			} // End guard
			++it25_0;
			it25_0_next:;
		}
	}
	// ***************************************************
	// owlObjectPropertyAssertion_26 <=> Rule NO_NAME, active constraint owlObjectPropertyAssertion( Y, P, V1 ), occurrence 27
	[[maybe_unused]] owlObjectPropertyAssertion_26:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyAssertion_store;
		if (owlHasKeyLoop_constraint_store->empty()) goto owlObjectPropertyAssertion_store;
		auto& Y = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& V1 = std::get<3>(c_args);
		auto it26_0 = owlObjectPropertyAssertion_constraint_store->template begin<5>(P,V1);
		while ( !it26_0.at_end() ) {
			auto X(std::get<1>(*it26_0));
#line 449 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it26_0) != std::get<0>(c_args) )
			) {
				auto it26_1 = owlHasKeyLoop_constraint_store->template begin<0>(X,Y);
				while ( !it26_1.at_end() ) {
					auto IT(std::get<1>(*it26_1));
					auto ITEND(std::get<2>(*it26_1));
#line 449 "owl.chrpp"
					// Begin guard
					if (
						( P == ( *( *IT ) ) )
					) {
						it26_0.lock();
						it26_1.lock();
						if (!c_stored_before) {
							c_it = owlObjectPropertyAssertion_constraint_store->add(c_args);
							auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
							chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
							chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
							c_stored_before = true;
						}
						c_it.lock();
						it26_1.kill();
						// Body
						chr::Statistics::inc_nb_rules();
#line 449 "owl.chrpp"
						if (chr::ES_CHR::FAILURE == owlHasKeyLoop( ( std :: next )( (*IT ) ), ITEND, X, Y )) return chr::ES_CHR::FAILURE;
						assert(c_stored_before);
						if (!c_it.alive()) {
							c_it.unlock();
							it26_0.unlock();
							it26_1.unlock();
							return chr::ES_CHR::SUCCESS;
						}
						c_it.unlock();
						if (!it26_0.alive()) {
							it26_1.unlock();
							goto it26_0_next;
						}
						it26_0.unlock();
						it26_1.next_and_unlock();
						goto it26_1_next;
					} // End guard
					++it26_1;
					it26_1_next:;
				}
			} // End guard
			++it26_0;
			it26_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlObjectPropertyAssertion_store:
		if (!c_stored_before) {
			c_it = owlObjectPropertyAssertion_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyAssertion::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlObjectPropertyChain(typename owlObjectPropertyChain::Type c_args, typename owlObjectPropertyChain::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlObjectPropertyChain_call:
	// ***************************************************
	// owlObjectPropertyChain_0 <=> Rule ObjectPropertyChain, active constraint owlObjectPropertyChain( PC, P, 0, N ), occurrence 1
	[[maybe_unused]] owlObjectPropertyChain_0:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyChain_1;
		auto& PC = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		if (!std::get<3>(c_args).ground() || (std::get<3>(c_args) != 0)) goto owlObjectPropertyChain_1;
		auto& N = std::get<4>(c_args);
		auto it0_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			auto Y(std::get<3>(*it0_0));
			// Check history
			if (_history.rule_67->check( {{std::get<0>(c_args),std::get<0>(*it0_0)}} )) {
				it0_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyChain_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyChain::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<4>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 373 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == constructPropertyChain( PC, 0, X, Y, N )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it0_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it0_0.next_and_unlock();
			} // End history
			else {
				++it0_0;
			}
		}
	}
	// ***************************************************
	// owlObjectPropertyChain_1 <=> Rule chainStep, active constraint owlObjectPropertyChain( PC, P, J, N ), occurrence 2
	[[maybe_unused]] owlObjectPropertyChain_1:
	{
		if (constructPropertyChain_constraint_store->empty()) goto owlObjectPropertyChain_store;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyChain_store;
		auto& PC = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& J = std::get<3>(c_args);
		auto& N = std::get<4>(c_args);
		auto it1_0 = constructPropertyChain_constraint_store->template begin<1>(PC,N);
		while ( !it1_0.at_end() ) {
			auto I(std::get<2>(*it1_0));
			auto X(std::get<3>(*it1_0));
			auto Y(std::get<4>(*it1_0));
#line 375 "owl.chrpp"
			// Begin guard
			if (
				( I < N )
				&& equalIncrement( J, I )
			) {
				auto it1_1 = owlObjectPropertyAssertion_constraint_store->template begin<0>(Y,P);
				while ( !it1_1.at_end() ) {
					auto Z(std::get<3>(*it1_1));
					it1_0.lock();
					if (!c_stored_before) {
						c_it = owlObjectPropertyChain_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyChain::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<4>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					it1_0.kill();
					// Body
					chr::Statistics::inc_nb_rules();
#line 375 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == constructPropertyChain( PC, ( I + 1 ), X, Z, N )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it1_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it1_0.next_and_unlock();
					goto it1_0_next;
				}
			} // End guard
			++it1_0;
			it1_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlObjectPropertyChain_store:
		if (!c_stored_before) {
			c_it = owlObjectPropertyChain_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyChain::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<4>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlObjectPropertyDomain(typename owlObjectPropertyDomain::Type c_args, typename owlObjectPropertyDomain::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlObjectPropertyDomain_call:
	// ***************************************************
	// owlObjectPropertyDomain_0 <=> Rule NO_NAME, active constraint owlObjectPropertyDomain( P, C ), occurrence 1
	[[maybe_unused]] owlObjectPropertyDomain_0:
	{
		if (owlObjectPropertyDomain_constraint_store->empty()) goto owlObjectPropertyDomain_1;
		auto& P = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		auto it0_0 = owlObjectPropertyDomain_constraint_store->template begin<1>(P,C);
		while ( !it0_0.at_end() ) {
#line 203 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 203 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyDomain_1 <=> Rule objectPropertydomain, active constraint owlObjectPropertyDomain( P, DP ), occurrence 2
	[[maybe_unused]] owlObjectPropertyDomain_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyDomain_store;
		auto& P = std::get<1>(c_args);
		auto& DP = std::get<2>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto Y(std::get<3>(*it1_0));
			// Check history
			if (_history.rule_44->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyDomain_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyDomain::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 296 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( X, DP, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlObjectPropertyDomain_store:
		if (!c_stored_before) {
			c_it = owlObjectPropertyDomain_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyDomain::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlObjectPropertyRange(typename owlObjectPropertyRange::Type c_args, typename owlObjectPropertyRange::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlObjectPropertyRange_call:
	// ***************************************************
	// owlObjectPropertyRange_0 <=> Rule NO_NAME, active constraint owlObjectPropertyRange( P, C ), occurrence 1
	[[maybe_unused]] owlObjectPropertyRange_0:
	{
		if (owlObjectPropertyRange_constraint_store->empty()) goto owlObjectPropertyRange_1;
		auto& P = std::get<1>(c_args);
		auto& C = std::get<2>(c_args);
		auto it0_0 = owlObjectPropertyRange_constraint_store->template begin<1>(P,C);
		while ( !it0_0.at_end() ) {
#line 204 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 204 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlObjectPropertyRange_1 <=> Rule objectPropertyCoDomain, active constraint owlObjectPropertyRange( P, DP ), occurrence 2
	[[maybe_unused]] owlObjectPropertyRange_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlObjectPropertyRange_store;
		auto& P = std::get<1>(c_args);
		auto& DP = std::get<2>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto Y(std::get<3>(*it1_0));
			// Check history
			if (_history.rule_45->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlObjectPropertyRange_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyRange::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 297 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( Y, DP, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlObjectPropertyRange_store:
		if (!c_stored_before) {
			c_it = owlObjectPropertyRange_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectPropertyRange::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlObjectSubPropertyOf(typename owlObjectSubPropertyOf::Type c_args, typename owlObjectSubPropertyOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlObjectSubPropertyOf_call:
	// ***************************************************
	// owlObjectSubPropertyOf_0 <=> Rule NO_NAME, active constraint owlObjectSubPropertyOf( A, B ), occurrence 1
	[[maybe_unused]] owlObjectSubPropertyOf_0:
	{
		if (owlObjectSubPropertyOf_constraint_store->empty()) goto owlObjectSubPropertyOf_store;
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
		auto it0_0 = owlObjectSubPropertyOf_constraint_store->template begin<0>(A,B);
		while ( !it0_0.at_end() ) {
#line 219 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 219 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlObjectSubPropertyOf_store:
		if (!c_stored_before) {
			c_it = owlObjectSubPropertyOf_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlObjectSubPropertyOf::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlOneOf(typename owlOneOf::Type c_args, typename owlOneOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlOneOf_call:
	// ***************************************************
	// owlOneOf_0 <=> Rule NO_NAME, active constraint owlOneOf( C, S ), occurrence 1
	[[maybe_unused]] owlOneOf_0:
	{
		auto& C = std::get<1>(c_args);
		auto& S = std::get<2>(c_args);
		// Check history
		if (_history.rule_90->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlOneOf_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlOneOf::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 441 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlOneOfLoop( C, (*S ) . begin(  ), (*S ) . end(  ) )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// Store constraint
	[[maybe_unused]] owlOneOf_store:
		if (!c_stored_before) {
			c_it = owlOneOf_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlOneOf::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlOneOfLoop(typename owlOneOfLoop::Type c_args) {
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlOneOfLoop_call:
	// ***************************************************
	// owlOneOfLoop_0 <=> Rule NO_NAME, active constraint owlOneOfLoop( C, ITEND, ITEND ), occurrence 1
	[[maybe_unused]] owlOneOfLoop_0:
	{
		auto& C = std::get<1>(c_args);
		auto& ITEND = std::get<2>(c_args);
		if (ITEND != std::get<3>(c_args)) goto owlOneOfLoop_1;
		// Body
		chr::Statistics::inc_nb_rules();
#line 442 "owl.chrpp"

		return chr::ES_CHR::SUCCESS;
	}
	// ***************************************************
	// owlOneOfLoop_1 <=> Rule NO_NAME, active constraint owlOneOfLoop( C, IT, ITEND ), occurrence 2
	[[maybe_unused]] owlOneOfLoop_1:
	{
		auto& C = std::get<1>(c_args);
		auto& IT = std::get<2>(c_args);
		auto& ITEND = std::get<3>(c_args);
		// Body
		chr::Statistics::inc_nb_rules();
#line 443 "owl.chrpp"
		if (chr::ES_CHR::FAILURE == owlClassAssertion( (*(*IT ) ), C, true )) return chr::ES_CHR::FAILURE;
#line 443 "owl.chrpp"
		c_args = std::make_tuple(next_free_constraint_id++, C, ( std :: next )( (*IT ) ), ITEND);
		goto owlOneOfLoop_call;

		return chr::ES_CHR::SUCCESS;
	}
	// Store constraint
	[[maybe_unused]] owlOneOfLoop_store:
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlReflexiveObjectProperty(typename owlReflexiveObjectProperty::Type c_args, typename owlReflexiveObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlReflexiveObjectProperty_call:
	// ***************************************************
	// owlReflexiveObjectProperty_0 <=> Rule NO_NAME, active constraint owlReflexiveObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlReflexiveObjectProperty_0:
	{
		if (owlReflexiveObjectProperty_constraint_store->empty()) goto owlReflexiveObjectProperty_1;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlReflexiveObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 213 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 213 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlReflexiveObjectProperty_1 <=> Rule reflexiveProperty, active constraint owlReflexiveObjectProperty( P ), occurrence 2
	[[maybe_unused]] owlReflexiveObjectProperty_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlReflexiveObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto Y(std::get<3>(*it1_0));
			// Check history
			if (_history.rule_54->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlReflexiveObjectProperty_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlReflexiveObjectProperty::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 322 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( X, P, X )) return chr::ES_CHR::FAILURE;
#line 322 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( Y, P, Y )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlReflexiveObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlReflexiveObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlReflexiveObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlSameIndividual(typename owlSameIndividual::Type c_args, typename owlSameIndividual::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlSameIndividual_call:
	// ***************************************************
	// owlSameIndividual_0 <=> Rule NO_NAME, active constraint owlSameIndividual( X, Y ), occurrence 1
	[[maybe_unused]] owlSameIndividual_0:
	{
		if (owlSameIndividual_constraint_store->empty()) goto owlSameIndividual_1;
		auto& X = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		auto it0_0 = owlSameIndividual_constraint_store->template begin<0>(X,Y);
		while ( !it0_0.at_end() ) {
#line 208 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 208 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlSameIndividual_1 <=> Rule sameIndividual, active constraint owlSameIndividual( X, Y ), occurrence 2
	[[maybe_unused]] owlSameIndividual_1:
	{
		auto& X = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
#line 306 "owl.chrpp"
		// Begin guard
		if (
			( !( X == Y ) )
		) {
			// Check history
			if (_history.rule_48->check( {{std::get<0>(c_args)}} )) {
				if (!c_stored_before) {
					c_it = owlSameIndividual_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSameIndividual::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 306 "owl.chrpp"
				if ((X %= Y) == chr::ES_CHR::FAILURE) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
			} // End history
		} // End guard
	}
	// ***************************************************
	// owlSameIndividual_2 <=> Rule DifferentIndividual, active constraint owlSameIndividual( X, Y ), occurrence 3
	[[maybe_unused]] owlSameIndividual_2:
	{
		if (owlDifferentIndividual_constraint_store->empty()) goto owlSameIndividual_store;
		auto& X = std::get<1>(c_args);
		auto& Y = std::get<2>(c_args);
		auto it2_0 = owlDifferentIndividual_constraint_store->template begin<0>(X,Y);
		if ( !it2_0.at_end() ) {
			if (c_stored_before) {
				c_it.kill();
			}
			it2_0.kill();
			// Body
			chr::Statistics::inc_nb_rules();
#line 309 "owl.chrpp"
			return chr::failure();
			return chr::ES_CHR::SUCCESS;
		}
	}
	// Store constraint
	[[maybe_unused]] owlSameIndividual_store:
		if (!c_stored_before) {
			c_it = owlSameIndividual_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSameIndividual::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlSomeValuesFrom(typename owlSomeValuesFrom::Type c_args, typename owlSomeValuesFrom::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlSomeValuesFrom_call:
	// ***************************************************
	// owlSomeValuesFrom_0 <=> Rule NO_NAME, active constraint owlSomeValuesFrom( C, P, Y ), occurrence 1
	[[maybe_unused]] owlSomeValuesFrom_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlSomeValuesFrom_1;
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlSomeValuesFrom_1;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(Y,true);
		while ( !it0_0.at_end() ) {
			auto V(std::get<1>(*it0_0));
			auto it0_1 = owlObjectPropertyAssertion_constraint_store->template begin<5>(P,V);
			while ( !it0_1.at_end() ) {
				auto U(std::get<1>(*it0_1));
				// Check history
				if (_history.rule_73->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
					it0_0.lock();
					it0_1.lock();
					if (!c_stored_before) {
						c_it = owlSomeValuesFrom_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSomeValuesFrom::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
						chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 388 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlClassAssertion( U, C, true )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						it0_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it0_0.alive()) {
						it0_1.unlock();
						goto it0_0_next;
					}
					it0_0.unlock();
					it0_1.next_and_unlock();
				} // End history
				else {
					++it0_1;
				}
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// owlSomeValuesFrom_1 <=> Rule NO_NAME, active constraint owlSomeValuesFrom( C, P, Y ), occurrence 2
	[[maybe_unused]] owlSomeValuesFrom_1:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlSomeValuesFrom_store;
		auto& C = std::get<1>(c_args);
		auto& P = std::get<2>(c_args);
		auto& Y = std::get<3>(c_args);
		auto it1_0 = owlClassAssertion_constraint_store->template begin<1>(C,true);
		while ( !it1_0.at_end() ) {
			auto U(std::get<1>(*it1_0));
			// Check history
			if (_history.rule_74->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlSomeValuesFrom_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSomeValuesFrom::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
					chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
				typename std::tuple_element<3,typename owlObjectPropertyAssertion::Type>::type V;
#line 389 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( U, P, V )) return chr::ES_CHR::FAILURE;
#line 389 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == logicalName( emptyString, V )) return chr::ES_CHR::FAILURE;
#line 389 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlClassAssertion( V, Y, true )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlSomeValuesFrom_store:
		if (!c_stored_before) {
			c_it = owlSomeValuesFrom_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSomeValuesFrom::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<3>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlSubclassOf(typename owlSubclassOf::Type c_args, typename owlSubclassOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlSubclassOf_call:
	// ***************************************************
	// owlSubclassOf_0 <=> Rule NO_NAME, active constraint owlSubclassOf( A, B ), occurrence 1
	[[maybe_unused]] owlSubclassOf_0:
	{
		if (owlSubclassOf_constraint_store->empty()) goto owlSubclassOf_1;
		auto& A = std::get<1>(c_args);
		auto& B = std::get<2>(c_args);
		auto it0_0 = owlSubclassOf_constraint_store->template begin<0>(A,B);
		while ( !it0_0.at_end() ) {
#line 218 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 218 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlSubclassOf_1 <=> Rule NO_NAME, active constraint owlSubclassOf( C1, C2 ), occurrence 2
	[[maybe_unused]] owlSubclassOf_1:
	{
		auto& C1 = std::get<1>(c_args);
		auto& C2 = std::get<2>(c_args);
		// Check history
		if (_history.rule_32->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlSubclassOf_constraint_store->add(c_args);
				auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSubclassOf::Constraint_callback(this,c_it));
				chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
				chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 243 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlClass( C1 )) return chr::ES_CHR::FAILURE;
#line 243 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlClass( C2 )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// Store constraint
	[[maybe_unused]] owlSubclassOf_store:
		if (!c_stored_before) {
			c_it = owlSubclassOf_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSubclassOf::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
			chr::schedule_constraint_callback(std::get<2>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlSymmetricObjectProperty(typename owlSymmetricObjectProperty::Type c_args, typename owlSymmetricObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlSymmetricObjectProperty_call:
	// ***************************************************
	// owlSymmetricObjectProperty_0 <=> Rule NO_NAME, active constraint owlSymmetricObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlSymmetricObjectProperty_0:
	{
		if (owlSymmetricObjectProperty_constraint_store->empty()) goto owlSymmetricObjectProperty_1;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlSymmetricObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 211 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 211 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// owlSymmetricObjectProperty_1 <=> Rule symmetricProperty, active constraint owlSymmetricObjectProperty( P ), occurrence 2
	[[maybe_unused]] owlSymmetricObjectProperty_1:
	{
		if (owlObjectPropertyAssertion_constraint_store->empty()) goto owlSymmetricObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it1_0 = owlObjectPropertyAssertion_constraint_store->template begin<4>(P);
		while ( !it1_0.at_end() ) {
			auto X(std::get<1>(*it1_0));
			auto Y(std::get<3>(*it1_0));
			// Check history
			if (_history.rule_52->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
				it1_0.lock();
				if (!c_stored_before) {
					c_it = owlSymmetricObjectProperty_constraint_store->add(c_args);
					auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSymmetricObjectProperty::Constraint_callback(this,c_it));
					chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
					c_stored_before = true;
				}
				c_it.lock();
				// Body
				chr::Statistics::inc_nb_rules();
#line 316 "owl.chrpp"
				if (chr::ES_CHR::FAILURE == owlObjectPropertyAssertion( Y, P, X )) return chr::ES_CHR::FAILURE;
				assert(c_stored_before);
				if (!c_it.alive()) {
					c_it.unlock();
					it1_0.unlock();
					return chr::ES_CHR::SUCCESS;
				}
				c_it.unlock();
				it1_0.next_and_unlock();
			} // End history
			else {
				++it1_0;
			}
		}
	}
	// Store constraint
	[[maybe_unused]] owlSymmetricObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlSymmetricObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlSymmetricObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlTransitiveObjectProperty(typename owlTransitiveObjectProperty::Type c_args, typename owlTransitiveObjectProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlTransitiveObjectProperty_call:
	// ***************************************************
	// owlTransitiveObjectProperty_0 <=> Rule NO_NAME, active constraint owlTransitiveObjectProperty( P ), occurrence 1
	[[maybe_unused]] owlTransitiveObjectProperty_0:
	{
		if (owlTransitiveObjectProperty_constraint_store->empty()) goto owlTransitiveObjectProperty_store;
		auto& P = std::get<1>(c_args);
		auto it0_0 = owlTransitiveObjectProperty_constraint_store->template begin<0>(P);
		while ( !it0_0.at_end() ) {
#line 217 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 217 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// Store constraint
	[[maybe_unused]] owlTransitiveObjectProperty_store:
		if (!c_stored_before) {
			c_it = owlTransitiveObjectProperty_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename owlTransitiveObjectProperty::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlUnionClass(typename owlUnionClass::Type c_args, typename owlUnionClass::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlUnionClass_call:
	// ***************************************************
	// owlUnionClass_0 <=> Rule NO_NAME, active constraint owlUnionClass( C, V ), occurrence 1
	[[maybe_unused]] owlUnionClass_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto owlUnionClass_store;
		auto& C = std::get<1>(c_args);
		auto& V = std::get<2>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<1>(V,true);
		if ( !it0_0.at_end() ) {
			auto X(std::get<1>(*it0_0));
			if (c_stored_before) {
				c_it.kill();
			}
			// Body
			chr::Statistics::inc_nb_rules();
#line 340 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlClassAssertion( X, C, true )) return chr::ES_CHR::FAILURE;
			return chr::ES_CHR::SUCCESS;
		}
	}
	// Store constraint
	[[maybe_unused]] owlUnionClass_store:
		if (!c_stored_before) {
			(void) owlUnionClass_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlUnionOf(typename owlUnionOf::Type c_args) {
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlUnionOf_call:
	// ***************************************************
	// owlUnionOf_0 <=> Rule NO_NAME, active constraint owlUnionOf( C, ITEND, ITEND ), occurrence 1
	[[maybe_unused]] owlUnionOf_0:
	{
		auto& C = std::get<1>(c_args);
		auto& ITEND = std::get<2>(c_args);
		if (ITEND != std::get<3>(c_args)) goto owlUnionOf_1;
		// Body
		chr::Statistics::inc_nb_rules();
#line 338 "owl.chrpp"

		return chr::ES_CHR::SUCCESS;
	}
	// ***************************************************
	// owlUnionOf_1 <=> Rule NO_NAME, active constraint owlUnionOf( C, IT, ITEND ), occurrence 2
	[[maybe_unused]] owlUnionOf_1:
	{
		auto& C = std::get<1>(c_args);
		auto& IT = std::get<2>(c_args);
		auto& ITEND = std::get<3>(c_args);
		// Body
		chr::Statistics::inc_nb_rules();
#line 339 "owl.chrpp"
		if (chr::ES_CHR::FAILURE == owlUnionClass( C, (*(*IT ) ) )) return chr::ES_CHR::FAILURE;
#line 339 "owl.chrpp"
		c_args = std::forward_as_tuple(next_free_constraint_id++, C, ( std :: next )( (*IT ) ), ITEND);
		goto owlUnionOf_call;

		return chr::ES_CHR::SUCCESS;
	}
	// Store constraint
	[[maybe_unused]] owlUnionOf_store:
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlUnionOf1(typename owlUnionOf1::Type c_args, typename owlUnionOf1::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlUnionOf1_call:
	// ***************************************************
	// owlUnionOf1_0 <=> Rule NO_NAME, active constraint owlUnionOf1( C, S ), occurrence 1
	[[maybe_unused]] owlUnionOf1_0:
	{
		auto& C = std::get<1>(c_args);
		auto& S = std::get<2>(c_args);
		// Check history
		if (_history.rule_55->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = owlUnionOf1_constraint_store->add(c_args);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 337 "owl.chrpp"
			if (chr::ES_CHR::FAILURE == owlUnionOf( C, (*S ) . begin(  ), (*S ) . end(  ) )) return chr::ES_CHR::FAILURE;
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// ***************************************************
	// owlUnionOf1_1 <=> Rule NO_NAME, active constraint owlUnionOf1( C1, S ), occurrence 2
	[[maybe_unused]] owlUnionOf1_1:
	{
		if (owlUnionOf1_constraint_store->empty()) goto owlUnionOf1_2;
		auto& C1 = std::get<1>(c_args);
		auto& S = std::get<2>(c_args);
		auto it1_0 = owlUnionOf1_constraint_store->template begin<0>(S);
		while ( !it1_0.at_end() ) {
			auto C2(std::get<1>(*it1_0));
#line 342 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it1_0) != std::get<0>(c_args) )
			) {
				// Check history
				if (_history.rule_59->check( {{std::get<0>(c_args),std::get<0>(*it1_0)}} )) {
					it1_0.lock();
					if (!c_stored_before) {
						c_it = owlUnionOf1_constraint_store->add(c_args);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 342 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlEquivalentClass( C1, C2 )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it1_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it1_0.next_and_unlock();
					goto it1_0_next;
				} // End history
				else {
					++it1_0;
					goto it1_0_next;
				}
			} // End guard
			++it1_0;
			it1_0_next:;
		}
	}
	// ***************************************************
	// owlUnionOf1_2 <=> Rule NO_NAME, active constraint owlUnionOf1( C2, S ), occurrence 3
	[[maybe_unused]] owlUnionOf1_2:
	{
		if (owlUnionOf1_constraint_store->empty()) goto owlUnionOf1_store;
		auto& C2 = std::get<1>(c_args);
		auto& S = std::get<2>(c_args);
		auto it2_0 = owlUnionOf1_constraint_store->template begin<0>(S);
		while ( !it2_0.at_end() ) {
			auto C1(std::get<1>(*it2_0));
#line 342 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it2_0) != std::get<0>(c_args) )
			) {
				// Check history
				if (_history.rule_59->check( {{std::get<0>(c_args),std::get<0>(*it2_0)}} )) {
					it2_0.lock();
					if (!c_stored_before) {
						c_it = owlUnionOf1_constraint_store->add(c_args);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 342 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == owlEquivalentClass( C1, C2 )) return chr::ES_CHR::FAILURE;
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it2_0.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					it2_0.next_and_unlock();
					goto it2_0_next;
				} // End history
				else {
					++it2_0;
					goto it2_0_next;
				}
			} // End guard
			++it2_0;
			it2_0_next:;
		}
	}
	// Store constraint
	[[maybe_unused]] owlUnionOf1_store:
		if (!c_stored_before) {
			(void) owlUnionOf1_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_queryClassification(typename queryClassification::Type c_args, typename queryClassification::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] queryClassification_call:
	// ***************************************************
	// queryClassification_0 <=> Rule NO_NAME, active constraint queryClassification( X ), occurrence 1
	[[maybe_unused]] queryClassification_0:
	{
		if (owlClassAssertion_constraint_store->empty()) goto queryClassification_1;
		if (logicalName_constraint_store->empty()) goto queryClassification_1;
		auto& X = std::get<1>(c_args);
		auto it0_0 = owlClassAssertion_constraint_store->template begin<0>(X,true);
		while ( !it0_0.at_end() ) {
			auto C(std::get<2>(*it0_0));
			auto it0_1 = logicalName_constraint_store->template begin<0>(C);
			while ( !it0_1.at_end() ) {
				auto URIC(std::get<1>(*it0_1));
				// Check history
				if (_history.rule_80->check( {{std::get<0>(c_args),std::get<0>(*it0_0),std::get<0>(*it0_1)}} )) {
					it0_0.lock();
					it0_1.lock();
					if (!c_stored_before) {
						c_it = queryClassification_constraint_store->add(c_args);
						auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename queryClassification::Constraint_callback(this,c_it));
						chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
						c_stored_before = true;
					}
					c_it.lock();
					// Body
					chr::Statistics::inc_nb_rules();
#line 418 "owl.chrpp"
					if (chr::ES_CHR::FAILURE == res( URIC )) return chr::ES_CHR::FAILURE;
#line 418 "owl.chrpp"
					CHECK_ES( afficher( "passage" ) );
					assert(c_stored_before);
					if (!c_it.alive()) {
						c_it.unlock();
						it0_0.unlock();
						it0_1.unlock();
						return chr::ES_CHR::SUCCESS;
					}
					c_it.unlock();
					if (!it0_0.alive()) {
						it0_1.unlock();
						goto it0_0_next;
					}
					it0_0.unlock();
					it0_1.next_and_unlock();
				} // End history
				else {
					++it0_1;
				}
			}
			++it0_0;
			it0_0_next:;
		}
	}
	// ***************************************************
	// queryClassification_1 <=> Rule NO_NAME, active constraint queryClassification( X ), occurrence 2
	[[maybe_unused]] queryClassification_1:
	{
		auto& X = std::get<1>(c_args);
		if (c_stored_before) {
			c_it.kill();
		}
		// Body
		chr::Statistics::inc_nb_rules();
#line 419 "owl.chrpp"

		return chr::ES_CHR::SUCCESS;
	}
	// Store constraint
	[[maybe_unused]] queryClassification_store:
		if (!c_stored_before) {
			c_it = queryClassification_constraint_store->add( c_args );
			auto ccb = chr::Shared_x_obj< chr::Logical_var_imp_observer_constraint >(new typename queryClassification::Constraint_callback(this,c_it));
			chr::schedule_constraint_callback(std::get<1>(c_args), ccb);
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_res(typename res::Type c_args, typename res::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] res_call:
	// ***************************************************
	// res_0 <=> Rule NO_NAME, active constraint res( X ), occurrence 1
	[[maybe_unused]] res_0:
	{
		if (res_constraint_store->empty()) goto res_1;
		auto& X = std::get<1>(c_args);
		auto it0_0 = res_constraint_store->template begin<0>(X);
		while ( !it0_0.at_end() ) {
#line 198 "owl.chrpp"
			// Begin guard
			if (
				( std::get<0>(*it0_0) != std::get<0>(c_args) )
			) {
				if (c_stored_before) {
					c_it.kill();
				}
				// Body
				chr::Statistics::inc_nb_rules();
#line 198 "owl.chrpp"
				CHECK_ES( true );
				return chr::ES_CHR::SUCCESS;
			} // End guard
			++it0_0;
		}
	}
	// ***************************************************
	// res_1 <=> Rule NO_NAME, active constraint res( X ), occurrence 2
	[[maybe_unused]] res_1:
	{
		auto& X = std::get<1>(c_args);
		// Check history
		if (_history.rule_79->check( {{std::get<0>(c_args)}} )) {
			if (!c_stored_before) {
				c_it = res_constraint_store->add(c_args);
				c_stored_before = true;
			}
			c_it.lock();
			// Body
			chr::Statistics::inc_nb_rules();
#line 411 "owl.chrpp"
			CHECK_ES( afficher( X ) );
			assert(c_stored_before);
			if (!c_it.alive()) {
				c_it.unlock();
				return chr::ES_CHR::SUCCESS;
			}
			c_it.unlock();
		} // End history
	}
	// Store constraint
	[[maybe_unused]] res_store:
		if (!c_stored_before) {
			(void) res_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_queryClassificationTemp(typename queryClassificationTemp::Type c_args, typename queryClassificationTemp::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] queryClassificationTemp_call:
	// Store constraint
	[[maybe_unused]] queryClassificationTemp_store:
		if (!c_stored_before) {
			(void) queryClassificationTemp_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlPrefix(typename owlPrefix::Type c_args, typename owlPrefix::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlPrefix_call:
	// Store constraint
	[[maybe_unused]] owlPrefix_store:
		if (!c_stored_before) {
			(void) owlPrefix_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlTempClassAssertion(typename owlTempClassAssertion::Type c_args, typename owlTempClassAssertion::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlTempClassAssertion_call:
	// Store constraint
	[[maybe_unused]] owlTempClassAssertion_store:
		if (!c_stored_before) {
			(void) owlTempClassAssertion_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_queryFullUri(typename queryFullUri::Type c_args, typename queryFullUri::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] queryFullUri_call:
	// Store constraint
	[[maybe_unused]] queryFullUri_store:
		if (!c_stored_before) {
			(void) queryFullUri_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_owlFunctionalDataProperty(typename owlFunctionalDataProperty::Type c_args, typename owlFunctionalDataProperty::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] owlFunctionalDataProperty_call:
	// Store constraint
	[[maybe_unused]] owlFunctionalDataProperty_store:
		if (!c_stored_before) {
			(void) owlFunctionalDataProperty_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_querySuperClassOf(typename querySuperClassOf::Type c_args, typename querySuperClassOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] querySuperClassOf_call:
	// Store constraint
	[[maybe_unused]] querySuperClassOf_store:
		if (!c_stored_before) {
			(void) querySuperClassOf_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}
chr::ES_CHR OWL2::do_querySubClassOf(typename querySubClassOf::Type c_args, typename querySubClassOf::Constraint_store_t::iterator c_it) {
	bool c_stored_before = !c_it.at_end();
	chr::Statistics::update_call_stack();
	[[maybe_unused]] querySubClassOf_call:
	// Store constraint
	[[maybe_unused]] querySubClassOf_store:
		if (!c_stored_before) {
			(void) querySubClassOf_constraint_store->add( std::move(c_args) );
		}
	return chr::ES_CHR::SUCCESS;
}

#include <stdio.h>


int main ( ) {
	int n ;
	double i , factorial=1 , dobutok=2 ;
	printf ( "Vvedite n\nn=" ) ;
	scanf ( "%d" , &n ) ;
	for ( i=1 ; i<=n ; i++ ) {
		factorial=factorial*i ;
		dobutok=dobutok*(2-(2/factorial))*(2-(2/factorial)) ;
	}
	printf ( "dobutok=%lf" , dobutok ) ;
	return 0 ;
}

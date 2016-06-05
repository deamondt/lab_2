#include <stdio.h>


int main ( ) {
	int m ;
	double i , factorial=1 , dobutok=1 ;
	printf ( "Vvedite m\mm=" ) ;
	scanf ( "%d" , &m ) ;
	for ( i=1 ; i<=m ; i++ ) {
		dobutok=dobutok*(24*i*i+(5/(factorial*i))) ;
	}
	printf ( "dobutok=%lf" , dobutok ) ;
	return 0 ;
}

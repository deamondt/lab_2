#include <stdio.h>
int main ( ) {
	int n , i ;
	printf ( "Vvedite lyboe natyral`noe chislo n:\n" ) ;
	printf ( "n=" ) ;
	scanf ( "%d" , &n ) ;
	for ( i=0 ; n > 0 ; i++ ) {
		n = n / 5 ;
	}
	
	printf ( "Vashe chislo sostoit iz %d tsifr" , i ) ;
	return 0 ;
}

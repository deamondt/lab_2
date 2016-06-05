#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	int n , g , k ;
	printf ( "Dobro pogalovat` v Algoritm Evklida\ n" ) ;
	printf ( "Vvedite n:\ nn=" ) ;
	scanf ( "%d" , &n ) ;
	printf ( "Vvedite g:\ng=" ) ;
	scanf ( "%d" , &g ) ;
	
	if ( g>=n ) {
		for (;n!=0; ) {
		k=g%n ;
		g=n ;
		n=k ;
		}
		printf ( "NOD = %d" , g ) ;	
	}else{
		printf ( "Vvedite g i n tak chto bi g>=n" ) ;
	}
	return 0 ;
}

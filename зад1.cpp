#include <stdio.h>

int main ( void )
{
	int a , b , c ;
	
	printf ( "\n\nVvedite tri chesla sherez probel: " ) ;
	scanf ( "%d %d %d", &a , &b , &c  ) ;
	
	if  ( ( a > b )&& ( a > c ) ) {
		printf ( "\nsamoe bolshoe sheslo: %d\n\n" , a ) ;
	} else {
		if  ( ( b > a ) && ( b > c ) ) {
			printf ("\nsamoe bolshoe sheslo: %d\n\n" , b ) ;
		} else {
			if  ( ( c > a )&& ( c > b ) ) {
				printf ( "\nsamoe bolshoe sheslo: %d\n\n" , c ) ;
			} else {}
		}
	}
	
	return 0 ;
}

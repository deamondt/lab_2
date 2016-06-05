#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( int argc , char *argv [ ] )  {
	int n ;
	double suma=0 , dodanok=1 , factorial=1 ;
	for ( n=1 ; dodanok>=0.001 ; n++ ) {
		factorial=factorial*n ;
		dodanok=pow(10 , n)/factorial ;
		suma=suma+dodanok ;
		printf ( "\n%lf" , dodanok ) ;
	}
	printf ( "\nsuma=%lf" , suma ) ;

	return 0 ;
}

#include <stdio.h>
#include <stdlib.h>
int proverka  ( int x )  {
	int i = 2 , ostacha ;
	while  ( i < x ) {
		ostacha = x % i ;
		if  ( ostacha == 0 )
		return 0 ;
		i++ ;
	}
	return 1 ;
}
int chisla_menshe ( int x ) {
	int i = 1 , y ;
	while ( i < x ) {
		y = proverka ( i ) ;
		if ( y == 1 )
		   printf ( "%d\ n" , i ) ;
	    i++ ;
	}
}
int main ( ) 
{
	int x , y , i ;
	printf ( "Kal`kylator dla proverki prostih chisel" ) ;
	printf ( "Vvedite x:\ nx = " ) ;
	scanf ( "%d" , &x ) ;
	y = proverka ( x ) ;
	if ( y == 1 ) 
		printf ( "Chislo %d - prostoe" , x ) ;
	else
		printf ( "Chislo %d - ne prostoe" , x ) ;
	chisla_menshe ( x ) ;
	return 0 ;
}

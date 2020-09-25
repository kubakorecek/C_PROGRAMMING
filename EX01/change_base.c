/******************************************************************************
* This program should change base of the integer upon given input
* Author: Bc, Jakub Korecek, Msci
* 
*
*
* @param n1 - the number
* @param b1 - the base 1 - source base 
* @param b2 - the base 2 - end base
*******************************************************************************
*/


#include<stdio.h>

/* Define the number of bits */
#define SIZE 32


void reapresentBinary(int *,int a[]);
void clearIntArray( int a[]);
void showIntArray(int a[]);
void initArray(int array[], int * size);
int main( void ) 
{

	int binaryForm[SIZE];
	int b1,n1,b2;
	printf( "Please, provide integer for the number, base i nwhich is given, and base you want to ouput, separeted by space EX:1 2 3\n" ); 
	
	if ( scanf ( "%d %d %d", &n1, &b1, &b2) !=3 )

{	printf("Wrong number were given, good bye\n");

	return 0;

}	else if( b1<2 || b2<2 )
{
	printf( "The base numbers are not valid!\n" );
	return 0;  

}
	
	reapresentBinary(&n1, binaryForm);
	showIntArray(binaryForm);
return 0;
}


void reapresentBinary(int * n1, int array[])
{
	clearIntArray(array);
	showIntArray(array);

}

void initArray(int array[], int * size)
{
	for(int i = 0; i<&size; i++)
	{
		array[i] = 0;
	}


}



void clearIntArray( int array[])
{	
	for(int i = 0; i<SIZE; i++)
	{
		array[i] = 0;
	}
}
void showIntArray(int array[])
{	
	for(int i = 0; i<SIZE; i++)
	{
		printf("%d ",array[i]);
	}

	printf( "\n" );
}

// Tested on Visual Studio 2012

#include "stdafx.h"

int fibonacciRecursion(int num){
	if( (num >= 0) && (num <=2) )
		return num;
	else 
		return ( fibonacciRecursion(num-2)+fibonacciRecursion(num-1) );
    // not return ( (num-2) + (num-1) );
}

int main()
{
	int i,num =15; //or scanf()
	
	//itterate through range
	for(i=0;i<num;i++)
		printf("%d ",fibonacciRecursion(i));

	getchar();
	return 0;
}

/* output
0 1 2 3 5 8 13 21 34 55 89 144 233 377 610
*/

#include "stdafx.h"

int factorialRecursion(int num){
	if( num == 0 || num == 1)
		return num;
	else
		return num*factorialRecursion(num-1);
}

int main()
{
	int num =5; //or scanf()

	printf("%d ",factorialRecursion(num));

	getchar();
	return 0;
}

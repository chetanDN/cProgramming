#include "stdafx.h"

int main()
{
	int fact=1,num =5,i; //or scanf()
	
	for(i=2;i<=num;i++)
		fact=fact*i;
	
	printf("%d ",fact);

	getchar();
	return 0;
}

/* Tested on Visual Studio 2012*/

#include "stdafx.h"

void fibonacci(int num){
	int t1,t2,sum,i;
	t1=0;
	t2=1;
	
	if(num==1)
		printf("%d ",t1);

	if(num>=2 )
		printf("%d %d ",t1,t2);

	i=3;
	while(i<=num){
		sum=t1+t2;
		printf("%d ",sum);
		t1=t2;
		t2=sum;
	i++;
	}
}

int main()
{
	int num =15; //or scanf()

	fibonacci(num);
	getchar();
	return 0;
}

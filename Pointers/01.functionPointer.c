#include <stdio.h>

void foo(int a){
    printf("value of a is %d\n",a);
}

int main()
{
    //void (*foo_ptr)(int) = &foo;
    void (*foo_ptr)(int) = foo; //without & works, as foo function name returns address
	//(*foo_ptr)(10);
	foo_ptr(10); //without * also works
	
	return 0;
}

/* 
---Result - Begin---
value of a is 10
---Result - End---
*/

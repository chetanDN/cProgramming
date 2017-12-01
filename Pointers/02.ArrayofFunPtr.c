/*Substitute to switch case*/

int sum(int a, int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int main()
{
    int (*fun_ptr[])(int,int)  = {sum, sub,mul};
    int a,b,choice;
	
	printf("enter space seperated two no and \nchoice \n0->Sum \n1->sub \n2->mul  \n");
	scanf("%d %d %d",&a,&b,&choice);
	
	printf("result= %d",fun_ptr[choice](a,b));
	return 0;
}

/*
i/p-> 
10 20 2

o/p->
enter space seperated two no and 
choice 
0->Sum 
1->sub 
2->mul  
result= 200
*/

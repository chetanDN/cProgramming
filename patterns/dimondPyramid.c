#include<stdio.h>
#include<math.h>

int main()
{
        int row=4,i,j,k,l;

        for(i=-row;i<=row;i++)
        {
                l=abs(i);

                for(j=0;j<l;j++)
                        printf(" ");

                for(k=0;k<(row-l)*2+1;k++)
                        printf("%d",k+1);

                printf("\n");
        }


return 0;
}

/////////////////////output
/*
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1


*/

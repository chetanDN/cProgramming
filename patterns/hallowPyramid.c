#include <stdio.h>
int main()
{
        int i,j,row=5;

        for(i=0;i<=row;i++)
        {
                for(j=-row;j<=row;j++)
                {
                        if(j>-i && j<i)         //logic to slectively print spaces
                                printf(" ");
                        else
                                printf("*");
                }
                printf("\n");
        }

return 0;
}

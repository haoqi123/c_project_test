#include<stdio.h>

int main(void)
{
    printf("◎◎\n");
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<=i+1;j++)
        {
            printf("■");
        }
        printf("\n");
    }
}
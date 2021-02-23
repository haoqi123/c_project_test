#include<stdio.h>

int main(void){

    int a = 1;
    int b = 1;
    int c;
    printf("month\tcount\n");

    for (int i = 3; i < 41; i++)
    {
        /* code */
        c = a+b;
        a = b;
        b = c;
        printf("%d\t%d\n",i,c);
        
    }
    
}
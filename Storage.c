#include<stdio.h>

int Value = 11;
int Data;

void Dmeo()
{
    int i = 10;
    static int j  = 20;
    register int k = 30;

    printf("Inside Dmeo Fucntion\n");
}

int main()
{
    int * P = NULL;
    P = (int *)malloc(5 * sizeof(int));

    Demo();
    
    return 0;
}
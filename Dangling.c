#include<stdio.h>

int main()
{
    int *P = NULL;

    P = (int *)malloc(5 * sizeof(int));

    free(P);

    //Now P is Dangling Pointer karan P free zalay tri to titch point kartoy
    return 0;
}
#include<stdio.h>
int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;

    printf("%d\n",*p); //6
    printf("%d\n",*q); //Address stored at value p.
    printf("%d\n",**q); //6
    printf("%d\n",**r);
    printf("%d\n",***r);
    ***r = 10;
    printf("x = %d\n",x);
    **q = *p+2;
    printf("x = %d\n",x);
}
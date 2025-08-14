#include<stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    //Pointer Arithmetic
    printf("%d\n",p);
    printf("size of int is %d bytes\n", sizeof(int));
    printf("%d\n", p+1); //takes us to the adress to the next address, increments p by 4 bytes


}
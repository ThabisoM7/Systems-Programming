#include<stdio.h>
void Increment(int *p)
{
    *p = (*p) + 1; 
//The value of tha addr of the pointer = the value +1
//Call by Reference method.
}
int main()
{
    int a;
    a = 10;
    Increment(&a);
    printf("a = %d",a);
}
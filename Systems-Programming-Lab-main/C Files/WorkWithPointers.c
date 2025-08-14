#include<stdio.h>

int main(){
int a;
a = 5;
int *p;
p = &a;    //&a = address of a
printf("a = %d\n", a);
*p = 12;   //dereferencing --Now A will be = 12 because of pointer;
printf("a = %d\n",a);

//We can also declare a pointer like: int*p = &a.
}
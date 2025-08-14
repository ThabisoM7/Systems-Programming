#include<stdio.h>

int main()
{

    int A[] = {2,4,5,8,1};
    int i;
    for (i =0;i<5;i++){

        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n",A+i);
        printf("Address = %d\n",A[i]);
        printf("Address = %d\n",*(A+1));
    }
 //printf("%d\n",A);
 // printf("%d\n",&A[0]);
//printf("%d\n",A[0]);
 //printf("%d\n", *A);

}
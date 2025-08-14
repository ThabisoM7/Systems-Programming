#include <stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int *A = (int*)malloc(n*sizeof(int)); //dynamically allocated array
    for(int i = 0;i<n;i++)
    {

        A[i] = i+1;
    }
    int *B = (int*)realloc(A, 2*n*sizeof(int)); 
    printf("Prev block address = %d, new address = %d\n",A,B);
    //it will create a new memory block of size 2n and copy the values of the previous memory block into this new memory block
    for(int i = 0; i<n;i++)
    {
        printf("%d\n",B[i]);
    }
    //How realloc works:
//If the size of the new block is greater than the size of the previous block
//check if previous block of memory can be extended else a new block is allocated. and info from previous is copied into new block
//then the previous block is then de-allocated.
}
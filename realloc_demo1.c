#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
    
    // step 1: allocate the memory
    Arr=(int *)malloc(5* sizeof(int));
    
    // step2: use the memory
    Arr=(int *)realloc(Arr,10*sizeof(int));
    // step3: Free the memory
    free(Arr);
    
    return 0;
}
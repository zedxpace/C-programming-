#include<stdio.h>
#include<stdlib.h>

int main()
{
    //memory allocation
    int *ptr = (int *)malloc(sizeof(int));

    //clear allocation : it allocates number of blocks
    int *cptr = (int *)calloc(1 ,sizeof(int));

    //realloc() : reallocates memory an move data from one structure to another 
    int *arr[100];
    int *rptr = realloc(*arr ,104);
    printf("%d %d" ,sizeof(arr) ,sizeof(rptr));

    //free() : use to deallocate the dynamic memory 
    free(cptr);
    cptr = NULL;
    
    return 0;
}
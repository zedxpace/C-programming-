#include<stdio.h>
#include<stdlib.h>

int add(int varOne ,int varTwo)
{
    return varOne + varTwo;
}

void print2dArray(int arr[][2]) //Using Pointers to print 2dArray
{
    for( int *i = &arr[0][0] ;i <= &arr[1][1] ;i++)
    {
        printf("%d ",*i);
    }
}

int *inc(int *ptr)  //Returning Pointer //Never try to return an auto *variable
{
    *ptr = (*ptr)+1;
    return ptr;
}

int main()
{
    int xyz  = 5;
    int *ptr = &xyz;
    
    *ptr = 22;      //if we will change the value of the pointer then the address it is pointing to will be changed
    //Assiging value to an uninitialized value may lead to segmentation fault error

    printf("Address : %d\n Value : %d\norg.Value : %d\n" ,ptr ,*ptr ,xyz);

    ptr = inc(ptr);
    printf("Address : %d\n Value : %d\norg.Value : %d\n" ,ptr ,*ptr ,xyz);

    int arr[][2] = {{ 1,3} ,{ 2,4}};
    print2dArray(arr);

    //pointer pointing to an entire array
    int arra[5]  = { 1 ,2 ,3 ,4 ,5 };
    int (*p)[5] = &arra;    //pointer to an entire array
    printf("\n%d %d\n" ,*p ,**p);

    //pointer to a function
    int result;
    int (*ptre)(int ,int) = &add;
    result = (*ptre)(10 ,20);
    printf("%d" ,result);

    //Void pointer
    int n = 10;
    void *vptr = &n;
    printf("\nvoid pointer  : %d\n" ,*(int*)vptr);

    //Null Pointer 
    int *nptr = NULL;   //good practice to initialize pointer with NULL
    printf("%d\n",*nptr);

    //Dangling Pointer 
    int *dptr  = malloc(sizeof(int));
    printf("%d\n",*dptr);
    free (dptr);
    dptr = NULL;    //mandatory else pointer still be holding the address which is deallocated using free 

    // wild pointers
    // int *wptr;
    // *wptr = 10;





    return 0; 
}
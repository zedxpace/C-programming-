#include <stdio.h>

#define N 10    //rows
#define M 20    //columns

int main()
{
    int arr[N];             //1D-Array
    int arr2D[N][M];        //2D-Array
    int const consArr[] = { 1 ,2 ,3 ,4 ,5 ,11 ,22 ,33};   //constant 1D-Array 

    printf("Size of an 1D-Array : %d\n" ,sizeof(arr)/sizeof(arr[0]));
    printf("Size of an 2D-Array : %d" ,4 * N * M );
    printf("constant Array : ");
    for( int i = 0; i<( sizeof(consArr)/sizeof(consArr[0])) ;i++)
    {
        printf("%d " ,consArr[i]);
    }

    return 0;

}
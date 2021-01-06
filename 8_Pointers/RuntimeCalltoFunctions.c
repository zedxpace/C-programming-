#include<stdio.h>

#define ops 4


float sum( float a ,float b )
{
    return a+b;
}

float sub( float a ,float b )
{
    return a-b;
}

float mult( float a ,float b )
{
    return a*b;
}

float div( float a ,float b )
{
    return a/b;
}

int main()
{
    float a;
    float b;
    float (*ptrFunction[ops])(float ,float) = { sum ,sub ,mult ,div };
    
    int choice;
    printf("0. sum \n1. sub\n2. mult\n3. div \n=> ");
    scanf("%d" ,choice);

    printf("Enter Two numbers : ");
    scanf("%f %f" ,&a ,&b );

    printf("output : %f",ptrFunction[choice](a ,b));

    
}
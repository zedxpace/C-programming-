#include<stdio.h>

int main()
{
    int varOne = 7;
    int varTwo = 2;

    //Bitwise AND operator : boths bits 1 then 1
    printf("Bitwise AND : %d\n" ,varOne&varTwo);
    
    //Bitwise OR operator : 1 when either bit is 1
    printf("Bitwise OR : %d\n" ,varOne|varTwo);
    
    //Bitwise NOT operator : 0 to 1 and 1 to 0
    printf("Bitwise NOT : %d\n" ,~varOne);

    //Left Shift : equivalent to multiplication by 2pow(rightOperand)
    printf("leftShift : %d\n" ,3<<1);

    //Right Shift : equivalent to division by 2pow(rightOperand)
    printf("rightShift : %d\n" ,3>>1);

    //conditionalOperator
    printf("outPut : %s" ,(varOne > varTwo) ? "varOne is greater" : "varTwo is greater");
    
    return 0;
}
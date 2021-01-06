#include <stdio.h>

//unions share same memory location ,size of union is considered as the longest datatype which it holds
typedef union
{
    int var;
    char varOne;
}Test;

int main()
{
    Test t;
    t.var = 98;
    t.varOne = 'U';

    printf("%c\n%d\n",t.varOne,t.var );
}
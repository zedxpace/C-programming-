#include <stdio.h>

int main()
{
    char *strLiteral = "Hello This is me The C";    //String Literal
    printf("%s\n" ,strLiteral);

    // "%.ns" : is used to print the part of the string
    printf("%.5s\n" ,strLiteral);

    puts(strLiteral);   //it automatically adds \n character at an end
    

}
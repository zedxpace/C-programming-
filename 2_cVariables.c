#include<stdio.h>
#define DEFAULT 100

int main()
{
    
    int autoVariable;               //By default Auto Variable ,default it will be intialized with random value.
    // extern int externVariable;      //when we want to use the name which is already defined either in same or diff file.
    register int registerVariable;  //reduces access time as it is stored in register
    const int constantVariable;     //Its Value cant be changed once defined like #define macro.

    printf("auto : %d\n\nregister : %d\nconstant : %d\nmacro : %d" ,autoVariable  ,registerVariable ,constantVariable ,DEFAULT);

}
#include <stdio.h>

int input( char str[] ,int n )  //custom Input Function in C
{
    printf("%denter : ",n);
    char ch ;
    int i = 0  ;

    while( (ch = getchar()) != '\n' )
    {
        if( i < n )
        {
            str[i++] = ch;
        }
        str[i] = '\0';
    }
    return i;
}

int main()
{
    char str[100];
    
    int n  = input(str,10);
    printf("%d characters entered\n%s" ,n ,str);
    
}
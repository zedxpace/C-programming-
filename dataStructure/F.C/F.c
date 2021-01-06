#include<stdio.h>
#include<string.h>

#define N 10
static int i = 0;

int countVowels(char *word)
{
    char vowels[] = {'a' ,'A' ,'e' ,'E','i' , 'I' ,'o' ,'O' ,'u' ,'U'};
    int count = 0;

    for( int i=0 ;i<strlen(word) ;i++)
    {
        for(int j = 0 ;j<10 ;j++)
        {
            if(word[i] == vowels[j])
            {
                
                count++;
            }
        }
    }
    return count;
}


void openFile(char *name)
{
    FILE *fp = fopen(name ,"r");
    int size = 100;
    char data[size];
    char *mdata;

    int max =-1;
    int indx = 0;
    char *dat[10];
    int countn[10];

    if(fp == NULL)
    {
        printf("Cant open File");
    }
    while (fgets(data, size, fp) != NULL)
    {
        int n = countVowels(data);
        if( n>max )
        {
            max = n;
            mdata = data;
            n = -1;
        }
        else if(n == max)
        {
            *(dat+i) = data;
            countn[i++] = n;

        }
    }
    
    printf("%s %d\n",mdata ,max);
    for(int k = 0;k<i;k++)
    {
        if(max == countn[k])
            printf("%s - %d\n",*(dat[k]) ,max);
    }
    fclose(fp);
}

int main(int argc ,char *argv[])
{
    char *name = argv[0];
    printf("%s" ,name);
    openFile(name);

}
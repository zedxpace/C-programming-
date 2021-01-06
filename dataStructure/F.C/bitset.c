#include<stdio.h>

int Get1Count( unsigned int number  )
{

    int count  = 0;

    while(number > 0)
    {
        if(number & 1 == 1)
        {
            // printf("%d\n",number &1);
            count++;
        }
        number = number >> 1;
        // printf("\n%d " ,number);
    }
    return count;
}



FILE *openFile( char *fileName )
{
    FILE *filePointer = fopen(fileName ,"r");

    return filePointer;
}

void maxBitSet( FILE *filePointer )
{
    	int i = 0;
	int arr[100];
	int count[100];
    
    int maxNumbe = 0;
    fscanf (filePointer, "%d", &arr[i]);    
  while (!feof (filePointer))
    {  
        i++;
      fscanf (filePointer, "%d", &arr[i]);   
 
    }
    int max = 0;

    for(int j = 0;j<i;j++)
    {
        count[j] = Get1Count(arr[j]);
        if(count[j] > max)
        {
            max = count[j];
            maxNumbe = arr[j];
        }

    }

    printf("%d %d",maxNumbe ,max);
    
   for(int j = i-1 ;j>-1 ;j--)
    {
        if(max == count[j] && arr[j] != maxNumbe )
        {
        printf("%d %d\n",arr[j] ,max);
        }
    }
        
}


int main(int argc ,char *argv[])
{
    int number  = 10;
    int count = 0;

    char *filename = argv[1];


    FILE *pointer = openFile(filename);
    if(pointer == NULL )
    {
        printf("file Not found");
	    return 0;
    }
    maxBitSet(pointer);

    return 0;
    }
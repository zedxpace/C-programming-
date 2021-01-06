#include<stdio.h>
#include<stdlib.h>

typedef struct dictionary
{
    char *data[5];
    int count;
} dict;


int main()
{
    char arr[4][10] = {
        "asdfg","asd","qwerty","s"
    };
    int coutn[4] = {5 , 3 ,6 ,1};
    dict *d[20];
    for(int i = 0;i<3;i++)
    {
        d[i]->data = arr[i];
        d[i].count = coutn[i];
    }

    for(int i = 0;i<3;i++)
    {
        for(int j = i+1;j<4;j++)
        {
            if(d[i].count > d[j].count)
            {
                int temp = d[i].count;
                d[i].count = d[j].count;
                d[j].count = temp;

                char *temp1 = d[j].data;
                d[i].data = d[j].data;
                d[j].data = temp1;
            }
        }
        
    }
for(int j = 0;j<4;j++)
        {printf("%s %d\n" ,d[j].data ,d[j].count);
            
        }
}
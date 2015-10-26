#include<stdio.h>

int array[5]={1,2,3,4,5};
int array2[5];
int *ptr;

void copyarreglo(int *ptr)
{
	int i;
	for( i=0;i<5;i++)
	{
	array2[i]=*ptr++;
	}
}

int main()
{
	ptr=array;
	copyarreglo(ptr);
	int i;
        for(i=0;i<5;i++)
        {
        printf("%d\n",array2[i]);
        }
}

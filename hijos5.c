#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int array[1000];
int i;

int procesos(int nProc)
{
        for(i=0;i<nProc;i++)
                if(fork()==0)
                        return i;
}

int main()
{
        int sum=0;
        int pid;
        pid=procesos(10);
	for(i=0;i<1000;i++)
	{
		array[i]=i+1;
		//printf("array[%d]= %d\n",i,array[i]);
	}
		if(pid==0)
		{
			printf("pid padre \n");
		}
		else
		{
			//printf("pid hijo %d\n",pid);
			for(i=((pid-1)*100);i<100+((pid-1)*100);i++)
			{
			sum += array[i];
			}printf("pid hijo %d con suma %d\n",pid,sum);
		}
}


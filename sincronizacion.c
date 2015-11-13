#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<wait.h>

int procesos(int nProc)
{
	int i;
	for(i=1;i<=nProc;i++)
		if(fork()==0)
			return i;
	return 0;
}
int main()
{
	int x;
	int status;
	printf("ingresa numero de procesos\n");
	scanf("%d",&x);
	int pid;
	pid=procesos(x);
	int i;
		if(pid==0)
		{
			for(i=0;i<x;i++)
			{
			wait(&status);
			}printf("soy el padre\n");
		}
		else
		{
			//printf("soy el hijo %d\n",i);
			printf("soy el hijo %d\n",pid);
		}
}


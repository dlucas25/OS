#include<stdio.h>

int matriz[3][3];
int **ptr;
int *apuntador;
int *apun;
int *apun2;
int main()
{
	matriz[0][0]=1;
	matriz[0][1]=2;
	matriz[0][2]=3;
	matriz[1][0]=4;
	matriz[1][1]=5; //imprimir
	matriz[1][2]=6;
	matriz[2][0]=20;
	matriz[2][1]=8;
	matriz[2][2]=40;

	apuntador=matriz[0];
	apun=matriz[1];
	apun2=matriz[2];
	ptr=&apuntador;
	//apuntador=matriz[0];
	//ptr=&apuntador;
	//printf("%d\n"),*(*(matriz+2)+2));
	printf("%d\n",*(*(ptr+1)+2));
}



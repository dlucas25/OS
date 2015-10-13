#include<stdio.h>

//char *variable[];
int i,j;
int contador(char *variable)
{
	j=0;
	while(*(variable+j) != '\0')
	{
		j++;
	}
	printf("tamaño %d\n",j);
}

int main()
{
	char variable[20];
	printf("Ingresa una cadena\n");;
	scanf("%s",variable);
	contador(variable);
}

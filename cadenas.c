#include<stdio.h>

char cadena[10] = ("hola mundo");
int arreglo[10] = {0,1,2,3,4,5,6,7,8,9};
char *cadena1 =  "hola mundo mas largo";
char *meses[12] = {"enero","febrero","marzo","abril","mayo"};
int i , j;
char *aux;
/* void contador (char *cadena, tam)
{
	int i=0;
	while (i<tam)
	{
	if (*cadena = \o )
		printf("\o"\n, *cadena);
	} 

} */


int main()
{
	//printf("%c %c %c\n", cadena1[0],cadena1[1],cadena1[2]);
	//for (i=0; i<12;i++)
	//printf("%s\n", meses[i]);
	//contador(*meses,12);
	for (i=0;i<4;i++)
	{
		j=0;
		aux= meses[i];
		while(*(aux+j) != '\0')
		{
			j++;
		}
		printf("%c",*(aux+j-3));
		printf("%c",*(aux+j-2));
		printf("%c",*(aux+j-1));
		printf("\n");
	}
//todas las canedas terminan en '\o' 
}


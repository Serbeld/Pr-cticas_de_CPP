/*Realizar una funci�n llamada par, que toma un n�mero entero como par�metro, 
y devuelve 1 si es par o devuelve 0 si es impar. NOTA: Para saber si un n�mero entero es par, 
al dividirlo entre 2 su resto debe ser 0*/

//MOD==Residuo==(%)
//DIV==Divisi�n entera==(/)

#include <stdio.h>
#include <conio.h>

int par(int x);

main()
{
	int a;
printf("Ingrese un numero ");
	scanf("%d",& a);
par(a);

getch();
return 0;
} 

int par(int x)
{
	int num;
num=x%2;

	if(num==0)
	{
printf("El resultado es: 1");
	}	
	else
	{
printf("El resultado es: 0");
	}
	
}

/*Realizar dos funciones: una llamada pedir, que no toma par�metros, y devuelve un n�mero entero; 
y otra llamada triple, que toma un n�mero entero como par�metro y devuelve un n�mero entero.  
La funci�n pedir debe pedir por teclado un n�mero entero, y devolverlo. 
La funci�n triple, debe calcular el triple del n�mero que recibe como par�metro y devolver el resultado.*/

#include <stdio.h>
#include <conio.h>

int a;

void pedir();
int triple(int x);

main()
{
pedir();
triple(a);
	
	getch();
	return 0;
}

void pedir()
{
	printf("Escriba un numero entero ");
scanf("%d",& a);
}

int triple(int x)
{
	int triple;
triple=x*3;
	printf("El triple del numero ingresado es: %d",triple);
}

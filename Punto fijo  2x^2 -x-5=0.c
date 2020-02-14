/*Alumno: Emiliano Sanchez Olivares
Grupo: 2SV2
Curso: Metodos Numericos
Tarea: 3.1

*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float xInicial, error;
float raiz,e_test=0, f_xr,f_xanterir,xr,xranterior;
int cont=0;
float f_x(float x)
{
    return (sqrt((x+5)/2));
}

float puntofijo(float Xi, float e)
{
do{
   //operaciones
xr=f_x(Xi);
printf("\nValor de xr:%f",xr);
printf("\nValor de xi:%f",Xi);
e_test=fabs(xr-Xi);
Xi=xr;
printf("\n\nValor de xr:%f",xr);
printf("\nValor de xi:%f",Xi);
printf("\nValor del error:%f",e_test);
cont=cont+1;
}
while(e_test>e);
raiz=xr;
printf("Numero de iteraciones:%i",cont);
return raiz;
}
int main()
{
printf("\n\tPrograma que calcula la raiz de la funcion    2x^2 -x -5 = 0 por el metodo de punto fijo   ");
printf("\nDigita un valor inicial para empezar a evaluar la funcion");
printf("\nX inicial: ");
scanf("%f",&xInicial);

printf("\nDigita el error permitido: ");
scanf("%f",&error);

puntofijo(xInicial,error);

printf("\nEL valor de la raiz es aproximadamente:%f",raiz);


getch();
return 0;
}

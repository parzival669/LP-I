#include <stdio.h>
#include <locale.h>
#include <math.h>
void conversor (int);
void conversor (int seg){
	int segundos,minutos,horas;

	segundos=seg;
	minutos=segundos/60;
	segundos=segundos%60;
	horas=minutos/60;
	minutos=minutos%60;
	
	printf ("horas: %d, minutos: %d, segundos: %d",horas,minutos,segundos);
}

int main(){
int seg;
setlocale(LC_ALL,"Portuguese");

printf ("escreva os segundos:  ");
scanf ("%d",&seg);
conversor (seg);

return 0;
}

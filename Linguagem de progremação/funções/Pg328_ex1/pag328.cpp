#include <stdio.h>
#include <locale.h>
#include <math.h>

int positivo_negativo (int);
int positivo_negativo (int a){
if(a>=0) return 1;
else return 0;
}

int main(){
int a, res;
setlocale(LC_ALL,"Portuguese");

printf ("Digite o valor:  ");
scanf ("%d",&a);
res = positivo_negativo (a);

	if (res == 0) printf ("numero negativo !!"); else printf ("numero positivo ou igual a zero !!");
return 0;
}

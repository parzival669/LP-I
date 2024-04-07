#include <stdio.h>
#include <locale.h>
#include <math.h>

int somar (int, int);
int somar (int num1,int num2){
	int x, j, s=0;
for (x=num1+1;x<num2;x++){
	s = s + x;
	}
	return s;
}

int main(){
int num1, num2, s;
setlocale(LC_ALL,"Portuguese");


printf ("Digite o valor 1:  ");
scanf ("%d",&num1);

printf ("Digite o valor 2:  ");
scanf ("%d",&num2);

if (num1<num2) s = somar (num1,num2);
else s = somar (num2,num1);


printf ("A soma e: %d",s);
return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>
int somar (int, int, int);
int somar (int num1, int num2,int num3){
	int x, s=0;
for (x=num2;x<=num3;x++){
	if(x%num1==0)
	s = s + x;
	}
	return s;
}

int main(){
int num1, num2, num3, s;
setlocale(LC_ALL,"Portuguese");


printf ("Digite o valor a:  ");
scanf ("%d",&num1);

printf ("Digite o valor b:  ");
scanf ("%d",&num2);

printf ("Digite o valor c:  ");
scanf ("%d",&num3);

if (num2<num3) s = somar (num1,num2,num3);
else s = somar (num1,num3,num2);


printf ("A soma e: %d",s);
return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	int a,b,soma,r1,r2,x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite os três números:\n ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Digite o caso:\n ");
	scanf("%d",&x);
	
	switch(x){
	
	case 1:
		
		soma = a + b; printf("A soma é: %d",soma);
	
		break;
	
	case 2:
		
		r1 = sqrt(a); r2 = sqrt(b); printf("A raiz quadrada é:  %d %d",r1,r2);
		
		break;
			
			}	
		
return 0;
}		

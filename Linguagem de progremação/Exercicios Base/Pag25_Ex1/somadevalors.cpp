#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2,n3,n4,s;
	printf("Insira o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("Insira o segundo numero: ");
	scanf("%f",&n2);
	
	printf("Insira o terceiro numero: ");
	scanf("%f",&n3);
	
	printf("Insira o quarto numero: ");
	scanf("%f",&n4);
		
	s = (n1+n2+n3+n4);
	printf("A media eh: %.2f" ,s);
	
	return 0;
}



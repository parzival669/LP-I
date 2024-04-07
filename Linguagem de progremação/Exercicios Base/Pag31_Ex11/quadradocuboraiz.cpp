#include <stdio.h>
#include <locale.h>
#include <cmath>


int main(){
	
	float n1, n2, n3, n4;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o numero: ");
	scanf("%f",&n1);
	
	n2 = n1^2 ;
	
	n3 = n1^3 ;
	
	n4 = sqrt(n1);

	
	
	printf("O quadrado do numero é: %0.2f" ,n2);
	printf("O cubo do numero é: %0.2f" ,n3);	
	printf("A raiz quadrada do numero é: %0.2f" ,n4);	

	
	return 0;
}

#include <stdio.h>
#include <locale.h>
int main(){
	
	float sb, novos;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o salario: ");
	scanf("%f",&sb);
	
	novos = (sb*0.9)+50 ;
	
	printf("O salario novo é: %0.2f" ,novos);	
	
	return 0;
}

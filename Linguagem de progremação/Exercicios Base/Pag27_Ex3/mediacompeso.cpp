//comentario
/*
comentario
de
varias
linhas
*/

// Diretivas de compilção  (#Include e #define) (Include, incluir coisas no meu programa) (define, definir constantes)


// Código da função int main()

#include <stdio.h>

int main(){
	float n1,n2,n3,p1,p2,p3,media;
	printf("Insira a primeira nota: ");
	scanf("%f",&n1);
	
	printf("Insira a segunda nota: ");
	scanf("%f",&n2);
	
	printf("Insira a terceira nota: ");
	scanf("%f",&n3);
	
	printf("Insira o primeira peso: ");
	scanf("%f",&p1);
	
	printf("Insira o segunda peso: ");
	scanf("%f",&p2);
	
	printf("Insira o terceira peso: ");
	scanf("%f",&p3);
	
	media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
	
	printf("O media eh: %0.2f" ,media);
	return 0;
}

//comentario
/*
comentario
de
varias
linhas
*/

// Diretivas de compil��o  (#Include e #define) (Include, incluir coisas no meu programa) (define, definir constantes)


// C�digo da fun��o int main()

#include <stdio.h>

int main(){
	float n1,n2,n3,media;
	printf("Insira o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("Insira o segundo numero: ");
	scanf("%f",&n2);
	
	printf("Insira o terceiro numero: ");
	scanf("%f",&n3);
		
	media = (n1+n2+n3)/3;
	printf("A media eh: %.2f" ,media);
	
	return 0;
}

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
	float  a,r;
	printf("Insira o raio: ");
	scanf("%f",&r);
	a = 3.14*r*r;
	printf("A area eh: %0.2f" ,a);
	return 0;
}

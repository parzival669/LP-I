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
	float area,base,h;
	printf("Insira a base: ");
	scanf("%f",&base);
	printf("Insira a altura: ");
	scanf("%f",&h);
	area = (base*h)/2;
	printf("A  eh: %0.2f" ,area);
	
	return 0;
}

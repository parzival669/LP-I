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
	float s1,s2,p1;
	printf("Insira o salario: ");
	scanf("%f",&s1);
	printf("Insira a aumento: ");
	scanf("%f",&p1);
	s2= s1+s1*(p1/100);
	printf("O salario eh: %0.2f" ,s2);
	return 0;
}

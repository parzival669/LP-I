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
	float s1,s2;
	printf("Insira o salario: ");
	scanf("%f",&s1);
	
	s2 = s1+s1*0.05-s1*0.07;
	printf("A soma eh: %0.2f" ,s2);
	
	return 0;
}

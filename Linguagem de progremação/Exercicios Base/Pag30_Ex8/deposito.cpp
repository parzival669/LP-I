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
	float dep,tax,rend;
	printf("Insira o deposito: ");
	scanf("%f",&dep);
	printf("Insira o taxa de juros: ");
	scanf("%f",&tax);
	rend = dep + dep*(tax/100);
	printf("A  eh: %0.2f" ,rend);
	
	return 0;
}

#include <stdio.h>
#include <locale.h>

int main(){
	int n1, n2;
	
	setlocale(LC_ALL, "Portuguese");
	printf("numero 1: ");
	scanf("%d",&n1);
	
	printf("numero 2: ");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
	printf("Os numeros são iguais");
	
	}
	
		else
	
		{	
			if(n1>n2){
			 
			printf("Menor numero e = %d",n2);
			printf("	Maior numero e = %d",n1);	
			
			}
		
	
			else
	
			{
			printf("Menor numero e = %d",n1);	
			printf("	Maior numero e = %d",n2);	
		
			
			}
		}
	

	return 0;
}



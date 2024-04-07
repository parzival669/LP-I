#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2,n3, media;
	printf("Insira a nota de trabalho de laboratorio: ");
	scanf("%f",&n1);
	
	printf("Insira a nota de avaliação semestral: ");
	scanf("%f",&n2);
	
	printf("Insira a nota de exame final: ");
	scanf("%f",&n3);
	
	media = (n1+n2+n3)/(3);
	
	printf("O media eh: %0.2f" ,media);
	
	if(media>=7)
	{
		printf("Aprovado ");
	}
	
	else
	
	{
		if (media>=3){	
		printf("Exame ");
		}
		else
		{	

			printf("Reprovado ");	
		}
			
		
	}
	
	
		
return 0;
}









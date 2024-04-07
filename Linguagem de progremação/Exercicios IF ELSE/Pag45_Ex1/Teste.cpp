#include <stdio.h>
#include <locale.h>

int main(){
	float n1,n2,n3,media;
	printf("Insira a nota de trabalho de laboratorio: ");
	scanf("%f",&n1);
	
	printf("Insira a nota de avaliação semestral: ");
	scanf("%f",&n2);
	
	printf("Insira a nota de exame final: ");
	scanf("%f",&n3);
	
	media = (n1*2+n2*3+n3*5)/(2+3+5);
	
	printf("O media eh: %0.2f" ,media);
	
	if(media>=8)
	{
		printf("Conceiro : A ");
	}
	
	else
	
	{
		if (media>=7){	
		printf("Conceiro: B ");
		}
		else
		{	
			if (media>=6){
			printf("Conceiro: C ");	
			}
			
			else
			{
				if (media>=5){
				printf("Conceiro: D ");	
				}
				else
				{
					printf("Conceiro: E ");	

				}
			}
		}
	}
	
		
return 0;
}









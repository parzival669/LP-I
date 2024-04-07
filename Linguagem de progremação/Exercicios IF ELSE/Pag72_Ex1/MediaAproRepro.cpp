#include <stdio.h>
#include <locale.h>

int main(){
	int n1, n2, n3, n4, med;
	
	setlocale(LC_ALL, "Portuguese");
	printf("numero 1: ");
	scanf("%d",&n1);
	
	printf("numero 2: ");
	scanf("%d",&n2);
	
	printf("numero 3: ");
	scanf("%d",&n3);
	
	printf("numero 4: ");
	scanf("%d",&n4);	
	
	med = (n1+n2+n3+n4)/4;
	
	if(med>=7){
	printf("Aprovado = %d",med);
	}
	
		else
			
		{				 
			printf("Reprovado = %d",med);
		}
			
	return 0;
}



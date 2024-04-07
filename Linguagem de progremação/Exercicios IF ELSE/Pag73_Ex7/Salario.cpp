#include <stdio.h>
#include <locale.h>

int main(){
	int s1, a1;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Salario: ");
	scanf("%d",&s1);
			
			if(s1<=500){
		
			a1=(s1*1.30);
			printf("O reajuste e = %d",a1);	
			}
		
	
			else
	
			{
			printf("Sem direito reajuste e = %d",a1);	
			}
		
	
	return 0;
}



#include <stdio.h>
#include <locale.h>

int main(){
	int s1, a1;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Salario: ");
	scanf("%d",&s1);
			
			if(s1<=300){
			a1=(s1*1.35);
			 
			printf("O reajuste e = %d",a1);	
			return 0;
			}
		
	
			else
	
			{
			a1=(s1*1.15);
			printf("O reajuste e = %d",a1);	
			return 0;
			}
		
	
	return 0;
}



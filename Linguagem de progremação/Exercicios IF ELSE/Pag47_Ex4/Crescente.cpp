#include <stdio.h>
#include <locale.h>

int main(){
	int a,b,c;
	printf("Insira o primeiro numero: ");
	scanf("%d",&a);
	
	printf("Insira o segundo numero: ");
	scanf("%d",&b);
	
	printf("Insira o terceiro numero: ");
	scanf("%d",&c);
	
	if(a<=b && b<=c)
	{
		printf("primeiro numero : = %d",a); 
		printf("segundo numero : = %d",b);
		printf("terceiro numero : = %d",c);
		
	}
	
	else
	
	{
		if (b<=a && a<=c)
		{	
		printf("primeiro numero : = %d",b);
		printf("segundo numero : = %d",a);
		printf("terceiro numero : = %d",c);		
		}
		
		else
			{	
				if (c<=b && b<=a){
				printf("primeiro numero : = %d",c);
				printf("segundo numero : = %d",b);
				printf("terceiro numero : = %d",a);	
				}
			
			else
			{
				if (a<=c && c<=b){
				printf("primeiro numero : = %d",a);
				printf("segundo numero : = %d",c);
				printf("terceiro numero : = %d",b);				
				}	
					else
				{
					if (b<=c && c<=a){
					printf("primeiro numero : = %d",b);
					printf("segundo numero : = %d",c);
					printf("terceiro numero : = %d",a);				
					}	
						else
					{
						if (c<=a && a<=b){
						printf("primeiro numero : = %d",c);
						printf("segundo numero : = %d",a);
						printf("terceiro numero : = %d",b);				
					}			
				}		
				}		
			}
		}
	}
return 0;
}		

	
	
		










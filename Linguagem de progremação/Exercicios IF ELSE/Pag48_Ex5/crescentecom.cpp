#include <stdio.h>
#include <locale.h>

int main(){
	int n1,n2,n3,x;
	setlocale(LC_ALL, "Portuguese");
	printf("digite os quatro numeros:\n ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&x);
	
	if(x>=n3)printf("\n\nOrdem: %d %d %d %d\n",x,n3,n2,n1); 
	else if(x<=n3 && x>=n2)	printf("\n\nOrdem: %d %d %d %d\n",n3,x,n2,n1); 
		else if(x<=n2 && x>=n1)	printf("\n\nOrdem: %d %d %d %d\n",n3,n2,x,n1);			
			else printf("\n\nOrdem: %d %d %d %d\n",n3,n2,n1,x);
		
return 0;
}		

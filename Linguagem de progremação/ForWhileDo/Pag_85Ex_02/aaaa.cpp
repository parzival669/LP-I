#include <stdio.h>
#include <locale.h>
	int main(){
	float e;
	int n,j,x,fat;
	setlocale(LC_ALL, "Portuguese");
	printf("Numero: ");
	scanf("%d",&n);
	e=1;	
	for (x=1;x<=n;x++){
		fat=1;
		 for (j=1;j<=x;j++){
		 fat=fat*j;
	}
		 e = e+1./fat;
		 	
		printf("%d = %.2f\t",x,e);	
}
}

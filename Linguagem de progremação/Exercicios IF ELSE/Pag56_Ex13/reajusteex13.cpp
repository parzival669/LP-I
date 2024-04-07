#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	int s,r,x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o salario:\n");
	scanf("%d",&s);
	printf("Digite o caso:\n");
	scanf("%d",&x);

	switch(x){
	
	case 1:
	
	if(s<=500){ r = s*1.05;	printf("O reajuste é:%d",r); }
		else if(s<850){	r = s*1.1; printf("O reajuste é:%d",r) ;}
			else {r = s*1.15; printf("O reajuste é:%d",r); }
		
	break;
			
			
	case 2:
	if(s>=1500){ r = s+25;	printf("O reajuste é:%d",r); }
		else if(s<=1500 && s>=750){	r = s+50; printf("O reajuste é:%d",r) ;}
			else if(s<750 && s>=450){r = s+75; printf("O reajuste é:%d",r) ;}
				else {r = s+100; printf("O reajuste é:%d",r) ;}
	break;
	
	case 3:
		if(s<=700) 	printf("Mal remunerado"); 
		else printf("Bem remunerado") ;
	break;
	}
return 0;
}		

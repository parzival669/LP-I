#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	int s,r,x;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite os dias:\n");
	scanf("%d",&s);
	
	switch(x){
	
	case 1:
	
	if(s<=500){ r = s*1.05;	printf("O reajuste é",r); }
		else if(s<850){	r = s*1.1; printf("O reajuste é",r) ;}
			else {r = s*1.15; printf("O reajuste é",r); }
		
	break;
			
			
	case 2:
	if(s<=1500){ r = s+25;	printf("O reajuste é",r); }
		else if(s<=1500 && s>=750){	r = s+50; printf("O reajuste é",r) ;}
			else if(s<750 && s>=450){r = s+75; printf("O reajuste é",r) ;}
				else {r = s+100; printf("O reajuste é",r) ;}
	break;
	
	case 3:
		if(s<=700) 	printf("Mal remunerado"); 
		else printf("Bem remunerado") ;
	break;
	}
return 0;
}		

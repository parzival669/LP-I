#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main(){
	int	cod , hora, i;
	float valorh , salario , auxilio, st; 
	char turno , categ;
	
	
	for (i=1;i<=3;i++){
	
	
	printf("\nCodigo: ");
	scanf("%d",&cod);
	printf("Horas trabalhadas: ");
	scanf("%d",&hora);
	printf("Categoria: ");
	categ = getche();
	printf("\nTurno: ");
	turno = getche();
	
	

	
	if(categ=='G' && turno=='N')
	{
		valorh = 150 * 0.18;
	}

	else
	
	if (categ=='G' && turno=='M' || turno=='V')
	{
		valorh= 150*0.15;
	}
	
	else
	
	if(categ=='O' && turno=='N')
	{
		valorh= 150*0.13;
	}
	
	else
	
	if (categ=='O' && turno=='M' || turno=='V')
	{
		valorh=150*0.1;
	}

	salario = hora * valorh;
	
	if (salario<300) 
	{
		auxilio = salario * 0.2;
	}
	
	else
	
	if (salario<=600) 
	{
		auxilio = salario * 0.15;
	}
	
	else
	
	{
		auxilio = salario * 0.05;
	}
	
	st = salario + auxilio;
	
	printf("\nCod= %d",cod);
	printf("\nSalario inicial e = %.2f",salario);
	printf("\nAuxilio e = %.2f",auxilio);
	printf("\nSalario total e = %.2f",st);
	
}
return 0;
}


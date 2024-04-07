#include <stdio.h>
#include <locale.h>

int main(){
	int cod,ind,i,nv,tv=0;//nv = numero de veiculos  tv = total de veiculos
	int cid_alto, cid_baixo, ind_alto=0, ind_baixo=1000000000,dev=0,ta;		
	float media,mediaaci;//media=media de veiculos mediaaci=media de acidentes	
	
	i=1;
	
	for(i=1;i<=5;i++){
	
	printf("Cidade: ");
	scanf("%d",&cod);
	printf("Numero de veiculos: ");
	scanf("%d",&nv);
	printf("Indice de acidentes: ");
	scanf("%d",&ind);
	
	if (nv<2000){
		ta = ta + ind;
		dev = dev+1;
	}
	

	tv = tv + nv;
		
	if (ind>ind_alto)
	{
		cid_alto = cod;
		ind_alto = ind;	
	}
	
	if (ind<ind_baixo)
	{
		cid_baixo = cod;
		ind_baixo = ind;
	}
	
	
}
	media = tv/5.;
	mediaaci = (float)ta/dev;
	printf("O indice mais alto e = %d %d",cid_alto,ind_alto);	
	printf("    O indice mais baixo e = %d %d",cid_baixo,ind_baixo);
	printf("    A media de veiculos e= %f ",media);	
	printf("    A media de acidentes e= %f ",mediaaci);
	printf("    Total de cidades= %d ",dev);
	printf("    Total de cidades e= %d ",ta);


return 0;
}


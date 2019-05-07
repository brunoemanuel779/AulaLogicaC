#include <stdio.h>
#include <math.h>

main(){
	int sexo,tc,i=1,c,s;
	
	printf("Contador De Mulheres");
	while(i!=0){
		
		printf("\n\nSexo ");
		printf("\n1-Feminino");
		printf("\n2-Masculino");
		printf("\nDigite:");
		
		
		scanf("%d",&sexo);
		if(sexo==1){
			printf("\nFeminino\n");
		}if(sexo==2)
		{
			printf("\nMasculino\n");
		}
		printf("\nTempo De Carteira:");
		scanf("%d",&tc);
		printf("\nIdade:");
		scanf("%d",&i);
		
		
		if(sexo==1 && i>=24 && i<=30 && tc>=3 ){
			c=c+1;
			printf("\nContador:%d",c);
		}
	}
		if(i==0){
			printf("\nFim");
		}
		
	
			
	}
		
	
		
	
	
	


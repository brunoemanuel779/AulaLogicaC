#include <stdio.h>

main(){
	int s,v,maior=0,menor=3,cf,cm;
	float a,maf,sm;
	while(v<=10){
	
	printf("\nDigite Sexo");
		printf("\n\nSexo ");
		printf("\n1-Feminino");
		printf("\n2-Masculino");
		printf("\nDigite:");
		
		
		scanf("%d",&s);
		if(s==1){
			printf("\nFeminino\n");
		}
		
		printf("\nAltura:");
		scanf("%f",&a);
		if(a>maior){
			maior=a;
		}
		if(a<menor){
			menor=a;
		}
		
		if(s==1){
            cf++;
			sm=sm+a;
			maf=sm/cf;
			printf("\nMedia Altura Feminina:%3.1f",maf);
		}
		if(s==2){
			cm++;
			printf("\nQuantidade Homen:%d",cm);
		}
		
		v++;
    }
        printf("\nMaior Altura:%d",maior);
		printf("\nMenor Altura:%d",menor);
	
		
}

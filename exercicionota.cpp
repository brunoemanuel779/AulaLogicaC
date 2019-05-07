#include <stdio.h>

main(){
	
	float n1,n2,n3,m;int dl,f,lf;
	printf("\n Nota 1:");
	scanf("%f",&n1);
	printf("\n Nota 2:");
	scanf("%f",&n2);
	printf("\n Nota 3:");
	scanf("%f",&n3);
	
	if (n1>n2 || n2>n3)
	{
	 m=(n1+n3)/2;
	
	}
	else{
		m=(n2+n3)/2;
	}
        printf("\n Media:%2.1f",m);
        printf("\n Dias Letivos:");
	scanf("%d",&dl);
	printf("\n Faltas:");
	scanf("%d",&f);
	lf = dl * 0.25;
	if ((m>=6 && f<=lf)){
		("Aprovado");
	}else{
		("Reprovado");
		if (m<=6){
			printf("Reprovado Por Nota");
		}
		if(f>=lf){
			printf("Reprovado Por Falta");
		}
			
		
	}
			
		
}

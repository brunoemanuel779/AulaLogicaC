#include <stdio.h>

main(){
	   float p,a,imc;
	    
	    printf("\nDigite Altura:");
	    scanf("%f", &a);
	    printf("\nDigite Peso:");
	    scanf("%f", &p);
	    
	    imc = p /(a);
	    
	    printf("\n Imc:%f",imc);
	    
	    if(imc <= 18.5){
	    	printf("\nAbaixo do peso ideal");
		}
		
	    if(imc > 18.5 && imc<=24.9){
	    	printf("\nParabéns – Peso normal");
		}
		if(imc >= 25 && imc<=29.9){
	    	printf("\nAcima do peso:sobrepeso");
		}
	    if(imc >= 30 && imc<=34.9){
	    	printf("\nObesidade Grau I");
		}
		 if(imc >= 35 && imc<=39.9){
	    	printf("\nObesidade Grau II");
		}
		 if(imc > 40){
	    	printf("\nObesidade Grau III");
		}
		
		

	   
}

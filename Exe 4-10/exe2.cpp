#include <stdio.h>


main(){
	    int cod,a1,a2,a3,a4;
	    float sl,sr;
	    
	    printf("\nQual Profissao\n");
	    printf("\n1-Office  Boy\n ");
	    printf("\n2-Secretaria\n");
	    printf("\n3-Auxiliar Administrativa \n");
	    printf("\n3-Gerente \n");
	    printf("\nQual o Codigo:");
	    scanf("%d",&cod);
	    
	    printf("\nQual o salario:");
	    scanf("%f",&sl);
	    
	    a1 = sl * 0.25;
	    a2 = sl * 0.20;
	    a3 = sl * 0.15;
	    a4 = sl * 0.10;
	    
	    if (cod==1){
	    	     sr = sl + a1;
	    	     printf("\nOffice  Boy");
	    	     printf("Salario Reajustado:%2.2f",sr);
		}
	    if (cod==2){
	    	     sr = sl + a2;
	    	     printf("\nSecretaria\n");
	    	     printf("Salario Reajustado:%2.2f",sr);
		}
	    if (cod==3){
	    	     sr = sl + a3;
	    	     printf("\nAuxiliar Administrativa \n");
	    	     printf("Salario Reajustado:%2.2f",sr);
		}
		if (cod==4){
	    	     sr = sl + a4;
	    	     printf("\nGerente \n");
	    	     printf("Salario Reajustado:%2.2",sr);

		}
		
		if (cod>4){
			printf("\nCargo Sem Reajuste");
		}
	    
	    
	    
	    
}

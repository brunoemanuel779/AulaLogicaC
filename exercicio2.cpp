#include <stdio.h>

main(){
	 int dletivo,  faltas,m;
	 printf("Digite numero de Dias:");
	 scanf("%d",&dletivo);
	 printf("Digite numero de Faltas:");
	 scanf("%d",&faltas);
	 m = dletivo * 0.25;
	 if (faltas > m){
	 	printf("Reprovado");
	 	
	 }else{
	 	printf("Aprovado");
	 }
	
}

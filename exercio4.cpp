#include <stdio.h>

main(){
	float s,acrescimo,vreajuste;
	printf("Informe o salario;");
	scanf("%f",&s);
	printf("%f",s);
	 if (s > 1000){
	 
	 acrescimo = s *0.08;
	 printf("\nAcrescimo:%f",acrescimo);
	 vreajuste = s + acrescimo;
	 printf("\nTotal:%f",vreajuste);
	 
}else {
	      acrescimo = s *0.1;
	      printf("\nAcrescimo:%f",acrescimo);
	       vreajuste = s + acrescimo;
		   printf("\nTotal:%f",vreajuste);     
}
}

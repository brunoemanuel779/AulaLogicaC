#include <stdio.h>

main(){
	  int n1,n2,n3,m;
	  printf("Nota 1:");
	  scanf("%d",&n1);
	  printf("\nNota 2:");
	  scanf("%d",&n2);
	  printf("\nNota 3:");
	  scanf("%d",&n3);
	  
	  if (n1 > n2){
	  	m=(n1+n3)/2;
	  }else{
	  	m=(n2+n3)/2;
	  	
	  }
	  
	 
	  
	  if (m > 6){
	  	printf("Aprovado com nota:%d",m);
	  }else{
	  	printf("Reprovado com nota:%d",m);
	  }
}

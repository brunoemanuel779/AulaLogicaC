#include <stdio.h>

main() {

      int n1,n2,r;
      printf("Digite Primeiro Numero:");
      scanf("%d",&n1);
      printf("Digite Segundo Numero:");
      scanf("%d",&n2);
      
      if (n1>n2){
      	
      	r = n1-n2;
      	printf("A diferenca:%d",r);
	  }else{
	  	r = n2 - n1;
	  	printf("A diferenca:%d",r);
	  }
}


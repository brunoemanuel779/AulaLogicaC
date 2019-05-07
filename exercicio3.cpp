#include <stdio.h>

main(){
	
	int n1,n2,n3,n4,m;
	printf("Digite nota 1:");
	scanf("%d",&n1);
    printf("Digite nota 2:");
	scanf("%d",&n2);
	printf("Digite nota 3:");
	scanf("%d",&n3);
	printf("Digite nota 4:");
	scanf("%d",&n4);
	
	m = (n1+n2+n3+n4)/4;
	
	printf("Media:%d\n",m);
	
	if (m >= 6){
		
		printf("Aprovado");
		
	}else{
		printf("Reprovado");
	}
}

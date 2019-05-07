#include <stdio.h>
#include <locate:h>
main()
{
	setlocate (LC_ALL, "Potuguese");
	int DL,F,LIMITE;
	printf("\n Digite dias letivos:");
	scanf("%d",&DF);
	printf("\nDigite suas faltas:");
	scanf("%d",&f);
	LIMITE = DL/4 ;
	
		if (f>LIMITE)
		{
			printf("\n Reprovado");
		}else{
			printf("\n Aprovado");
		}
}

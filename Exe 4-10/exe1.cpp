#include <stdio.h>

main()

{
	float sl,sr;
	int a1,a2,a3,a4;
	
	printf("\n Salario:");
	scanf("%f",&sl);
	
	a1 = sl * 0.05;
	a2 = sl * 0.07;
	a3 = sl * 0.08;
	a4 = sl * 0.09;
	
	if(sl<=750){
		sr=sl + a1;
		printf("\n Salario Reajustado:%3.1f",sr);
	}
	if(sl>750 && sl<1000){
		sr=sl + a2;
		printf("\n Salario Reajustado:%3.1f",sr);
	}
	if(sl>=1000 && sl<2000){
		sr=sl + a3;
		printf("\n Salario Reajustado:%3.1f",sr);
	}
	if(sl>=2000){
		sr=sl + a4;
		printf("\n Salario Reajustado:%3.1f",sr);
	}
	
	
	
	
}

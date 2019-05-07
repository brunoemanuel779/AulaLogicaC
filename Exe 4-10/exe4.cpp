#include <stdio.h>

main(){
	
	float sl,in1,in2,in3;
	
	printf("\nDigite o salario:");
	scanf("%f",&sl);
	printf("\n Salario:%f",sl);
	in1 = sl * 0.08;
	in2 = sl * 0.09;
	in3 = sl * 0.11;
	
	if (sl <= 1106.90){
		printf("\n Desconto INSS:%2.2f",in1);
	}
	if (sl > 1106.90 && sl<=1844.83){
		printf("\n Desconto INSS:%2.2f",in2);
	}
	if (sl > 1844.83){
		printf("\n Desconto INSS:%2.2f",in1);
	}
}

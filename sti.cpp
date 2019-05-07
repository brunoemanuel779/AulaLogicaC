#include<stdio.h>

main(){
	int f,s;
	printf("\ STI Informatica");
	printf("\nEscolha Funcionario:");
	
	printf("\n1-Arthur Dias");
	printf("\n2-Gabriel Isler");
	printf("\n3-Ralph Souza");
	printf("\n4-Leonardo Leal");
	printf("\nInforme um Numero: ");
	scanf("%d",&f);
	printf("\nFuncionario:%d",&f);
	
	
	
	printf("\n Servicos");
	printf("\n1-Redes");
	printf("\n2-Manuntencao");
	printf("\n3-Cabeamentos");
	printf("\n4-Desenvolvimento de Software");
	printf("\nInforme Numero de Servico: ");
	scanf("%d",&s);
	printf("\nServico:%d",&s);
	if(s==1){
		printf("\nValor:100 Reais");
	}
	if(s==2){
		printf("\nValor:200 Reais");
	}
	if(s==3){
		printf("\nValor:300 Reais");
	}
	if(s==4){
		printf("\nValor:400 Reais");
	}


}

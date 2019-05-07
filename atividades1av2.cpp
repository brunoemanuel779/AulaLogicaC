#include <stdio.h>b
#include <locale.h>

main(){
	int v=1,vn=0,vb=0,cont1=0,cont2=0,cont3=0,cont4=0,vt,pn,pb;
	setlocale(LC_ALL, "Portuguese");
	printf("\n Eleicoes Monte Santo-Ba");
	while(v!=0){
		printf("\n\n Escolha Seu Candidato");
		printf("\n 1-Ze Maria\n");
		printf("\n 2-Nivaldo\n");
		printf("\n 3-Zeca\n");
		printf("\n 4-Manezinho\n");
		printf("\n 5-Voto Nulo\n");
		printf("\n 6-Voto Branco\n");
		printf("\n Voto:");
		scanf("%d",&v);
		if(v==1){
			cont1++;
			vt++;
		}
		if(v==2){
			cont2++;
			vt++;
		}
		if(v==3){
			cont3++;
			vt++;
		}
		if(v==4){
			cont4++;
			vt++;
		}
		
        if(v==5){
			vn++;
			vt++;
		}
		if(v==6){
			vb++;
			vt++;
		}
		printf("\n Apuração\n");
		printf("\n Votos Candidato 1:%d",cont1);
		printf("\n Votos Candidato 2:%d",cont2);
		printf("\n Votos Candidato 3:%d",cont3);
		printf("\n Votos Candidato 4:%d",cont4);
		printf("\n Votos Nulos:%d",vn);
		printf("\n Votos Brancos:%d",vb);
         
        pn=vn*100/vt;
        printf("\n Porcentagem Nulos:%d%%",pn);
        pb=vb*100/vt;
        printf("\n Porcentagem Brancos:%d%%",pb);
	}
}

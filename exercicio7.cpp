#include <stdio.h>

main(){
	float n1,n2,n3,m,ne,me,ns,ms;
	  printf("\n Nota 1:");
	   scanf("%f",&n1);
	  printf("\n Nota 2:");
	   scanf("%f",&n2);
	  printf("\n Nota 3:");
	   scanf("%f",&n3);
	m = (n1+n2+n3)/3;
	    if(m >= 6)
	{
	  printf("\n Media:%2.1f",m);
	  printf("\n Aprovado");
		
	    }else{
	  printf("\n Media:%2.1f",m);
	  printf("\n Exame");
		
	  printf("\n Nota Exame:");
	   scanf("%f",&ne);
	me = (m + ne)/2;
	}
	    if (me >= 5)
	{
	  printf("\n Media:%2.1f",me);
	  printf("\n Aprovado Apos Exame");
	    }else{
	  printf("\n Segunda Etapa");
	  printf("\n Nota Segunda Etapa:");
	   scanf("%f",&ns);
	ms = (ns + me)/2;
	    if (ms>=5)
    {
	  printf("\n Media:%2.1f",ms);
	  printf("\n Aprovado Segunda Etapa");
	    }else{
	  printf("\n Reprovado");
	  printf("\n Media:%2.1f",ms);
	}
			
		}
		
	}


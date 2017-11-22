#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
	int cgu,i=0,iap=0,is=0;
	float g1,g2,media;
	
	do{
		printf("\n Informe o CGU: ");
			scanf("%i",&cgu);
		printf("\n Informe as duas notas: ");
			scanf("%f%f",&g1,&g2);
			i++;
			media=(g1+(g2*2))/3;
			
			if(media>=6){
				iap++;
			printf("\n Contador: %i",i);
			}
			if(media<6){
				printf("\n Aprovado ");
				is++;
			}
	}while(i<10);
	printf("\n Número de alunos aprovados: %i",iap);
	printf("\n Número de alunos reprovados: %i",is);
}

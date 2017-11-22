#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int num,i=0,soma;
		float media;
		
		do{
			printf("\n Informe os valores: ");
				scanf("%i",&num);
			if(num!=0){
			i++;
			soma=soma+num;
			media=soma/i;
		}
		}while(num!=0);
		printf("\n Media dos valores lidos: %.2f",media);
		printf("\n Total de números digitados: %i",i);
}

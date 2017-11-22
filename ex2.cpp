#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int num,i=0,soma=0,maior=0;
		float media;
		
		do{
			printf("\n Informe os valores: ");
				scanf("%i",&num);
			if(num!=99){
			i++;
			soma=soma+num;
			media=soma/i;
				if(i=0){
					maior=num;
				}else{
					if(num>maior){
						maior=num;
					}
				}
		}
		}while(num!=99 && soma!=99);
		printf("\n Media dos valores lidos: %i",maior);
}

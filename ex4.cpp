#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int num,i=0,soma=0,maior=0,menor=0,ip=0;
		float media=0,res=0;
		
		do{
			printf("\n Informe os valores: ");
				scanf("%i",&num);
				res=num%2;
				i++;
				if(res==0){
					ip++;
				}
				if(i==0){
					maior=num;
					menor=num;
				}else{
					if(num>maior){
						maior=num;
					}
					if(num<menor){
						menor=num;
					}
				}
				printf("\n %i",i);
		}while(ip<=8);
		printf("\n Maior valor lido: %i",maior);
		printf("\n Menor valor lido: %i",menor);
		printf("\n Números Pares: %i",ip);
}

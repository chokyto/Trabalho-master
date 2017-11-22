#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){
	int r,i=0,ii,im,ia;
	
	while(i<10){
		i++;
		printf("Digite sua idade: \n");
		scanf("%i",&r);
		
		if(r>=5 && r<=12){
			printf("Sua categoria e infantil.\n");
			ii++;
		}
		if(r>12 && r<=18){
			printf("Sua categoria e mirim.\n");
			im++;
		}
		if(r>18){
			printf("Sua categoria e adulto.\n");
			ia++;
		}
		
	}
	printf("A quantidade de infantil e de %i.\n",ii);
	printf("A quantidade de mirim e de %i.\n",im);
	printf("A quantidade de adulto e de %i.\n",ia);
}

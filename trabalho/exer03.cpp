#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){
	int r,maior=0,menor=20;
	float soma=0;
	
	while(soma==20){
		printf("Digite um numero:");
		scanf("%i",&r);
		
		soma=soma+r;
		if(i==0){
			maior=r;
			menor=r;
		}
		
		if(r>maior && r<21){
			maior=r;
		}
		if(r<menor){
			menor=r;
		}
		if(r>20){
			printf("O numero tem que ser menor que 21!!!");
		}
		
	}
	printf("O maior numero e %i!",maior);
	printf("O menor numero e %i!",menor);
	
	
	
}

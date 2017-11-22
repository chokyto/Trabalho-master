#include <conio.h>
#include <stdio.h>

main(){
	int an1,an2,an3;
	
	printf("Forneca os angulos do triangulo: \n");
	scanf("%i""%i""%i",&an1,&an2,&an3);
	
	if(an1==90 || an2==90 ||an3==90){
		printf("Triangulo Retangulo");
	}
	if(an1<90 && an2<90 && an3<90){
		printf("Triangulo Acutangulo");
	}
	if(an1>90 || an2>90 || an3>90){
		printf("Trianguo obtusangulo");
	}
}

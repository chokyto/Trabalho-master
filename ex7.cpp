#include <conio.h>
#include <stdio.h>

main(){
	int an1,an2,an3,tri1=0,tri2=0,tri3=0;

	while(tri1<1 || tri2<1 || tri3<1 ){	
		printf("Forneca os angulos do triangulo: \n");
		scanf("%i""%i""%i",&an1,&an2,&an3);


		if(an1==90 || an2==90 ||an3==90){
			printf("Triangulo Retangulo \n");
			tri1++;
		}
		if(an1<90 && an2<90 && an3<90){
			printf("Triangulo Acutangulo \n");
			tri2++;
		}
		if(an1>90 || an2>90 || an3>90){
			printf("Trianguo obtusangulo \n");
			tri3++;
		}
}
}


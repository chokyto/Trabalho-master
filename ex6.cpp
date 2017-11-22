#include <conio.h>
#include <stdio.h>

main(){
	int inteiro;
    float sal;
    
    printf("Quantidade de fincionarios: ");
    scanf("%i",&inteiro);
    
	while(inteiro!=0){
  	  printf("Salario: \n");
 	   scanf("%f", &sal);
	inteiro=inteiro-1;
  	  if(sal <= 500){
        sal=sal*1.05;
    }
		else 
			if(sal<1200){

      		  sal=sal*1.12;
	}

    if(sal<= 600){
		sal=sal+150;
	}
	else{
		sal=sal+100;
	}

    printf("O novo salario foi: %.2f \n", sal);
}
}



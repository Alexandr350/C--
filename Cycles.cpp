#include <stdio.h>

main(){
	
	int i = 0;
	
	while(i < 15){
		printf("Iteration = %i, values = %i \n", i+1, i );
		i++;
	}
	
	printf("\n\n");
	
	while(i < 24){
		printf("%i = Hello ", i-14);
		i++;
	}
	
	printf("\n\n");
	printf("Iteration = %i\n", i);
	
	printf("\n\n");
	
	while(i>0){
		if(i%2 != 0){
			printf("   %i\n",i);
		}
		i--;
		
	}
	
	printf("\n\n");

	int j = 5;
	while(i <16){
		
		if(i > 5){
			printf("Summa:  %i  +  %i = %i\n",j,i,j+i);
			j = j+i;
		}
		i++;
	}
}


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
main(){
	system("chcp 1251");
	printf("\nFirst task\n");
	int array[7];
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		scanf("%i", &array[i]);
	}
	
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		printf("\n %i \n", array[i]);
	}
	
	
	printf("\nSecond task \nEnter size array: ");
	int *massiv;
	int user_vvod = 0;
	scanf("%i", &user_vvod);
	massiv = (int*)malloc(user_vvod * sizeof(int));
	
	for(int i = 0; i < user_vvod; i++){
		printf("Value %i = ", i);
		scanf("%i", &massiv[i]);
	}
	printf("\n");
	for(int i = 0; i < user_vvod; i++){
		printf(" %i " , massiv[i]);
	}
	free(massiv);
	
}

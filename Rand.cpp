#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	
	int **massiv;
	int user_vvod_str, user_vvod_column;
	
	printf("\nEnter size str ");
	scanf("%i", &user_vvod_str);
	printf("\nEnter size column ");
	scanf("%i", &user_vvod_column);

	srand(time(NULL));
	massiv = (int**)malloc(user_vvod_str * sizeof(int*));
	
	
	for(int j = 0; j < user_vvod_str; j++){
		printf("\n");
		massiv[j] = (int*)malloc(user_vvod_column* sizeof(int)); 
		
		for(int i = 0; i < user_vvod_column; i++){
			

			massiv[j][i] = rand() % 10 - 2;
			printf("Value %i %i = %2i  ", j, i, massiv[j][i]);
	
		}
		
	}
	
	printf("\n\n\n");
	for(int j = 0; j < user_vvod_str; j++){
		
		for(int i = 0; i < user_vvod_column; i++){
			printf("  %2d  ", massiv[j][i]);
		}
		printf("\n");
	}
	
	
	for(int i = 0; i < user_vvod_str; i++){
		free(massiv[i]);
	}
	free(massiv);
	
	
	return EXIT_SUCCESS;
	
}

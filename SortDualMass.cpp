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
	
	massiv = (int**)malloc(user_vvod_str * sizeof(int*));
	
	/*for(int j = 0; j < user_vvod_str; j++){
		printf("\n");
		massiv[j] = (int*)malloc(user_vvod_column* sizeof(int)); 
	
		for(int i = 0; i < user_vvod_column; i++){
			printf("Value %i %i = ", j, i);
			scanf("%i", &massiv[j][i]);
	
		}
		
	}*/
	srand(time(NULL));
	for(int j = 0; j < user_vvod_str; j++){
		printf("\n");
		massiv[j] = (int*)malloc(user_vvod_column* sizeof(int)); 
		
		for(int i = 0; i < user_vvod_column; i++){
			
			massiv[j][i] = rand() % 50;
			printf("Value %i %i = %2i  ", j, i, massiv[j][i]);
	
		}
		
	}
	
	printf("\n\nRandom massiv\n\n");
	for(int j = 0; j < user_vvod_str; j++){
		
		for(int i = 0; i < user_vvod_column; i++){
			printf(" %2i ", massiv[j][i]);
		}
		printf("\n");
	}
	
	
	printf("\nSort massiv\n");
	for(int i = 0; i < user_vvod_column; i++){
		
		for(int j = 0; j < user_vvod_str; j++){
			
			for(int t = 0; t < user_vvod_column-1; t++){
				if (massiv[j][t] > massiv[j][t+1]){
					int buff = massiv[j][t];
					massiv[j][t] = massiv[j][t+1];
					massiv[j][t+1] = buff;
				}
			}
		}
		
	}
	
	printf("\n");
	for(int j = 0; j < user_vvod_str; j++){
		
		for(int i = 0; i < user_vvod_column; i++){
			printf(" %2i ", massiv[j][i]);
		}
		printf("\n");
	}
	
	
	printf("\nRevers massiv \n");
	for(int j = 0; j < user_vvod_str; j++){
			
		int buff = massiv[j][0];
		massiv[j][0] = massiv[j][user_vvod_column-1];
		massiv[j][user_vvod_column-1] = buff;
				

	}
	
	printf("\n");
	for(int j = 0; j < user_vvod_str; j++){
		
		for(int i = 0; i < user_vvod_column; i++){
			printf(" %2i ", massiv[j][i]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(int i = 0; i < user_vvod_str; i++){
		free(massiv[i]);
	}
	free(massiv);
	
	
	return EXIT_SUCCESS;
}

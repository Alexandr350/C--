#include <stdio.h>
#include <malloc.h>

int main(){
	
	
	int **massiv;
	int user_vvod_str, user_vvod_column;
	
	printf("\nEnter size str ");
	scanf("%i", &user_vvod_str);
	printf("\nEnter size column ");
	scanf("%i", &user_vvod_column);
	
	massiv = (int**)malloc(user_vvod_str * sizeof(int*));
	
	for(int j = 0; j < user_vvod_str; j++){
		printf("\n");
		massiv[j] = (int*)malloc(user_vvod_column* sizeof(int)); 
		
		for(int i = 0; i < user_vvod_column; i++){
		printf("Value %i %i = ", j, i);
		scanf("%i", &massiv[j][i]);
	
		}
		
	}
	
	printf("\n");
	for(int j = 0; j < user_vvod_str; j++){
		
		for(int i = 0; i < user_vvod_column; i++){
		printf(" %i ", massiv[j][i]);
	
		}
		printf("\n");
	}
	
	
	for(int i = 0; i < user_vvod_str; i++){
		free(massiv[i]);
	}
	free(massiv);
	
	
	return 0;
}

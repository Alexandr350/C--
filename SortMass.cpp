#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main(){
	
	printf("\nEnter size array ");
	int *massiv;
	int user_vvod = 0;
	
	scanf("%i", &user_vvod);
		
		
	massiv = (int*)malloc(user_vvod * sizeof(int));
		for(int i = 0; i < user_vvod; i++){
			printf("Value  %i = ", i);
			scanf("%i", &massiv[i]);
		}
	
	int max = 0;
	for(int i = 0; i < user_vvod; i++){
		for(int j = 0; j < user_vvod-1; j++){
			if(massiv[j] > massiv[j+1]){
				max = massiv[j];
				massiv[j] = massiv[j+1];
				massiv[j+1] = max;
			}
		}
	}
	
	int summa = 0;
	for(int i = 0; i < user_vvod; i++){
		summa = summa + massiv[i];
	}
	float medium = (float)summa/user_vvod;
	printf("\nMin: %i \nMax: %i \nSumma: %i \nMedium: %.2f", massiv[0], massiv[user_vvod-1], summa, medium);
	free(massiv);
}

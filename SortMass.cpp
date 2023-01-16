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
	
	int MIN, MAX,summa;
	for(int i = 0; i < user_vvod; i++){
		
		if(i == 0){
			MIN = massiv[i];
		}
		if(MAX < massiv[i]){
			MAX = massiv[i];
		}
		if(MIN > massiv[i]){
			MIN = massiv[i];
		}
		summa = summa + massiv[i];
	}
	
	float medium = (float)summa/user_vvod;
	printf("\nMin: %i \nMax: %i \nSumma: %i \nMedium: %.2f", MIN, MAX, summa, medium);
	free(massiv);
}

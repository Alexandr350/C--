#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main(){
	system("chcp 1251");
	printf("\nВведите размер массива: ");
	int *massiv;
	int user_vvod = 0;
	scanf("%i", &user_vvod);

	if(user_vvod <= 100){
		massiv = (int*)malloc(user_vvod * sizeof(int));
		for(int i = 0; i < user_vvod; i++){
			printf("Значение ячейки  %i = ", i);
			scanf("%i ", &massiv[i]);
		}
	}
	else{
		printf("Массив не должен быть более 100 элементов");
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
	
	printf("\nВывод: \n");
	for(int i = 0; i < user_vvod; i++){
		printf("%i ", massiv[i]);
	}
}

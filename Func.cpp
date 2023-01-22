#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void value_arr(int *arr, int index);
int main(){
	
	int arr[5];
	int arr2[10];
	value_arr(arr,sizeof(arr)/sizeof(arr[0]));
	printf("================================================\n");
	value_arr(arr2,sizeof(arr2)/sizeof(arr2[0]));
	return EXIT_SUCCESS;
}

void value_arr(int *arr, int index){
	srand(time(NULL));
	for(int i = 0; i < index; i++){
		arr[i] = rand()%10;
		printf("Value %i = %i\n",i, arr[i]);
	}
	
	
}

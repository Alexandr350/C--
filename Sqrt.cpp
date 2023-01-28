#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int scrt_func(int *input);
int scrt_func(int &input);
void input_int();
int main(){


	input_int();
	return EXIT_SUCCESS;
}


void input_int(){
	int input, index, ind=0;
	printf("Input numbers\n");
	for(int i = 0; i < 3; i++){
		printf("\nValue %i = ", i);
		scanf("%d", &input);
		index += scrt_func(&input);
		ind += scrt_func(input);
	}
	printf("\nSquare is (index) %i (ind) %i", index, ind);
	
}


int scrt_func(int input){
	int index = 0, number;
	while(true){
		number = index*index;
		if(number == input){
			return 1;
		}
		else if(number > input){
			printf("Number is not a square\n");
			break;
		}
		index++;
	}
		
		
}

int scrt_func(int *input){
	int index = 0, number;
	while(true){
		number = index*index;
		if(number == *input){
			return 1;
		}
		else if(number > *input){
			printf("Number is not a square\n");
			break;
		}
		index++;
	}
		
		
}

int scrt_func(int &input){
	int index = 0, number;
	while(true){
		number = index*index;
		if(number == input){
			return 1;
		}
		else if(number > input){
			printf("Number is not a square\n");
			break;
		}
		index++;
	}
		
		
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	int i = 0;
	int j = 5;
	
	while( i < 11){
		if(i > 0){
			printf("%i * %i = %i\n",j, i, j*i);
		}
		i++;
	}
	
	printf("\n\n");
	
	for(int t = 1; t < 6; t++){
		printf("\n");
		for(int t2 = 1; t2 < 10; t2++){
			printf("  %2d  ",t*t2);
			
		}
	}
	
	srand(time(NULL));
	int ran = rand()%20+1;
	int user_number = 0;
	int iter = 0;
	int w = 0;
	int w2 = 0;
	int w3 = 0;
	printf("\n\n");
	
	printf("Enter a number from 1 to 20 .\n");
	
	while(true){
		printf("\nYour number: ");
		scanf("%i", &user_number);
		printf("\n");
		if(user_number == ran){
			printf("Win!!! This is number = %i\n", user_number);
			break;
		}
		if(user_number > ran){
			printf ("Your number is higher\n\n");
		}
	
		if(user_number < ran){
			printf("Your number is less\n\n");
		}
	
		if(iter > 3){
			
			while(true){
				if(w == 1){
					break;
				}
				printf("First clue!!!\n\n");
				
			
				if(ran > 10){
					printf("This number is greater than 10\n\n");
				}
				else{
					printf("This number is less than 10\n\n");
				}
				w++;
			}
		}
	
		if(iter > 6){
			while(true){
				if(w2 == 1){
					break;
				}
				printf("Second clue!!!\n\n");
				
			
				if(ran%2==0){
					printf("This number is a multiple of 2\n\n");
				}
				else{
					printf("This number is not a multiple of 2\n\n");
				}
				w2++;
			}
		}
		
		if(iter > 9){
			while(true){
				if(w3==1){
					break;
				}
				printf("Third clue!!!\n\n");
				
			
				if(ran%3==0){
					printf("This number is a multiple of 3\n\n");
				}
				else{
					printf("This number is not a multiple of 3\n\n");
				}
				w3++;	
			}
			
		}

		iter++;
		
	}
}

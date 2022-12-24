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

	printf("\n\n");
	
	printf("Enter a number from 1 to 20 .\n");
	//printf("%i", ran);
	while(true){
		printf("\nYour number: ");
		scanf("%i", &user_number);
		printf("\n");
		if(user_number == ran){
			printf("This is number = %i\n", user_number);
			break;
		}
		if(user_number > ran){
			printf ("Your number bolishe\n\n");
		}
	
		if(user_number < ran){
			printf("Your number menishe\n\n");
		}
	
		if(ran > 10){
			printf("This number bolishe 10\n\n");
		}
		else{
			printf("This number menishe 10\n\n");
		}
	
		if(ran%2==0){
			printf("This number  \\ 2\n\n");
		}
		else{
			printf("This number  not \\ 2\n\n");
		}
		
		if(ran%3==0){
			printf("This number  \\ 3\n\n");
		}
			else{
		printf("This number not \\ 3\n\n");
		}
		
		iter++;
		
	}
}

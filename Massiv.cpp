# include <stdio.h>

main(){
	printf("First task \n");
	int array[7];
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		scanf("%i", &array[i]);
	}
	
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
		printf("\n %i \n", array[i]);
	}
	
	printf("\nSecond task \nAmount of numbers: ");
	int user_vvod = 0;
	scanf("%i", &user_vvod);
	int user_array[user_vvod];
	
	for(int i = 0; i < user_vvod; i++){
		scanf("%i", &user_array[i]);
	}
	printf("\n");
	for(int i = 0; i < sizeof(user_array)/sizeof(user_array[0]); i++){
		printf("%i ", user_array[i]);
	}
}

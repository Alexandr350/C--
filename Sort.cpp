# include <stdio.h>

main(){
	printf("First task \nAmount of numbers: ");
	int user_vvod = 0;
	scanf("%i", &user_vvod);
	int user_array[user_vvod];
	
	for(int i = 0; i < user_vvod; i++){
		scanf("%i", &user_array[i]);
	}
	
	int max = 0;
	for(int i = 0; i < user_vvod; i++){
		for(int j = 0; j < user_vvod; j++){
		
			if(user_array[j] > user_array[j+1]){
				max = user_array[j];
				user_array[j] = user_array[j+1];
				user_array[j+1] = max;
			}
		}
	}
	
	printf("\n");
	for(int i = 0; i < sizeof(user_array)/sizeof(user_array[0]); i++){
		printf("%i ", user_array[i]);
	}
}

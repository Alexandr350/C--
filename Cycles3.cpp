# include <stdio.h>

main(){
	int user_numbers = 0;
	printf("Amount of numbers: ");
	scanf("%i", &user_numbers);
	
	int numbers[user_numbers];
	
	for(int i = 0; i < user_numbers; i++){
		scanf("%i", &numbers[i]);
	}
	int MIN = numbers[0];
	for(int i = 0; i < user_numbers; i++){
		if(MIN > numbers[i]){
			MIN = numbers[i];
		}
		
	}
	
	int MAX = numbers[0];
	for(int i = 0; i < user_numbers; i++){
		if(MAX < numbers[i]){
			MAX = numbers[i];
		}
	}
	
	int summa = 0;
	for(int i = 0; i < user_numbers; i++){
		summa = summa + numbers[i];
		
	}
	
	int medium = summa/user_numbers;
	
	printf("\nMinimum: %i\nMaximum: %i\nSumma: %i\nMedium: %i", MIN, MAX, summa, medium);
}


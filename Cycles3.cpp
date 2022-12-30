# include <stdio.h>

main(){
	int user_numbers = 0;
	printf("Amount of numbers: ");
	scanf("%i", &user_numbers);
	
	int numbers = 0;
	int MIN = 0;
	int MAX = 0;
	int summa = 0;
	
	for(int i = 0; i < user_numbers; i++){
		
		scanf("%i", &numbers);
		if(i == 0){
			MIN = numbers;
		}
		if(MAX < numbers){
			MAX = numbers;
		}
		if(MIN > numbers){
			MIN = numbers;
		}
		summa = summa + numbers;
	}
	
	int medium = summa/user_numbers;
	
	printf("\nMinimum: %i\nMaximum: %i\nSumma: %i\nMedium: %i", MIN, MAX, summa, medium);
}


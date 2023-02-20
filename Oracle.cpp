#include <stdio.h>


main(){
	
	printf("Write your date of birth\n");
	
	int date[3];
	char input[10];
	char year[10];
	char chinese_horoscope[10];
	char zodiac_sign[10];		
	char str [][10] = {"Day: ", "Month: ", "Year: "};

	int i = 0;
	while(true){
		printf(str[i]);
		scanf("%i", &date[i]);		
		if(i >= 2){
			break;	
		}
		i++;
	}
	
	
	if(date[2]%4==0){
		sprintf(year, "%s", "High year!!!");
	}	
	else{
		sprintf(year, "%s", "No high year!!!");
	}	
	
	switch(date[2]%12){
		case 0:
			sprintf(chinese_horoscope, "%s", "Monkey");
			break;
		case 1:
			sprintf(chinese_horoscope, "%s", "Rooster");
			break;
		case 2:
			sprintf(chinese_horoscope, "%s", "Dog");
			break;
		case 3:
			sprintf(chinese_horoscope, "%s", "Pig");
			break;
		case 4:
			sprintf(chinese_horoscope, "%s", "Rat");
			break;
		case 5:
			sprintf(chinese_horoscope, "%s", "Bull");
			break;
		case 6:
			sprintf(chinese_horoscope, "%s", "Tiger");
			break;
		case 7:
			sprintf(chinese_horoscope, "%s", "Rabbit");
			break;
		case 8:
			sprintf(chinese_horoscope, "%s", "Dragon");
			break;
		case 9:
			sprintf(chinese_horoscope, "%s", "Snake");
			break;
		case 10:
			sprintf(chinese_horoscope, "%s", "Horse");
			break;
		case 11:
			sprintf(chinese_horoscope, "%s", "Sheep");
			break;
	}
	
	if((date[0] >= 21 && date[1] == 3 )|| (date[0]<21 && date[1] == 4)){
		sprintf(zodiac_sign, "%s", "Aries");
	}
	if((date[0] >= 21 && date[1] == 4 )|| (date[0]<21 && date[1] == 5)){
		sprintf(zodiac_sign, "%s", "Calf");
	}
	if((date[0] >= 21 && date[1] == 5 )|| (date[0]<21 && date[1] == 6)){
		sprintf(zodiac_sign, "%s", "Twins");
	}
	if((date[0] >= 21 && date[1] == 6 )|| (date[0]<23 && date[1] == 7)){
		sprintf(zodiac_sign, "%s", "Crayfish");
	}
	if((date[0] >= 23 && date[1] == 7 )|| (date[0]<23 && date[1] == 8)){
		sprintf(zodiac_sign, "%s", "Lion");
	}
	if((date[0] >= 23 && date[1] == 8 )|| (date[0]<23 && date[1] == 9)){
		sprintf(zodiac_sign, "%s", "Virgo");
	}
	if((date[0] >= 23 && date[1] == 9 )|| (date[0]<23 && date[1] == 10)){
		sprintf(zodiac_sign, "%s", "Balance");
	}
	if((date[0] >= 23 && date[1] == 10 )|| (date[0]<23 && date[1] == 11)){
		sprintf(zodiac_sign, "%s", "Scorpion");
	}
	if((date[0] >= 23 && date[1] == 11 )|| (date[0]<22 && date[1] == 12)){
		sprintf(zodiac_sign, "%s", "Sagittarius");
	}
	if((date[0] >= 22 && date[1] == 12 )|| (date[0]<20 && date[1] == 1)){
		sprintf(zodiac_sign, "%s", "Capricorn");
	}
	if((date[0] >= 20 && date[1] == 1 )|| (date[0]<20 && date[1] == 2)){
		sprintf(zodiac_sign, "%s", "Aquarius");
	}
	if((date[0] >= 20 && date[1] == 2 )|| (date[0]<21 && date[1] == 3)){
		sprintf(zodiac_sign, "%s", "Fishes");
	}
	
	printf("\nOracle %i.%i.%i\n", date[0], date[1], date[2]);
	printf("\nHigh year:          %s\n", year);
	printf("Chinese horoscope:    %s\n", chinese_horoscope);
	printf("Zodiac sign:          %s\n", zodiac_sign);
	
	
}
	
	

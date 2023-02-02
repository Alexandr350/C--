#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstring>


void user_input(char str[], char select[]);
char change_char(char str[], char select[]);
char del_space_char(char str[]);
void user_input(char str[]);
void print_text(char str[]);

int main(){
	
	char str[20];
	char select[2];
	user_input(str);
	del_space_char(str);
	print_text(str);
	user_input(str, select);
	change_char(str, select);
	print_text(str);
	return EXIT_SUCCESS;
}


void user_input(char str[]){
	printf("Write text\n");
	scanf("%20[^\n]", str);
	

}

void user_input(char str [], char select[]){
	printf("\nInput char\n");
	scanf("%2s", select);

}



char change_char(char str[], char select[]){
	str[0] = select[0];
	str[strlen(str) - 1] = select[0];
	return *str;
}

void print_text(char str[]){
	printf("\nPrint result\n%s\n", str);
}

char del_space_char(char str[]){
	
	
	for(int j = 0, i = 0; str[i] != '\0'; ++j){
		if(str[j] != ' '){
			str[i] = str[j];
			++i;
		}
	}
	return *str;
}


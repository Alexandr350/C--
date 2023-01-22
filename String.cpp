#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void user_input(char str[]);
void print_text(char str[]);
void revers_str(char str[]);
char user_select();
void delete_char(char str[], int select);
int main(){
	
	char str[10];
	user_input(str);
	print_text(str);
	revers_str(str);
	delete_char(str,user_select());
	return EXIT_SUCCESS;
}


void user_input(char str[]){
	printf("Write text\n");
	scanf("%10s", str);
}

void print_text(char str[]){
	printf("\nSecond litter\n");
	char litter = str[1];
	printf("%c", litter);
}

void revers_str(char str[]){
	printf("\n\nRevers str\n");
	char buff = str[0];
	str[0] = str[strlen(str)-1];
	str[strlen(str)-1] = buff;
	printf("%s\n", str);
}

char user_select(){
	int select;
	printf("\nInput char\n");
	scanf("%i", &select);
	return select;
}

void delete_char(char str[], int select){
	printf("\nDelete char\n");	
	for(int j = select-1; j < strlen(str); j++){
		str[j] = str[j+1];
	}
		
	
	printf("%s\n", str);
}

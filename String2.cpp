#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void user_input(char str[]);
void print(char str[]);
void delete_char(char str[]);
void mirror(char str[], char str_mirror[]);
int main(){
	
	char str[10];
	char str_mirror[10];
	
	user_input(str);
	delete_char(str);
	print(str);
	mirror(str, str_mirror);
	print(str_mirror);
	return EXIT_SUCCESS;
}


void user_input(char str[]){
	printf("Write text\n");
	scanf("%10s", str);
	
}

void delete_char(char str[]){
	printf("\nDelete char\n");	
	for(int j = 0; j < strlen(str); j++){
		str[j] = str[j+1];
	}	
	
}

void mirror(char str[], char str_mirror[]){
	printf("\nString mirror\n");
	int j = 0;
	for(int i = strlen(str)-1; i >= 0; i--){
		str_mirror[j] = str[i]; 
		j++;	
	} 
}
void print(char str[]){
	printf("\n%s\n", str);
}

#include<stdio.h>

main(){
	long long int UserId = 1012;                                // код сотрудника
	long long int Password = 1234;
	
	long long int UserId2 = 1013;
	long long int Password2 = 4321;
	
	long long int UserId3 = 1014;
	long long int Password3 = 4132;
	
	long long int UserId4 = 1015;
	long long int Password4 = 1423;
	
	int i = 3;
	while(true){
		
		long long int Id;
		printf("Login: ");
		scanf("%lli", &Id);
	
		long long int Pass;
		printf("Password: ");
		scanf("%lli", &Pass);
	
		if((Id == UserId && Pass == Password)||(Id == UserId2 && Pass == Password2)||(Id == UserId3 && Pass == Password3)||(Id == UserId4 && Pass == Password4)){
			printf("\nWelcom, Ivanov Ivan Ivanich!!!\n");
			break;
		}
	
		if(i == 0){
			printf("\nAccess denied!!!!");
			break;
		}
		printf ("\nRemaining %i attempts\n\n", i);
		i--;
		
		
	}
	
}


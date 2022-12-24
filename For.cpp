#include<stdio.h>

main(){
	int summa = 0;
	for(int i = 1; i <= 100; i++){
		
		printf("%i + %i = %i\n", summa, i, summa + i);
		summa = summa + i;
	}
}

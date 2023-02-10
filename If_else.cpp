#include <stdio.h>

main(){
	char text[] = "text";
	int a , b;
	printf("Vvedite A and B\n");
	scanf("%i", &a);
	scanf("%i", &b);
	if(a>b)
	{
		printf("%i bolshe",a);
	}
	else 
	{
		if(a<b)
		{
			printf("%i bolshe",b);
		}
		else
		{
			printf("%i = %i", a, b);
		}
	}
	

}

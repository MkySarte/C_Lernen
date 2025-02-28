#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	//Zufallsgenerator
	srand(time(NULL));
	rand();

	int x = rand() % 6 +1; //numbers between 1 to 6

	if (x>3)
	{
		printf("Überdurchschnittlich!");
	}
	else
	{
		switch(x) 
		{
		case 1:
			printf("Oh Mann \n");
			break;

		case 2:
			printf("Naja \n");
			break;

		case 3:
			printf("O.K. \n");
			break;

		case 4:
			printf("Häh?? \n");
			break;
		}
	}
return 0;
}

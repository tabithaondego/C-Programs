//while loop 
/*
Description: A program that prints the number of attempts made when one tries to guess a number
Name: Tabitha Ondego
Reg No: BCS-03-0073/2026
Date: 12/06/2026
*/

#include <stdio.h>

int main(){
	int secret_number;
	int guess;
	int attempts = 0; //to initialize the number of attempts
	
	//Create a random number between 1 and 20
	srand(time(0));
	secret_number = (rand() %20) +1;
	
	printf("Guess the number \n");
	
	while(1){
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;
		
		if(guess > secret_number){
			printf("Too high \n");
		}
		else if(guess < secret_number){
			printf("Too low\n");
		}
		else{
			printf("Congratulations \n");
			printf("Your number of attempts were: %d\n", attempts);
			break;
		}
	}
	return 0;
}
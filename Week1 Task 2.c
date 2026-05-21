//Program that prompts the user to input data

/*
Description: Program that prompts the user to enter height, bank balance and phone number
Name: Tabitha Ondego
Date: 21/05/2026
REG NO: BCS-03-0073/2026
Version 1
*/

#include <stdio.h>

int main(){
	
	float height;
	double bank_balance;
	int phone_number;
	
	printf("Enter your height:\n");
	scanf("%height", & height);
	
	printf("Enter your bank balance:\n");
	scanf("%bank_balance", & bank_balance);
	
	printf("Enter your phone number:\n");
	scanf("%phone_number", & phone_number);
	
	printf("The height is  %height \n", height);
	printf("Your bank balance is %bank_balance \n", bank_balance);
	printf("Your phone number is %phone_number \n", phone_number);
	
	return 0;
}
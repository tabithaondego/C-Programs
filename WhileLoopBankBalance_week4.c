// While Loop - Bank balance

/*
Description: A program that checks the bank balance and allows withdrawal
Name: Tabitha Ondego
Reg No: BCS-03-0073/2026
Date: 12/06/2026
*/

#include <stdio.h>

int main(){
	float bank_balance = 12000; //Initializing the bank balance
	float amount;
	
	while(bank_balance >0){
		printf("Enter amount: ");
		scanf("%f", &amount);
		
		bank_balance = bank_balance - amount; // to allow reduction when money is withdrawn
		
		printf("Your bank balance is: %2f\n",bank_balance);
	}
	
	printf("You have less money in your account to withdraw \n");
	return 0;
}
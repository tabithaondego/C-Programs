//Do..while

/*
Description :A program that prompts the user continually until the right password is entered
Name: Tabitha Ondego
Reg no: BCS-03-0073/2026
Date: 12/06/2026
*/

#include <stdio.h>

int main(){
	int password;
	do{
		printf("Enter password: ");
		scanf("%d", &password);
		
		if(password != 1234){
			printf("Wrong password. Try again \n");
		}
	}
	while(password != 1234);
	
	printf("Access Granted \n");
	return 0;
}
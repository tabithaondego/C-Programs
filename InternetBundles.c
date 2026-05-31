//Program to show different internet bundles and their cost

/*
Description : Program to show the cost of internet bunldes selected
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 31/05/2026
*/

#include <stdio.h>
int choice;

int main(){
	printf("Data bunldes available");
	printf("1. 100MB @50 \n");
	printf("2. 500MB @200 \n");
	printf("3. 1GB @350 \n");
	printf("4. 2GB @600 \n");
	
	printf("Enter you internet bundles choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("100 MB cost 50ksh \n");
			break;
		case 2:
			printf("500MB cost 200ksh \n");
			break;
		case 3:
			printf("1GB cost 350ksh \n");
			break;
		case 4:
			printf("2GB cost 600ksh \n");
			break;
		default:
			printf("Invalid choice \n");
	}
	return 0;
}
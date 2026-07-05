//C-structures... Vehicle Registration

/*
Description: A program that uses C structures and prompts the user to enter the vehicle details
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 5/7/2026
*/

#include <stdio.h>
#include <string.h>

struct Vehicle{
	char Reg_No [20];
	char Model [14];
	char Manufacturer [20];
	int Year_manufacture;
	float DailyRentalCharge ;
};

int main (){
	struct Vehicle V1;
	
	//Prompt the user to enter the vehicle details
	printf("Enter the Vehicle's Registration Number: ");
	scanf("%s",&V1.Reg_No);
	
	printf("Enter the vehicle's model: ");
	scanf("%s",&V1.Model);
	
	printf("Enter the Manufacturer: ");
	scanf("%s",&V1.Manufacturer);
	
	printf("Enter the year of manufacture: ");
	scanf("%d",&V1.Year_manufacture);
	
	printf("Enter the Daily Rental Charge: ");
	scanf("%f",&V1.DailyRentalCharge);
	
	
	printf("------------------------------------ \n");
	
	printf("  VEHICLE REGISTRATION REPORT   \n");
	printf("Registration No: %s\n",V1.Reg_No);
	printf("Vehicle Model: %s\n",V1.Model);
	printf("Mnufacturer: %s\n",V1.Manufacturer);
	printf("Year Manufactured: %d\n",V1.Year_manufacture);
	printf("Daily Rental Fee: %f\n",V1.DailyRentalCharge);
	
	printf("--------------------------------------");
	
}
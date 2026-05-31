//Program that calculates water bills

/*
Description: A program that calculates water bills
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date:31/05/2026
*/

#include <stdio.h>

int main(){
	float UnitConsumed;
	float TotalBill;
	
	printf("Enter the number of water units consumed: ");
	scanf("%f", &UnitConsumed);
	
	
	if (UnitConsumed >=0 && UnitConsumed <=30){
		TotalBill = UnitConsumed*20;
	}
	else if(UnitConsumed>=31 && UnitConsumed <=60){
		TotalBill = UnitConsumed*25;
	}
	else if(UnitConsumed>=61){
		TotalBill = UnitConsumed*30;
	}	
	
	printf("Your total water bill is:%.2f",TotalBill);
	
	return 0;	
}
//Program to check if a student is eligible for final exams

/*
Description: Program to show if a student is eligible for final exams
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 29/05/2026
*/

#include <stdio.h>
int main(){
	float attendance,average_marks;
	
	printf("Enter your attendance in percentage: ");
	scanf("%f", &attendance);
	
	printf("Enter your average_marks: ");
	scanf("%f", &average_marks);
	
	if(attendance >= 75 && average_marks >= 40){
		printf("Eligible for the exams\n");
	}
	else{
		printf("Not eligible for the exams\n");
	}
	
	return 0;
 
}
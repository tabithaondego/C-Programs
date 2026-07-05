// C-Structures

/*
Description : A program that promps the user to enter Patient's Details
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date:5/7/2026
*/

#include <stdio.h>
#include <string.h>

struct Patient{
	int Patient_Id;
	char Patient_Name[30];
	int Age;
	char Gender;
	char Diagnosis [100];
	int Number_Days;
};

int main(){
	struct Patient P1;
	
	//Prompt the user to enter details
	printf("Enter the Patient's Id: ");
	scanf("%d",&P1.Patient_Id);
	
	printf("Enter the Patient's Name: ");
	scanf("%s",&P1.Patient_Name);
	
	printf("Enter the Patient's Age: ");
	scanf("%d",&P1.Age);
	
	printf("Enter the Patient's Gender: ");
	scanf("%s",&P1.Gender);
	
	printf("Enter the Patient's Diagosis: ");
	scanf("%s",&P1.Diagnosis);
	
	printf("Enter the number of days: ");
	scanf("%d",&P1.Number_Days);
	
	
	printf("\n=====================================================\n");
	printf("PATIENTS ADMISSION REPORT");
	printf("\n======================================================\n");
	
	printf("Patient ID   :%d\n",P1.Patient_Id);
	printf("Patient Name     :%s\n",P1.Patient_Name);
	printf("Patient Age     :%d\n",P1.Age);
	printf("Patient's Gender    :%s\n",P1.Gender);
	printf("Patient's Diagnosis    :%s\n",P1.Diagnosis);
	printf("Number of Days   :%d\n",P1.Number_Days);
	
	printf("\n========================================================\n");
	
	
	return 0;
}
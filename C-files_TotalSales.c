//C-files

/*
Description: A program that stores daily sales transactions in a c-file
Name: Tabitha Ondego
REG NO:BCS-03-0073/2026
Date: 12/7/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float Amount;
	float Total =0;
	FILE *fptr;
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\sales.txt","w");
	if(fptr == NULL){
		printf("Error creating the file");
		exit(1);
	}
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\sales.txt","r");
	if(fptr == NULL){
		printf("Error opening the file");
		exit(1);
	}
	while(fscanf(fptr,"%f",&Amount)== 1){
		Total+=Amount;
	}
	printf("Total Sales: ",Total);
	fclose(fptr);
	return 0;
}
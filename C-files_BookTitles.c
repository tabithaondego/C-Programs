// C-files

/*
Description: A program that allows a librarian to enter books and store them in a text file
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 12/7/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	char Title [100];
	FILE *fptr;
	
	fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\borrowed_books.txt","a"); // To avoid deleting the existing content 
	
	if(fptr == NULL){
		printf("Error creating the file \n");
		exit(1);
	}
	printf("Enter the Title of the book: ");
	fgets(Title,sizeof(Title),stdin);
	
	fprintf(fptr,"%s",Title);
	printf("The Title was successfully stored");
	
	fclose(fptr);
	
	return 0;
}
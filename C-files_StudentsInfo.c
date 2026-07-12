// C-files

/*
Description: A program that holds student information using a binary file
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 12/7/2026
*/

#include <stdio.h>
#include <stdlib.h>

 struct Student{
	 char Name [25];
	 char RegNo [20];
	 float Marks;
 };
 
 int main(){
	 struct Student s;
	 FILE *fptr;
	 
	 fptr =fopen("C:\\Users\\pc\\Desktop\\c-files\\results.dat","wb");
	 if(fptr == NULL){
		 printf("Error Creating the binary file");
		 exit(1);
	 }
	 printf("Enter the Student's Name: ");
	 fgets(s.Name,sizeof(s.Name),stdin);
	 fprintf(fptr,"%s",s.Name);
	 
	 printf("Enter the Student's Registration Number: ");
	 fgets(s.RegNo,sizeof(s.RegNo),stdin);
	 fprintf(fptr,"%s",s.RegNo);
	 
	 printf("Enter the Student's Marks: ");
	 scanf("%f",&s.Marks);
	 
	 fclose(fptr);
	 
	 fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\results.dat","rb");
	 if(fptr == NULL){
		 printf("Error opening the file");
		 exit(1);
	 }
  	 while(fread(&s,sizeof(struct Student),1,fptr)==1){
		   printf("Name:%s\n",s.Name);
		   printf("RegNo:%s\n",s.RegNo);
		   printf("Marks:%f\n",s.Marks);
	   }
	   fclose(fptr);
	   return 0;
	 
 }
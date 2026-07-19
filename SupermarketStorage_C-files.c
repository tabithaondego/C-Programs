//C-files

/*
Description: A program that helps a local supermarket store and retrieve products from a text file
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 19/7/2026
*/

#include <stdio.h>
#include <stdlib.h>

struct Product{
	int ID;
	char Name[60];
	float price;
	int quantity;
};

//Adding products
void AddProducts(){
	int i;
	FILE *fptr;
	fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\products.txt","w");
	
	if(fptr == NULL){
		printf("Error creating the file");
		return;
	}
	struct Product p;
	printf("Enter details of 5 products:\n");
	
	for(i = 0;i<5;i++){
		printf("\nProduct %d\n",i+1);
		
		printf("Product ID: ");
		scanf("%d",&p.ID);
		
		printf("Product Name: ");
		scanf("%s",p.Name);
		
		printf("Product's Price: ");
		scanf("%f",&p.price);
		
		printf("Product's Quantity: ");
		scanf("%d",&p.quantity);
		
		fprintf(fptr,"%d %s %f %d\n",p.ID,p.Name,p.price,p.quantity);
	}
	fclose(fptr);
	printf("\nProducts saved successfully");
}

//Dispaying Products
void DisplayProducts(){
	FILE *fptr;
	fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\products.txt","r");
	if(fptr == NULL){
		printf("Error opening the file");
		return;
	}
	struct Product p;
	
	printf("\n----------------\n");
	printf("%-10s %-20s %-10s %-10s\n","ID","Name","price","quantity");
	printf("------------------\n");
	
	while(fscanf(fptr,"%d,%s,%f,%d",&p.ID,p.Name,p.price,p.quantity) == 4){
		printf("%-10d %-20s %-10.2f %-10d\n",p.ID,p.Name,p.price,p.quantity);
	}
	fclose(fptr);
}

//Searching Products
void SearchProduct(){
	FILE *fptr;
	fptr = fopen("C:\\Users\\pc\\Desktop\\c-files\\products.txt","r");
	
	if(fptr == NULL){
		printf("Error opening the file");
		return;
	}
	struct Product p;
	int SearchID;
	int found = 0;
	
	printf("\nEnter Product ID to search: ");
	scanf("%d",&SearchID);
	
	while(fscanf(fptr,"%d %s %f %d",&p.ID,p.Name,p.price,p.quantity) == 4){
		if(p.ID == SearchID){
			printf("\nProduct Found\n");
			printf("Product ID :%d\n",p.ID);
			printf("Product Name :%s\n",p.Name);
			printf("Product Price :%f\n",p.price);
			printf("Quantity :%d\n",p.quantity);
			found == 1;
			break;
		}
	}
	if(!found){
		printf("Product not found\n");
	}
	fclose(fptr);
}
	
//Main function
int main(){
	int choice;
	
	do{
		printf("\n======Supermarket Product Management=========\n");
		printf("1.Add Product\n");
		printf("2.Display Products\n");
		printf("Search Products\n");
		printf("Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				AddProducts();
				break;
			case 2:
				DisplayProducts();
				break;
			case 3:
				SearchProduct();
				break;
			case 4:
				printf("Exiting Program\n");
				break;
			default:
				printf("Choice is invalid");
		}
	} while(choice !=4);
	return 0;
}

//Arrays assignment

/*
Description: A program that monitors revenue and room occupancy
Name: Tabitha Ondego
REG NO: BCS-03-0073/2026
Date: 25/6/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a,b,c;
	
	//Weekly Revenue Tracker
	float revenue[7];
	float TotalRevenue = 0;
	float AverageRevenue;
	
	for(a=0;a<7;a++){
		printf("Enter Daily Revenue %d: ", a+1);
		scanf("%f", &revenue[a]);
		TotalRevenue += revenue[a];
	}
	//Average Revenue
	AverageRevenue = TotalRevenue/7;
	printf("\n Total Revenue for a week = %2.f\n",TotalRevenue);
	printf("Average Revenue = %2.f\n", AverageRevenue);
	
	//Room Occupancy for one branch
	int occupancy[5][10];
	int occupied , vacant;
	
	srand(time(NULL));
	
	for(a=0;a<5;a++){
		for(b=0;b<10;b++){
			occupancy[a][b] = rand()%2;
		}
	}
	for(a=0;a<5;a++){
		occupied = 0;
		vacant = 0;
		
		for(b=0;b<10;b++){
			if(occupancy[a][b]==1)
				occupied++;
			else
			{
				vacant++;
			}
		}
		printf("Floor %d:occupied =%d, vacant=%d\n", a+1, occupied,vacant);
	}
	
	//Room Occupany for mulitple branches
	int chain[3][5][10];
	int TotalOccupied = 0;
	
	for(a=0;a<3;a++){
		for(b=0;b<5;b++){
			for(c=0;c<10;c++){
				chain[a][b][c]=rand()%2;
				
				if(chain[a][b][c] == 1)
					TotalOccupied++;
			}
		}
	}
	
	printf("The total rooms occupied in all branches = %d\n", TotalOccupied);
	
	return 0;
}
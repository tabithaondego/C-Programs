//Program that shows one is fit for a loan

/*
Description:Program that shows one is fit for a loan from a bank
Name: Tabitha Ondego
Date: 21/05/2026
REG NO: BCS-03-0073/2026
Version 1
*/

int main(){
	int age;
	float income;
	
	printf("Enter your age: ");
	scanf("%d",age);
	
	printf("Enter your income: ");
	scanf("%d",income);
	
	if(age>=21 && income>=21000){
		printf("Congratulations, you qualify for a loan. \n");
	}
	else{
		printf("Unfortunately, we are unable to offer you a loan at this time. \n");
	}
	return 0;
}
//C-Structures...Employee Payroll information

/*
Description:A program using C-structures that prompts the employee to enter their records
Name: Tabitha Ondego
REG N0: BCS-03-0073/2026
Date: 5/7/2026
*/

#include <stdio.h>
#include <string.h>

struct Employee{
	int Emp_Id;
	char Emp_Name [20];
	char Department [15];
	float Basic_Salary;
	float Allowance;
	
};

// Calculate gross salary
float CalcGrossSalary(struct Employee emp);

	return emp.Basic_Salary + emp.Allowance;



int main(){
	struct Employee emp;
	int a;
	float Gross_Salary;
	
	for(a=0;a<3;a++){
		printf("\nEnter employee details %d\n" a+1);
		
		printf("Employee Id: ");
		scanf("%d",&emp.Emp_Id);
		
		printf("Employee Name: ");
		scanf("%s",&emp.Emp_Name);
		
		printf("Department: ");
		scanf("%s",&emp.Department);
		
		printf("Basic Salary: ");
		scanf("%f",&emp.Basic_Salary);
		
		printf("Allowance: ");
		scanf("%f",&emp.Allowance);
		
	}
	
	//REPORT
	
	printf("------------------------------------ \n");
	printf("    EMPLOYEE PAYROLL REPORT   ");
	printf("------------------------------------\n");
	
	printf("%-8s %-20s %-15s %-15s\n", "ID","Name","Department","Gross Salary(ksh)");
	printf("-------------------------------------\n");
	
	for(a=0;a<3;a++){
		GrossSalary = calculateGrossSalary(emp[a]);
		
		printf("%-8s %-20s %-15s %.2f\n",
		emp[a].id,
		emp[a].name,
		emp[a].department,
		grossSalary);
	}
	return 0;
}	

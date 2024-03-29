/*Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
For example,
Input:
Base Salary: 100
HRA=10
DA=5
TA=8

Output: 
Rs. 123*/

#include<stdio.h>
main(){
	
	int sal;
	int hra , da ,ta ,gross;
	
	printf("Enter your salary:-");
	scanf("%d",&sal);
	
	hra=sal*10/100;
	da=sal*8/100; ;
	ta=sal*5/100;;
	 
	gross= sal+ hra + da + ta;
	printf("Your gross:-%d" , gross);
}

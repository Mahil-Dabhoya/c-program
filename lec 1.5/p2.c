/* Write a program that takes an integer as input and checks if it is even or odd. Print "Even" if 
the number is even and "Odd" if it's odd.*/

#include<stdio.h>
main(){
	int a;
	
	printf("Enter your num:-");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("num of even");
	}
	else{
		printf("num of odd");
	}
}


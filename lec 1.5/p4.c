 /*Create a program that prompts the user to enter their age and
  determines if they are eligible to vote (age 18 or older) or not.*/
  
#include<stdio.h>
main(){
	int a;
	printf("Enter your age:-");
	scanf("%d",&a);
	
	if(a <=0){
		printf("Your age not valid");
	}
	else if(a >= 18){
		printf("Your eligible for vote\n");
	}
	else{
		printf("Your not eligible for vote\n");
	}
}

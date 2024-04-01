/* Write a program that takes a number as input and 
 checks if it's positive, negative, or zero. Print the result accordingly.*/



#include<stdio.h>
main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	if(a ==0){
		printf("Your number zero");
	}
	else if(a <= 0){
		printf("Your number negative\n");
	}
	else{
		printf("Your number positive\n");
	}
}

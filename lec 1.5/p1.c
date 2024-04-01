/*Grade Calculator*/

#include<stdio.h>
main(){
	
	int marks;
	printf("Enter your marks:-");
	scanf("%d",&marks);
	
	if( marks >= 90 && marks<=100 ){
		printf("Your grade A \n");
	}
	else if( marks >= 80 && marks< 90 ){
		printf("Your grade B \n");
	}
	else if( marks >= 70 && marks< 80 ){
		printf("Your grade C \n");
	}
	else if( marks >= 60 && marks< 70 ){
		printf("Your grade D \n");
	}
	else if( marks >= 0 && marks< 60 ){
		printf("Your grade E \n");
	}
	else{
		printf("Invalid marks\n");
	}
		
}

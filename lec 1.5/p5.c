/*Create a program that prompts the user to enter their age and determines if they are a child (age 12 or younger), a teenager (ages 13 to 19), 
an adult (ages 20 to 64), or a senior (age 65 or older).*/

#include<stdio.h>
main(){
	
	int age;
	printf("Enter your age:-");
	scanf("%d",&age);
	
	if( age<=12){
		printf("you are a child \n");
	}
	else if(age >= 13 && age <= 19){
		printf("you are a teenager\n");
	}
	else if(age >= 20 && age <= 64){
		printf("you are a adult\n");
	}
	else{
		printf("you are a senior");
	}
}

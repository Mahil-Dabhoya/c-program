#include<stdio.h>

void main(){
	
	char name[20];
	
	int i ,length,temp;
	
	printf("Enter name:");
	scanf("%s",name);
	
	length=strlen(name)-1;
	
	for(i=0 ; i<strlen(name)/2;i++){
		
		temp=name[i];
		
		name[i]=name[length];
		
		name[length--]=temp;
		
		
		
	}
	
	printf("Revers:%s",name);
	
	
	
}

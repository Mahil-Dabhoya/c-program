#include<stdio.h>
void main(){
	
	
	int x;
	printf("Enter a value of X:");
	scanf("%d",&x);

	int y;
	printf("Enter a value of Y:");
	scanf("%d",&y);
	
	
	int *ptr =&y;
	int *ptr1 =&x;
	
	printf("Enter a value of X:%d\n",*ptr);
	printf("Enter a value of Y:%d\n",*ptr1);
	
}

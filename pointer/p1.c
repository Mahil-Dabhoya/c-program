#include<stdio.h>
void main(){
	
	int a=5;
	int *ptr=&a;
	
	printf("print A:%d\n",a);
	printf("print PTR:%d\n",*ptr);
	
	a = 56;
	
	printf("print A:%d\n",&a);
	printf("print PTR:%d\n",ptr);
	
	
}

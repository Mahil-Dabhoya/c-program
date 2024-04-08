#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter a value:");
	scanf("%d",&a);
	
	(a%2==0) ? (printf("even value"))
			   :(printf("odd value"));
}

#include<stdio.h>

main(){
	int a,b,c;
	
	printf("enter the a number :");
	scanf("%d",&a);
	printf("enter the b number :");
	scanf("%d",&b);
	printf("enter the c number :");
	scanf("%d",&c);

	//min number
	
	(a<b)
		?((a<c)
		     ?printf("The min value: %d",a)
			 :printf("The min value: %d",c))
		:((b<c)
			?printf("The min value: %d",b)
			:printf("The min value: %d",c));
	

}

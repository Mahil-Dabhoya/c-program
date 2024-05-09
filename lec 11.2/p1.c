#include<stdio.h>

void main(){
	
	int size;
	
	printf("Enter a Elements numbers:");
	scanf("%d",&size);
	
	int a[size];
	
	int *ptr[size];
	int i;
	
	printf("\nArray\n");
	
	for(i=0 ; i<size ; i++){
		printf("Enter Element %d:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<size ; i++){
		ptr[i] = &a[i];
	}
	
	for(i=0 ; i<size ; i++){
		
		int sqr = *ptr[i] * *ptr[i];
		printf("%d\t",sqr);
	}
}

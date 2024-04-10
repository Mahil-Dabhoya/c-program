#include<stdio.h>
main(){
	
	int n=1,m;
	printf("Enter a value:");
	scanf("%d",&m);
	
	do{
		if(m%2!=0){
			printf(" %d",m);
		}
		m--;
	}while(m >= n);
}


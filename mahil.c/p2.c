#include<stdio.h>
main(){
	int i, arr[i],a;
	
	printf("Enter the size of arry:-");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	 int max = arr[0];
	 
	for (i=0;i<a;i++) {
        if (arr[i]>max) {
                max=arr[i];
            }
        }
        printf("lar alm:%d",max);
    }


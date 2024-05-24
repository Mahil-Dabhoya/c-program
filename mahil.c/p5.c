#include<stdio.h>

struct student {
	
	char name[50];
	int year;
	int price[4];

	
};

int main (){
	int i;
	struct student s1;
	struct student s2;
	struct student s3;
	
	printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of car 1\n");
	printf("\t\t\t\t\t\t*************************\n");

	
	printf("enter the name of car:");
	scanf("%s",&s1.name);
	
	printf("enter the year:");
	scanf("%d",&s1.year);
	
	printf("enter the price:");
	scanf("%d",&s1.price);
	

    
    
    printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of car 2\n");
	printf("\t\t\t\t\t\t*************************\n");

	
	printf("enter the name of car:");
	scanf("%s",&s2.name);
	
	printf("enter the yera:");
	scanf("%d",&s2.year);
	
	printf("enter the price:");
	scanf("%d",&s2.price);
	



    printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of car 3\n");
	printf("\t\t\t\t\t\t*************************\n");

	
	printf("enter the name of car:");
	scanf("%s",&s3.name);
	
	printf("enter the yera:");
	scanf("%d",&s3.year);
	
	printf("enter the price:");
	scanf("%d",&s3.price);
	
	
	printf("first car data\n\n");

	printf("%s\n",s1.name);
	printf("%d\n",s1.year);
	printf("%d\n\n",s1.price);

	
	printf("second car data\n\n");

	printf("%s\n",s2.name);
	printf("%d\n",s2.year);
	printf("%d\n\n",s2.price);

	
	printf("third car data\n\n");

	printf("%s\n",s3.name);
	printf("%d\n",s3.year);
	printf("%d\n\n",s3.price);

    
return 0;
}

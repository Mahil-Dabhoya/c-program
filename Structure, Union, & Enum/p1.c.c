#include<stdio.h>

struct student {
	int id;
	char name[50];
	int age;
	char course[50];
	char city[50];
	int std;
	char school[50];
	
};

int main (){
	int i;
	struct student s1;
	struct student s2;
	struct student s3;
	
	printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of student 1\n");
	printf("\t\t\t\t\t\t*************************\n");
	printf("enter the id of student:");
	scanf("%d",&s1.id);
	
	printf("enter the name of student:");
	scanf("%s",&s1.name);
	
	printf("enter the age of student:");
	scanf("%d",&s1.age);
	
	printf("enter the course of student:");
	scanf("%s",&s1.course);
	
	printf("enter city name:");
	scanf("%s",&s1.city);
	
	printf("enter std of student:");
	scanf("%d",&s1.std);
	
	printf("enter the school name:");
	scanf("%s",&s1.school);
    
    
    printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of student 2\n");
	printf("\t\t\t\t\t\t*************************\n");
	printf("enter the id of student:");
	scanf("%d",&s2.id);
	
	printf("enter the name of student:");
	scanf("%s",&s2.name);
	
	printf("enter the age of student:");
	scanf("%d",&s2.age);
	
	printf("enter the course of student:");
	scanf("%s",&s2.course);
	
	printf("enter city name:");
	scanf("%s",&s2.city);
	
	printf("enter std of student:");
	scanf("%d",&s2.std);
	
	printf("enter the school name:");
	scanf("%s",&s2.school);

    printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of student 3\n");
	printf("\t\t\t\t\t\t*************************\n");
	printf("enter the id of student:");
	scanf("%d",&s3.id);
	
	printf("enter the name of student:");
	scanf("%s",&s3.name);
	
	printf("enter the age of student:");
	scanf("%d",&s3.age);
	
	printf("enter the course of student:");
	scanf("%s",&s3.course);
	
	printf("enter city name:");
	scanf("%s",&s3.city);
	
	printf("enter std of student:");
	scanf("%d",&s3.std);
	
	printf("enter the school name:");
	scanf("%s",&s3.school);
	
	printf("first student data\n");
	printf("%d\n",s1.id);
    printf("%d\n",s1.id);
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.course);
	printf("%s\n",s1.city);
	printf("%d\n",s1.std);
	printf("%s\n",s1.school);
	
	printf("second student data\n");
	printf("%d\n",s2.id);
	printf("%s\n",s2.name);
	printf("%d\n",s2.age);
	printf("%s\n",s2.course);
	printf("%s\n",s2.city);
	printf("%d\n",s2.std);
	printf("%s\n",s2.school);
	
	printf("third student data\n");
	printf("%d\n",s3.id);
	printf("%s\n",s3.name);
	printf("%d\n",s3.age);
	printf("%s\n",s3.course);
	printf("%s\n",s3.city);
	printf("%d\n",s3.std); 
    printf("%s\n",s3.school);
    
return 0;
}

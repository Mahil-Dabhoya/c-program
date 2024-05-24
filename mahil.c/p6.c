#include <stdio.h>
struct student {
	
	char name[50];
	char course[50];


	
};

int main() 
{
    FILE *student_file;
    
    struct student s1;
	struct student s2;

    student_file = fopen("student_file.txt", "w");

	printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of student 1\n");
	printf("\t\t\t\t\t\t*************************\n");

	
	printf("enter the name of student:");
	scanf("%s",&s1.name);
	
	printf("enter the course:");
	scanf("%s",&s2.course);
	
	printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of student 2\n");
	printf("\t\t\t\t\t\t*************************\n");

	
	printf("enter the name of student:");
	scanf("%s",&s1.name);
	
	printf("enter the course:");
	scanf("%s",&s2.course);
	
	printf("\t\t\t\t\t\t*************************\n");
	printf("\t\t\t\t\t\tInformation of student 3\n");
	printf("\t\t\t\t\t\t*************************\n");

	
	printf("enter the name of student:");
	scanf("%s",&s1.name);
	
	printf("enter the course:");
	scanf("%s",&s2.course);
	
	
	
	
 
	printf("first student data\n\n");

	printf("%s\n",s1.name);
	printf("%s\n",s2.course);
		fprintf(student_file,"name:%s\n",s1.name);
	fprintf(student_file,"cours:%s\n",s2.course);

	
	printf("second student data\n\n");

	printf("%s\n",s1.name);
	printf("%s\n",s2.course);
		fprintf(student_file,"name:%s\n",s1.name);
	fprintf(student_file,"cours:%s\n",s2.course);
	
	printf("third student data\n\n");

	printf("%s\n",s1.name);
	printf("%s\n",s2.course);


	fprintf(student_file,"name:%s\n",s1.name);
	fprintf(student_file,"cours:%s\n",s2.course);
    fclose(student_file);
  
    
    printf("\nstudent detiels printed in student_file...\n");
    
}


#include<stdio.h>

int main(){
	
	char ch;
	
	printf("enter a charcter:");
	scanf("%s",&ch);
	
	if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z') ) {
		
		
		switch(ch){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			
			printf("%c is a vowel\n",ch);
			break;
			
			default:
				printf("%c is a consonant",ch);
		}
	}
	else{
		printf("%c is not alphabet\n",ch);
	}
	return 0;
}

/*Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.
For example,
Input:
First angle: 65
Second angle: 45 

Output: 
Third angle: 70*/


#include<stdio.h>
main(){
	int fa,sa;
	int ra;
	
	printf("Enter a first angle value:-");
	scanf("%d",&fa);
		
	printf("Enter a second angle value:-");
	scanf("%d",&sa);

	ra= 180-(fa+sa);
	printf("Third angle:- %d",ra);
}

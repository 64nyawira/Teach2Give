/*Question 3: Power of Two
Write a program that takes an integer as input and returns true if the input is a power of two.*/

#include<stdio.h>
 int powerTwo(int num){
	 if(num<0){
		 return 0;
	 }
	 while(num>1){
		 if(num % 2 != 0){
			 return 0;
		 }
		 num/=2;
	 }
	 return 1;
 }

int main(){
	int number;
	printf("Enter an integer: ");
	scanf("%d",&number);
	
	if (powerTwo(number)){
		printf("true");
    }
    return 0;
}
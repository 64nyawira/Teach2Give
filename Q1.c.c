/* Question 1: FizzBuzz
Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print
"FizzBuzz".*/

#include <stdio.h>

int main(){
    int i=0;
	for(i=1;i<= 100;i++){
		 if (i%3==0 && i%5==0){
			printf("FizzBuzz\n");
		 }
		else if(i% 3 == 0){
			printf("Fizz\n");
		}
		else if(i%5==0){
			printf("Buzz\n",i);
		}
		else
		{
			printf("%d\n",i);
		}
		
	
	}
	printf("\n");
	return 0;
}
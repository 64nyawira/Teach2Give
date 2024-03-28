/*Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100.*/

#include<stdio.h>

int main(){
	int key=0;
	int fib_arr[11];
	int i=0;
	fib_arr[0]=0;
    fib_arr[1]	=1;
	printf("%d\n",fib_arr[0]);
	printf("%d\n",fib_arr[1]);
	for(i=2;i<= 11;i++){
		key=i-1;
		fib_arr[i]=fib_arr[key]+fib_arr[i-2];
		printf("%d",fib_arr[i]);
        printf("\n");
	}

	return 0;
}
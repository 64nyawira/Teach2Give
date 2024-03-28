/*Question 4: Capitalize Words
Write a program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string.*/

#include <stdio.h>

void upperCase(char[]);
void upperCase(char s[]){
	int letter=0;
	while(s[letter] !=0){
		if(s[letter]>='a' && s[letter]<= 'z'){
			s[letter]=s[letter]-32;
		}
		letter++;
	}
}

int main(){
	char string;
	printf("Enter a string: \n");
	scanf("%c",&string);
	upperCase(string);
	printf("%s\n",string);
	return 0;
}
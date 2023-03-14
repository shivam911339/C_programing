//write a c program take the input and check weather the number is divisible by 2 and 4?
#include<stdio.h>
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",a);
	a%2==0&&a%4==0?printf("divisible"):printf("Not Divisible");


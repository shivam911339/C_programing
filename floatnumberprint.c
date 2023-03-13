#include<stdio.h>
int main(){
	float data,decimalPrt;
	printf("Enter the floating point: ");
	scanf("%f",&data);
	printf("%d\n",(int)data);
	decimalPrt=data-(int)data;
	printf("%.1f",decimalPrt);
	
}

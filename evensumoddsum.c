#include<stdio.h>
int main(){
	int num;
	int value1;
	int evenSum=0;
	int oddSum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0){
		value1=num%10;
		if(value1%2==0)
			evenSum+=value1;
		else
			oddSum+=value1;
		num=num/10;		
	}
	printf("%d",evenSum-oddSum);
	return 0;
}

	

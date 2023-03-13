#include<stdio.h>
int main(){
	int number,power;
	int total=1;
	int i;
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Enter a power: ");
	scanf("%d",&power);
	for(i=1;i<=power;i++){
		total=total*number;
	}
	printf("%d",total);
	return 0;
}
	


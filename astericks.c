#include<stdio.h>
int main(){
	int a;
	printf("How many number of asteriks print: ");
	scanf("%d",&a);
	int b=1;
	while(b<=a){
		printf("*");
		b=b+1;
		
	}
	return 0;
}

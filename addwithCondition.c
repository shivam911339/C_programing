#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int i;
	int sum=0;
	for(i=1;i<=num;i++){
		if(i%3==0&&i%5==0)
			sum=sum+i;	
	}
	printf("%d",sum);
	return 0;
}

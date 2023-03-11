#include<stdio.h>
int main(){
	int n;
	int i;
	int total=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		total=total+i;
	}
	printf("%d",total);
	return 0;
}

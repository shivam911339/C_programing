#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	if(a<b && b<c)
		printf("ASCENDING");
	else
		printf("NOT ASCENDING");
	return 0;	
	
}

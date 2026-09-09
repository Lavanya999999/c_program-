#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number a:");
	scanf("%d",&a);
	printf("enter the number b:");
	scanf("%d",&b);
	c=a+b;
	printf("addition=%d\n",c);
	c=a-b;
	printf("subtraction=%d\n",c);
	c=a*b;
	printf("multiplication=%d\n",c);
	c=a/b;
	printf("division=%d\n",c);
}
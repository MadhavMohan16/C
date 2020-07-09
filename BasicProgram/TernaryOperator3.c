#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number");
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?a:b;
	d=d>c?d:c;
	printf("Greater Number is = %d",d);
	return 0;
}
	

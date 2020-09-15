#include<stdio.h>
int pal(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	y=pal(x);
	if(y==x)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	return 0;
}
int r=0;
int pal(int N)
{
	if(N==0)
	return 0;
	r=r*10+N%10;
	pal(N/10);
	return r;
}

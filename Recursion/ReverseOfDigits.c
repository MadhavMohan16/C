#include<stdio.h>
int rev(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	y=rev(x);
	printf("Reverse of digit of given number=%d",y);
	return 0;	
}
int r=0;
int rev(int N)
{
	if(N==0)
	return 0;
	r=r*10+N%10;
	rev(N/10);
	return r;
}

#include<stdio.h>
int fact(int);
int main()
{
	int x,y;
	printf("Enter the number");
	scanf("%d",&x);
	y=fact(x);
	printf("Fcatorial of given number=%d",y);
	return 0;
}
int fact(int N)
{
	if(N==1)
	return 1;
	else
	return (N*fact(N-1));
}

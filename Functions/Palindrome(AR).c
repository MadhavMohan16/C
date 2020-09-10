#include<stdio.h>
int pal(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	y=pal(x);
	if(x==y)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	return 0;
}
int pal(int N)
{
	int R=0;
	while(N!=0)
	{
		R=R*10+N%10;
		N=N/10;
	}
	return R;
}

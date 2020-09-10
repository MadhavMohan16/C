#include<stdio.h>
void pal(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	pal(x);
	return 0;
}
void pal(int N)
{
	int A,R=0;
	A=N;
	while(N!=0)
	{
		R=R*10+N%10;
		N=N/10;
	}
	if(A==R)
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
}

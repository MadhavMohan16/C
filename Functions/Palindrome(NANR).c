#include<stdio.h>
void pal();
int main()
{
	pal();
	return 0;
}
void pal()
{
	int N,A,R=0;
	printf("Enter the number");
	scanf("%d",&N);
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

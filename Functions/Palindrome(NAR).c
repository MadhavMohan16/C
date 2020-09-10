#include<stdio.h>
int pal();
int main()
{
	if(pal())
	printf("Number is palindrome");
	else
	printf("Number is not palindrome");
	return 0;
}
int pal()
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
    return A==R;
}

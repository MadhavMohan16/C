#include<stdio.h>
void allPal(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	allPal(x);
	return 0;
}
void allPal(int N)
{
	int A,R;
	printf("All palindrome number till given limit\n");
	for(int i=1;i<=N;i++)
	{
		R=0;
		A=i;
		while(A!=0)
		{
			R=R*10+A%10;
			A=A/10;
		}
		if(i==R)
		printf("%d  ",i);
	}
}

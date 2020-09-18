#include<stdio.h>
void allPrime(int);
int main()
{
	int x;
	printf("Enter the number");
	scanf("%d",&x);
	allPrime(x);
	return 0;
}
void allPrime(int N)
{
    int count;
    printf("All prime number till given limit\n");
    for(int i=2;i<=N;i++)
    {
    count=0;
    	for(int j=2;j<=i/2;j++)
    	{
    		if(i%j==0)
    		{
    			count++;
    			break;
			}
        } 
		if(count==0)
			printf("%d  ",i);
	}
}

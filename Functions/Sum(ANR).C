#include<stdio.h>
void sum(int,int);
int main()
{
	int x,y;
	printf("Enter the value of x and y");
	scanf("%d%d",&x,&y);
	sum(x,y);//argument or Actual argument
	return 0;
}
void sum(int a,int b)//parameter or Formal argument
{
	int c;
	c=a+b;
	printf("Sum=%d",c);
}

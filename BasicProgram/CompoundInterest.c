#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,CI;
	printf("Enter the vaue of P,R and T");
	scanf("%f%f%f",&P,&R,&T);
	R=1+R/100;
	CI=P*pow(R,T);
	printf("Compound Interest=%f",CI);
	return 0;
}

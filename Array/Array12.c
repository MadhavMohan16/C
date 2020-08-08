//Roots of Quadratic Equation//
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,discriminant;
	float r1,r2,imaginary_part=0;
	printf("Enter the coefficient of x^2 , x  , constant term");
	scanf("%d%d%d",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0)
	{
		printf("Roots are real and distinct\n");
		r1=(-b+sqrt(discriminant))/(2*a);
		r2=(-b-sqrt(discriminant))/(2*a);
	printf("Root 1=%f and Root 2=%f",r1,r2);
	}
	else if(discriminant==0)
	{
		printf("Roots are equal\n");
		r1=r2=-b/(2.0*a);
	printf("Root 1=%f and Root 2=%f",r1,r2);	
    }
    else
    {
    	printf("Roots are complex and imaginary\n");
    	r1=r2=-b/(2*a);
    	imaginary_part=sqrt(-discriminant)/(2*a);
    	printf("Root 1=%f+%f and Root 2=%f+%f",r1,imaginary_part,r2,imaginary_part);
	}
	return 0;
}

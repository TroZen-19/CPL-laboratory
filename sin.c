
//program to compute the taylor series of sinx and compare it 
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
	float deg,x,numerator,denominator,sum,term,builtin;
	int i;
	
	printf("Please enter the degree ");
	scanf("%f",&deg);
	//conversion of degree in radians 
	x=(PI*deg)/180.0;
	
	numerator=x;
	denominator=1;
	i=1;
	sum=0;
	
		do 
		{
			term=(numerator)/(denominator);
			sum = sum+term;
			numerator = -numerator*x*x;
			i=i+2;
			denominator=denominator*i*(i-1);
		
		}
		while(fabs(term) >=0.00001);
		
	printf("the computed value of sin(%f) is : %.2f",deg,term);
	
	builtin = sin(deg);
	
	printf("the value obtained from built in function is:%.2f",builtin);
	
	return 0;
}

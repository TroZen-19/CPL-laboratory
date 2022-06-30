#include <stdio.h>
#include <math.h>

void main ()
{
	float a,b,c,D,r1,r2,rpart,Ipart;
	
	printf ("Enter the coefficient of quadratic equation");
	scanf ("%f%f%f",&a,&b,&c);
	
	D=(b*b)-(4*a*c);
	
	
if(a!=0)
{
if(D==0)
{
r1=(-b)/(2*a);
printf("the roots of the equation are:r1=%f and r2=%f",r1,r1);
}
else if (D>0)
{
r1=(-b+sqrt(D))/(2*a);
r2=(-b-sqrt(D))/(2*a);
printf("the roots of the equation are:root1=%f and root2=%fi",r1,r2);
}

else 
{
rpart=(-b)/(2*a);
Ipart=(sqrt(-D))/(2*a);

printf("the roots of the equation are:%f +- %f",rpart,Ipart);

}

}

else
{printf("invalid operation i.e the given equation is not quadratic");
}

}

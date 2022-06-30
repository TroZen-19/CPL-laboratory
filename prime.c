//program to check whether the given number is prime or not 


#include<stdio.h>

int main()
{
//variable decleration 
int number;
int remainder;
int container=0;


	//accepting the input from the user 
	printf ("Please enter the number you want to check");
	scanf ("%d", &number);
	
	if (number ==0 && number== 1)
	{
	container=1;
	} 

		for(int i=2; i<=number; i++)
		{
			if(number%i == 0)
			{
			container=1;
			}
				if (container=1)
				break;
		}
	if (container=1)
	{
	printf("The given number is not prime");
	
	}	
	else if (container!=1)
	{ 
	printf("The given number is PRIME");
	
	}
return 0;
}

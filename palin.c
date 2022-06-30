//program to check whether the number is palindrome or not 

#include <stdio.h>

int main()
{
//variable decleration 
int num1,org,rem;
int reverse=0;
 org=num1;

	//accepting the inputs from the users
	printf ("plese enter the non zero number");
	scanf ("%d",&num1);

	org=num1;

	while(num1!= 0)
	{
	rem = num1%10;
	reverse=reverse*10+rem;
	num1=num1/10;
	}

if(org==reverse)
 	{printf ("the given number is palindrome");}
 	
 else 
 	{
 	printf ("the given number is not a palindrome number");
 	}




return 0;
}

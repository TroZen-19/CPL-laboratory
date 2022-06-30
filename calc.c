//Program to simlulate a simple calculator
#include <stdio.h>

int main()
{
	int num1,num2,result;
	char op;
	printf("Enter the arithmetic operator:");
	//scan f ma format specifier pachi comma huncha 
	scanf("%c", &op);
	printf("Enter the numbers:");
	
	scanf("%d%d", &num1,&num2);
	if (op=='+')
	{
		result=num1+num2;
		
	}
	else if (op=='-')
	{
	    result=num1-num2;
	}    
	else if (op=='*')
	{
		result=num1*num2;
	}
	else if (op=='/')
	{
		if(num2==0)
		{
		printf("Divide by zero error");
		return 1;
		
		}
		else
		{
		result=num1/num2;
		}
	}
	else if (op=='%')
	
	{
	
		if(num2==0)
		{
		printf("Divide by zero error");
		return 2;
		
		}
		else
		{
		result=num1%num2;
		}
		
	}
	
	else 
	{
	printf("Invalid operator");
	return 3;
	}
	printf ("\n%d %c %d = %d\n", num1,op,num2,result);
return 0;
}

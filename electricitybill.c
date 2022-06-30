#include<stdio.h>
 
//program to calculate the electricity bill and print the user name 
int main()
{
float charge,total,unit,Finaltotal;
char name[20];
printf("Please enter your name");
scanf("%s",name);
printf("please enter the number of units consumed");
scanf("%f",&unit);

	if (unit>0 && unit<=200)
	{ charge= unit*0.8;
	 }
	 
	 else if (unit>= 200 && unit <=300)
	 {charge = (200*0.8)+((unit-200)*0.9);
	  }
	  
	 else if (unit>300)
	 {
	 charge =(200*0.8) +(100*0.9)+((unit-300)*1);
	  }
	  
	  else
	  {
	  printf("Invalid unit");
	  return 1;
	  }
	  total=charge+100;
	if (charge>400)
	
	
		{Finaltotal=total+(total*0.15);
		 }
	else if (charge<=400)
		{Finaltotal=total;
		}
printf("The total charge is :%f",Finaltotal);
return 0;
}

#include<stdio.h>

int main()
	{
		
		struct student
		{
			int usn;
			char name[30];
			int phy,chem,psp;
			int avg;
		};
		int n;
		printf("enter the number of students");
		scanf("%d",&n);
		
		struct student st[n];
		
		for(int i=0;i<n;i++)
		{
		printf("Enter the usn number");
		scanf("%d",&st[i].usn);
		printf("Enter the  name");
		scanf("%s",st[i].name);
		printf("Enter the marks");
		scanf("%d%d%d",&st[i].phy,&st[i].chem,&st[i].psp);
		
		}
		
		//calculating the average 
		
		for (int i=0;i<n;i++)
		{
		st[i].avg=(st[i].phy+st[i].chem+st[i].psp)/3;
		}
		printf("above average\n");
		for(int i=0;i<n;i++)
		{
		if (st[i].avg>=35)
			{
			printf("USN:%d \t Name:%s \t AVG:%d|\t",st[i].usn,st[i].name,st[i].avg);
			}
		}
		printf("below average\n");
		for(int i=0;i<n;i++)
		{
		if (st[i].avg<35)
			{
			printf("USN:%d \t Name:%s \t AVG:%d|\t",st[i].usn,st[i].name,st[i].avg);
			}
		}
		return 0;
	}

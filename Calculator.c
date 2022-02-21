/calculator/
#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int lcm(int a,int b);
int hcf(int a,int b);
int main()
{
 while (true)
  {
	int x,y,choice;
	printf("\npress 1 for addtion\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n");
	printf("press 5 for L.C.M\n");
	printf("press 6 for H.CF\n");
	printf("enter the first number:");
	scanf("%d",&x);
	printf("enter the second number:");
	scanf("%d",&y);
	printf("enter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("addition of two number is %d",add(x,y));
	}
	else if(choice==2)
	{
		printf("subtraction of two number is %d",sub(x,y));
	}
	else if(choice==3)
	{
		printf("multiplication of two number is %d",mul(x,y));
	}
	else if(choice==4)
	{
		printf("division of two number is %d",div(x,y));
	}
	else if(choice==5)
	{
		printf("lcm of two number is %d",lcm(x,y));
	}
   else if(choice==6)
	{
		printf("hcf of two number is %d",hcf(x,y));
	}
   else
   {
   	_exit(0);
   }
  }
  return 0;
}
int add(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int mul(int a,int b)
{
	return (a*b);
}
int div(int a,int b)
{
	return (a/b);
}
int lcm(int a,int b)
{
	int lcm=0;
	int fact=1;
	lcm=(a>b)?a:b;
	while(fact)
	{
		if(lcm%a==0 && lcm%b==0)
		{
			fact=0;
		}
		lcm++;
	}
	return (lcm-1);
}	
int hcf(int a,int b)
{
	int i;
	int hcf=0;
	if(a>b)
	{
		for(i=0;i<=a;i++)
		{
			if(a%i==0 && b%i==0)
			{
				hcf=i;
			}
		}
	}
	else
	{
	  for(i=0;i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				hcf=i;
			}
		}  
	}
   return hcf;
}
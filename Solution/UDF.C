/*write a menu driven program to perform following operation using udf.
1)sum.
2)pelindrome.
3)armstrong.
4)square series.
5)exit.
date:-22/03/22*/
#include<stdio.h>
#include<conio.h>

int menu();
void sum();
void pel(int,int);
int arm();
int square(int,int);

    void main()
    {
	int a,b,c;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				sum();
				break;
			case 2:
				printf("enter any number");
				scanf("%d",&a);
				b=pal(a);
				if(a==b)
				{
					printf("%d is palindrome",a);
				}
				else
				{
					printf("%d is not palindrome",a);
				}
				break;
			case 3:
				b=arm();
				printf("armstrong is %d",b);
				break;

		}
		printf("\n\t do u want to continue ?(yes=Y/y,no=N/n):");
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='y');
    }
getch();
int menu()
{
	int choice;
	printf("\n\t\t menu");
	printf("___________________________________________________________");
	printf("\n\t sum of digit");
	printf("\n\t pelindrome");
	printf("\n\t armstrong");
	printf("\n\t square series");
	printf("\n\t\t enter choice:");
	scanf("%d",&choice);
	return choice;
}
void sum()
{
	int p,q=0,r=0;
	printf("\n enter 2 integer value");
	scanf("%d",&p);
	while(p!=0)
	{
		q=p%10;
		r=p+q;
		p=p/10;
	    printf("sum of digit is %d",r);
	}
	r=p+q;
	printf("\n sum of %d & %d is %d",p,q,r);
}
int pal(int);
{
	int a,b,c=0;
	a=number;
	while(number!=0);
	{
		b=number%10;
		c=c*10+b;
		number/=10;
	}
	if(c==a) return 0;
	else
	return 1;

int arm(int);
{
	int sum=0,a,number;
	while(number!=0)
	{
		a=number%10;
		sum=sum+(a*a*a);
		number=number/10;
	}
	return(0);





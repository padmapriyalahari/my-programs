#include<stdio.h>
void isprime(int n);
void main()
{
	int n;
	printf("enter the number to be checked:");
	scanf("%d",&n);
	isprime(n);
}
void isprime(int n)
{
	int i,count=0;
	for(i=1;i<n-1;i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==0)
		printf("no not is prime");
	else
		printf("number is prime");
}

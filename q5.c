#include<stdio.h>
#include<conio.h>
// WAp to find the sum of the last digit of a number.using a while loop
main()
{
	int n,sum=0;
	
	printf("enter a valu:");
	scanf("%d",&n);
	
	int ld=n%10
	printf("last digit is %d",ld);
	
	while(n>9)
	{
		n=n/10	
	}
	printf("first digit is %d");
}
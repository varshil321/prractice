#include<stdio.h>
void main()
{
	int num,i,c;

	printf("enter the num..\n");
	scanf("%d",&num);

	for(i=1,c=0;i<=num;i++)
		if(num%i==0)
			c++;
	if(c==2)
		printf("prime");

}

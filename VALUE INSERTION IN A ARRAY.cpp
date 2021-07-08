#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,pos;
	int a[n];
	printf("\n\t\t--**VALUE INSERTION IN A ARRAY**--\n");
	printf("\n\tEnter the number of elements:");
	scanf("%d",&n);
	printf("\n\tEnter the value of x to be inserted:");
	scanf("%d",&x);
	printf("\n\tEnter the position where the value will insert:");
	scanf("%d",&pos);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",& a[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<=n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\b ");
	if(pos<1 || pos>n+1)
	{
		printf("\nInsertion is impossible.");
	}
	else
	{
		for(i=n-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=x;
		n++;
		printf("\nThe new array elements are:");
		for(i=0;i<=n-1;i++)
		{
			printf("%d,",a[i]);
		}
		printf("\b ");
	}
}

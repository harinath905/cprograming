#include<stdio.h>
int input1(int *n,int *s)
{
	printf("enter the size of an array\n");
	scanf("%d",n);
	printf("enter the number of times the array has shifted :\n");
	scanf("%d",s);
}
int input2(int n,int a[n])
{
	printf("enter the elements of an array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
}
	int output(int n,int a[n],int index)
	{
		if(index==1){
			printf("\n\nArrary before shifting:\n\n");
		}
		else if(index==2){
			printf("\n\narray after shifting:\n\n");
		}
		for(int i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");

	}
int shift (int n,int a[n],int s)
{
	int temp,j;
	for(int i=0;i<n;i++)
	{
		temp=a[0];
		for(j=0;j<=s-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=temp;
		}}
		int main()
		{

			int n,s;
			input1(&n,&s);
			int a[n];
			input2(n,a);
			output(n,a,1);
			shift(n,a,s);
			output(n,a,2);
			
		}


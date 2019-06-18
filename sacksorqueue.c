#include<stdio.h>
int welcome(int h)
{
	printf("welcome to data structures");
	printf("enter 1 for stack and enter 2 for queue");
	scanf("%d",h);
}
int operations(int h,int c,int n,int a[n])
{
	printf("enter the size of the data structure");
	scanf("%d",&n);
	printf("enter the %d elements of an structure",n); 
	for(i=1;i<n;i++)
	{
		scanf("%d",&n);
	}
	while(1)
	{		
	if(h==1)
	{
		printf(" data structure operations are:\n 1:push in\n 2:pop up\n3:view in");
	       scanf("%d",&c);	
	}
	else if(h==2)
	{
		printf(" data structure operations are:\n 1:enqueue\n
				2:dequeue\n 3:view in");
	       scanf("%d",&c);
	}
int e;
printf("enter 0 to exit");
scanf("%d",&e);
if(e==0)
{
	exit(0);
}
}
int pushin(int c,int top,int n,int p)
{
	int top=-1;
	if(c==1)
	{
	  top=sizeof(a[n])/sizeof(int);
	  if(top==n-1)
	  {
		  printf("stack is full");
	  }
	  else if(top<n)
	  {
		  printf("enter the elements which should be pushed in");
		  scanf("%d",&p);
	 top=top+1;
	 a[top]=p;
	  }
	}

}
int popup(int c)
{
if(c==2)
{
	if(h==1)
	{
		top=sizeof(a[n])/sizeof(int);
		top=top-1;
		a[top]=a[n];
	}
	else if(h==2)
	{
	




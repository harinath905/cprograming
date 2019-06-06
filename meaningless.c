#include <stdio.h>
#include<stdlib.h>
struct player
{
	char name[50];
		int score;

};
int main()
{
	int k=0,n,name,min;
	printf("enter the no of players");
	scanf("%d",&n);
	struct player  p[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the player name");
	       scanf(" %s",p[i].name);
	}
	for(int i=0;i<n;i++)
	{
for(int j=1;j<=3;j++)
{
printf("enter the score of player round %d",j);
scanf("%d",&p[i].score);
k=k+p[i].score+rand();
}
printf("total score of p%d is %d",i+1,k);
}
min=p[0].score;
for(int i=1;i<n;i++)
{
	if(p[i].score>min)
	{
		min=p[i].score;
	}
}
	for(int i=0;i<n;i++)
	{
		if (min==p[i].score)
		{
			printf("winner %s",p[i].name);
		}
	}

}




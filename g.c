#include <stdio.h>
struct fraction
{
	int num;
	int dem;
};
void input(struct fraction * f1,int index){
	printf("Enter the Numertor and Denomentor of fraction%d\n",index);
	scanf("%d%d",&f1->num,&f1->dem);
}
void output(struct fraction f)
{
printf("Sum is %d/%d",f);
}
float add(struct fraction *f,struct fraction f1,struct fraction f2)
{
	f->dem=f1.dem*f2.dem;
	f->num=(f1.num*f2.dem)+(f2.num*f1.dem);


}
int main()
{
	struct fraction f, f1,f2;
	input(&f1,1);
	input(&f2,2);
	add(&f,f1,f2);
	output(f);
}





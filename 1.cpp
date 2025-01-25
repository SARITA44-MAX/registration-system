#include<stdio.h>
#include<conio.h>
main()
{
	int u,a,t;
	float v;
	printf("enter initial velocity:");
	scanf("%d",&u);
	printf("enter acceleration");
	scanf("%d",&a);
	printf("enter time");
	scanf("%d",&t);
	v=u+a*t;
	printf("final velocity is %f",v);
return 0;
}
#include<stdio.h>
#define max 4
int a[max];
void binary(int a[],int key, int f, int l)
{
	int c,i;
	c=(f+l)/2;
		if(a[key]==c)
		{
			printf("\nElement found at %d",key);
		}
		else if(a[key]<c)
		{
			binary(a,key,f,c-1);
		}
		else if(a[key]>c)
		{
			binary(a,key,c+1,l);
		}
		else
		{
			printf("key not found");
		}
	}
main()
{
	int i;
	int key,l,f;
	l=max-1;
	f=0;
	printf("enter elements");
	for(i=0;i<max;i++)
	{
		scanf("%d",&a[i]);
	}
printf("enter element to be found");
scanf("%d",&key);
binary(a,key,f,l);
}

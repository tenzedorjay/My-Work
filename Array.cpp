#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,large;
	printf("enter the values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<5;i++){
	if(a[i]>large){
		large=a[i];
	}
	}
	printf("the greatest value is %d ",large);
	getch();
	}


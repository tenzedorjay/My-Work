/*wap to declare and print the elements of array*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i;
	printf("enter the values \n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		printf("The elements are %d\n",a[i]);
	}
	getch();
}

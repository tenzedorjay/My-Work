#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],b,i,loc,key;
	printf("enter the size of array upto 20 !! \n");
	scanf("%d",&a);
	printf("enter the values of the arrays \n");
	for(i=0;i<b;i++){
		scanf("%d",a[i]);
	}
	printf("enter the location to be inserted \n");
	scanf("%d",&loc);
	printf("enter the key to be inserted");
	scanf("%d",&key);
	for(i=b-1;i>=loc;i--){
		a[i+1]=a[i];
	}
	a[loc]=key;
	printf("array after insertation \n");
	for(i=0;i<=b;i++){
		printf("%d",a[i]);
	}
	getch();
	
}

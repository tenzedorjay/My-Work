#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i,sum;
	printf("enter the elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("the sum of array is %d",sum);
	getch();
}

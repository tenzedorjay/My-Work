#include<stdio.h>
#include<conio.h>
int main(){
	int a[4],i,largest;
	printf("enter the elements of arry\n");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=0;i<4;i++){
		if(a[i]>largest){
		largest=a[i];
		}
	}
	printf("the largest among the elements is %d",largest);
	getch();
}


#include<stdio.h>
#include<conio.h>
int main(){
	int a[4],i;
	printf("enter the elements");
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(i=4;i>0;i--){
		printf("%d",a[i]);
	}
	getch();
}

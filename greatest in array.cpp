#include<stdio.h>
#include<conio.h>
int main(){
	int a[6],i;
	int count=0,count1=0;
	printf("enter the numbers\n");
	for(i=0;i=6;i++){ 
		scanf("%d",a[i]);
		if(a[i]%2==0){
			count ++;
		}else{
			count1++;		
				}
		}
		printf("the even numbers are %d",count);
		printf("the odd numbers are %d",count1);
	getch();
}

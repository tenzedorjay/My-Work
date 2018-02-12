#include<stdio.h>
#include<conio.h>
int main()
{
	int a[7],i,odd=0,even=0;
	printf("enter the elements \n");
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++){
		if(a[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	printf("The even numbers are %d",even);
	printf("The odd numbers are %d",odd);
	getch();
}

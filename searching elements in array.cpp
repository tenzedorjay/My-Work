#include<stdio.h>
#include<conio.h>
int main(){
	int a[12]={12,21,25,2,7,9,6,3,4,11,26,18},i,num,count=0;
	printf("enter the number you want to search \n");
	scanf("%d",&num);
	for(i=0;i<12;i++){
		if(num==a[i]){
		count++;
				}
	}
	if(count==1){
		printf("The number %d exists !!!",num);
		}else{
		printf("The number %d doesnot exists!!!",num);
	}
	getch();
	
}

#include<stdio.h>
#include<conio.h>
int main(){
	int a[8]={23,21,14,42,123,12,8,7},i,j,temp;
	for(i=0;i<8;i++){
		for(j=i+1;j<8;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
		printf("The elemntsin asenceding order are \n");
		for(i=0;i<8;i++){
			printf("%d\n",a[i]);
		}
	
	getch();
	return(0);
}

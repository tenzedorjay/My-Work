#include<stdio.h>
#include<conio.h>
int main(){
 	int a[3][2],i,j;
 	printf("enter the value of arrays\n");
 	for(i=0;i<3;i++){
 		for(j=0;j<2;j++){
 			scanf("%d",&a[i][j]);
		 }
	 }
	 printf("the values of the arrays are \n");
	 for(i=0;i<3;i++){
	 	for(j=0;j<2;j++){
	 		printf("%d\t",a[i][j]);
		 }
		 printf("\n");
	 }
	getch();
}















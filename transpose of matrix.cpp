/* WAP to find the transpose of matrix
Username= Tenzin Dorjee */
#include<stdio.h>
#include<conio.h>
int main(){
	int a[2][2],i,j,t[2][2];
	printf("enter the value of matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			t[j][i]=a[i][j];	//transpose means changing matric form .. eg= 2*3 matrix = 3*2 matrix where 2 is "i" ans 3 is "j" so,i and j is changed in loop	
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	getch();
}

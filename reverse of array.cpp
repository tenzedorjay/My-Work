#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,reverse;
printf("enter the elements\n");
for(i=1;i<6;i++){
	scanf("%d\n",&a[i]);
}	
for(i=4;i>=0;i--){
	reverse++;
}
printf("the reverse elements are %d \n",reverse);
getch();
return(0);
}


/*
 * By :- Programming Knowledge
 * Problem :- concentric square pattern with numbers in C language
 * Method :- 1
 * 
*/

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int n;
printf("Enter the value of n : ");
scanf("%d",&n);

int m = 2*n-1;

int arr[50][50];
int j;

for(int i=0;i<m;i++){
	for(j=i;j<=m-i-1;j++){
		arr[i][j] = n;		
	}
	for(j=i+1;j<=m-i-1;j++){
		arr[j][m-i-1] = n;		
	}
	for(j=m-2-i;j>=i;j--){
		arr[m-i-1][j] = n;		
	}
	for(j=m-2-i;j>i;j--){
		arr[j][i] = n;		
	}
	n--;
}
for(i=0;i<m;i++){
	for(j=0;j<m;j++){
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
getch();
}

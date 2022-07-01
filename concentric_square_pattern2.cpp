/*
 * By :- Programming Knowledge
 * Problem :- concentric square pattern with numbers in C language
 * Method :- 2
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
	for(j=0;j<m;j++){
		int min = i<j ? i : j;
		min = min < m-i ? min : m-i-1;
		min = min < m-j-1 ? min : m-j-1;
		printf(" %d",n-min);
	}
	printf("\n");
}
getch();
}

/*

*/

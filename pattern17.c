#include<stdio.h>
#include<conio.h>
int main()
{
int n, s, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
//for loop to put space
for(s = i; s < n; s++)
printf(" ");
//for loop for displaying star
for(j = 1; j <= i; j++)
printf("* ");
// ending line after each row
printf("\n");
}
return 0;
}

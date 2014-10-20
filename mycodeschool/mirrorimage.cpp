#include<stdio.h>
#include<conio.h>
int main(){
int i,j,row,column;
char ch,a[10][10],b[10][10];

printf("Enter row and column of input array:\n");
scanf("%d%d",&row,&column);

for(i=0;i<row;i++)
{for(j=0;j<column;j++){
	scanf("%s",&a[i][j]);
}
}
puts("Enter mirror Option\n1.H(horizontal)\n2.V(Vertical)");
ch=getch();

if(ch=='H'||ch=='h')
{
for(i=0;i<row;i++)
{for(j=0;j<column;j++){
	b[i][j]=a[row-i-1][j];
}
}

printf("\nThe mirror image of 2D array is :\n");

for(i=0;i<row;i++)
{for(j=0;j<column;j++){
printf("%c\t",b[i][j]);
}printf("\n");}
}

else if(ch=='V'||ch=='v')
{
for(i=0;i<row;i++)
{for(j=0;j<column;j++){
	b[i][j]=a[i][column-j-1];
}
}

printf("\nThe mirror image of 2D array is :\n");
for(i=0;i<row;i++)
{for(j=0;j<column;j++){
	printf("%c\t",b[i][j]);
}printf("\n");}
}

else{
	printf("\nNot valid input...");
}
getch();
return 0;
}

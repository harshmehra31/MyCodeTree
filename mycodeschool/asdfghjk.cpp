#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
int i;
char c[5][2];
for(i=0;i<5;i++){
c[i][0]=0;
c[i][1]=i;
}
for(i=0;i<5;i++){
	printf("\t%d%d",c[i][0],c[i][1]);
}
	getch();
	return 0;
}

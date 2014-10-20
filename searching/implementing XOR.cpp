#include<stdio.h>
#include<conio.h>

int main()
{
	int i,a[]={1,2,3,2,3,1,1};
	int XOR=a[0];
	int size=7;
	for(i=1;i<size;i++){
		XOR=XOR^a[i];
	}
	printf("%d",XOR);
	
	getch();
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void print_repeated_elements(int a[],int n){
	int *count=(int *)calloc(sizeof(int),(n-2));

	printf("numbers repeated are:\n");
	for(int i=0;i<n;i++){
		count[a[i]]++;
		
		if(count[a[i]]==2){
			printf("%d\t",a[i]);
		}
	}
};

int main()
{
	int i,a[]={1,5,3,5,3,4,1};
	
	print_repeated_elements(a,7);

	getch();
	return 0;
}

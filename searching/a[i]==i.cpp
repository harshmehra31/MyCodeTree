#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int search_for_identical(int a[],int size){
	int low,high;
	low=0;
	high=size-1;
	int mid;
	while(low<=high){
		mid=low+((high-low)/2);
		if(mid==a[mid])
		return mid;
		else if(a[mid]<mid)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
};

int main(){
int array[]={-1,0,1,2,7,9};
int k=search_for_identical(array,6);
printf("Found(position)/Not found(-1)=%d",k);
if(k!=-1){
printf("First occurence is at position %d",k);
}
getch();
return 0;
}

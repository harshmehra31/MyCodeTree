#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int binarysearch(int a[],int num,int size){
	int low,high;
	low=0;
	high=size-1;
	int mid;
	while(low<=high){
		mid=low+((high-low)/2);
		if(a[mid]==num)
		return mid+1;
		else if(a[mid]<num)
		low=mid+1;
		else
		high=mid-1;
	}
	return 0;
};

int main(){
int array[]={1,3,4,5,7,9};
int k=binarysearch(array,9,6);
printf("Found(position)/Not found(0)=%d",k);
if(k!=0){
printf("First occirence is at position %d",k);
}
getch();
return 0;
}

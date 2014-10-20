#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int number_greater_than_k(int k,int a[],int size){
	int i;
	for(i=0;i<=size-1;i++){
		if(a[i]>k)
		return a[i];
	}
	return -1;
};
int binarysearch(int a[],int num,int size){
	int low,high;
	low=0;
	high=size-1;
	int mid;
	while(low<=high){
		mid=low+((high-low)/2);
		if(a[mid]==num){
		return number_greater_than_k(num,a,size);
		}
		else if(a[mid]<num)
		low=mid+1;
		else
		high=mid-1;
	}
	return number_greater_than_k(num,a,size);
};

int main(){
int data,loop,count,i=0;
int array[6]={1,2,3,4,77,99};
puts("No of itterations\t");
scanf("%d",&loop);
count=loop;

while(count){

printf("\nElemets of array are:");
for(i=0;i<6;i++){
	printf("\t%d",array[i]);
}
printf("\nEnter data..\n(greater than which to be searched)\t:");
scanf("%d",&data);
int k=binarysearch(array,data,6);

printf("\nElement greater than %d is = %d",data,k);
printf("\n------------------------------------------------------------------\n");

count--;
}
getch();
return 0;
}

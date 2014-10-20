#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Normal method of complexity of o(n^2)
int abs(int n){
	if(n<0)
	return -n;
	else
	return n;
};

/*
int main(){
int a[]={1,60,-10,70,-80,-5};
int i,j,min,min_i,min_j;

min=11111;//Assumed to be infinite

for(i=0;i<6;i++){
	for(j=i+1;j<6;j++){
		if(abs(a[i]+a[j])<abs(min)){
			min=abs(a[i]+a[j]);
			min_i=a[i];
			min_j=a[j];
		}
	}
}

printf("%d:->Numbers are[%d & %d]",min,min_i,min_j);

	getch();
	return 0;
}

void sort(int a[],int size){
	int i,j,temp;

	puts("Input array");
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);}
	puts("\n");
	
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	puts("\nSorted array");
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);}
puts("\n");
};
*/
void merge(int a[],int l,int m,int r){
	int i,j,k,n1,n2;

	n1=m-l+1;
	n2=r-(m+1)+1;
	int b[n1],c[n2];

	for(i=0;i<n1;i++){
		b[i]=a[i+l];
	}

	for(i=0;i<n2;i++){
		c[i]=a[i+m+1];
	}

	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2){
		if(b[i]<=c[j]){
			a[k++]=b[i++];
		}
		else{
            a[k++]=c[j++];
		}
	}
	while(i<n1){
		a[k++]=b[i++];
	}
	while(j<n2){
		a[k++]=c[j++];
	}
};

void mergesort(int a[],int l,int r){
	if(l<r)
	{int mid=l+(r-l)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	merge(a,l,mid,r);
	}
};
//Using sorting
int main(){
int a[]={1,60,10,100,-80,63};
int i,j,temp,pc,nc;
pc=12345;//Infinite value for pc
nc=-12345;//Infinite value for nc
mergesort(a,0,5);//Sorted input array
puts("Sorted array");
for(i=0;i<6;i++){
	printf("%d\t",a[i]);
}
i=0;
j=5;
while(i<j){
	temp=a[i]+a[j];
	if(temp>=0){
		if(temp<pc)
		    {pc=temp;
		    }
		 j--;
	}
	else if (temp<0)
	{if(temp>nc)
	    {nc=temp;
	    }
	 i++;
	}
	else{
		printf("Closest sum=%d",a[i]+a[j]);
	}
}
printf("\nAnswer to be depicted:\n");
if(abs(nc)>abs(pc))
{printf("Value is %d",pc);
}
else
{printf("Value is %d",nc);
}
getch();
return 0;
}

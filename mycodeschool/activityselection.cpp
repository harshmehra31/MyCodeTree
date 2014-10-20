#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
};

void quicksort(int x[],int s[],int low,int high){
	int i,j,temp,pivot;
	if(low<high){
		pivot=low;
		i=low;
		j=high;

		while(i<j){
			while(x[pivot]>=x[i] && i<high){
				i++;
			}
			while(x[j]>x[pivot]){
				j--;
			}
			if(i<j){
			swap(&x[i],&x[j]);
			swap(&s[i],&s[j]);
		}
		}
	 	swap(&x[pivot],&x[j]);
		swap(&s[pivot],&s[j]);

	 	quicksort(x,s,low,j-1);
 		quicksort(x,s,j+1,high);
		 }
};

void activity_selection(int s[],int f[],int n){
	int j,i=0;
	
	quicksort(f,s,0,n-1);
	puts("\nActivities  selected are: \n");
	printf("Process %d\n",i);

		for(j=1;j<n;j++)
		{if(s[j]>=f[i]){
			printf("Process %d\n",j+1);
			i=j;
		}
		}
};
int main(){
	int i,count;
	printf("Enter total no of processes\t");
	scanf("%d",&count);
	int s[count],f[count];
	printf("\nEnter starting time and finishing time\n");
	for(i=0;i<count;i++){
		scanf("%d%d",&s[i],&f[i]);
	}
	printf("\nThe processes are:\n");
	for(i=0;i<count;i++){
		printf("\n%d]	%d	%d",count,s[i],f[i]);
	}
    printf("\n____________________________________________");
    activity_selection(s, f, count);
    
getch();
return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    int count,loop_count,temp,no_of_elements,i,j,result;
    int a[100];
	printf("Enter number of loop-count:\t");
	scanf("%d",&loop_count);
	
    count=loop_count;

	while(count){
		result=0;
		printf("\nEnter size:\t");
	    scanf("%d",&no_of_elements);

        printf("\nEnter elements:\t");
        for(i=0;i<no_of_elements;i++){
            scanf("%d",&a[i]);
        }
    for(i=0;i<no_of_elements;i++){
            for(j=i+1;j<no_of_elements;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    result++;
                }
            }
        }

        printf("\nThe elements are:\n");
        for(i=0;i<no_of_elements;i++){
            printf("\t%d",a[i]);
        }
        printf("\nTotal number of swaps = %d",result);
        count--;
    }
    
    getch();
    return 0;
}

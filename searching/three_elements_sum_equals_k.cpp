#include<stdio.h>
#include<conio.h>

int main(){
	int count,loop,sum,i,j,k;
	int a[7]={1,0,2,6,3,8,5};
puts("Enter itteration to be carried out->\t");
scanf("%d",&loop);
printf("\n-----------------------------------------------------------------\n");
count=loop;
while(count){
	printf("\nEnter Sum:\t");
	scanf("%d",&sum);

 	for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            for(k=j+1;k<7;k++){
				if((a[i]+a[j]+a[k])==sum){
					printf("\nIndex: %d\t%d\t%d",i,j,k);
					printf("\nElements :%d\t%d\t%d\n",a[i],a[j],a[k]);
					}
				
            }
        }
	}printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
count--;}
	getch();
	return 0;
 }

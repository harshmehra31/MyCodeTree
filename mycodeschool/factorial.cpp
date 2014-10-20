#include<stdio.h>
#include<conio.h>
/* Include other headers as needed */
int pow(int a,int b){
int t=1;
while(b){

    if(a>0){
    t*=a;
    }
    else if(a<0){
    t/=a;
    }
    else
    {
        return 1;
    }
     b--;
    }
    return t;
};

int main()
{
    int count,i,loop_count,x,number;
    printf("Enter number of loop-count:\t");
	scanf("%d",&loop_count);
    count=loop_count;
    while(count){
        x=0;
        printf("\nEnter number:\t");
        scanf("%d",&number);

        for(i=1;i<number;i++)
        {x+=(number/pow(5,i));}

        printf("\nNumber of zeroes:\t");
        printf("%d\n",x);

        count--;
    }
    getch();
    return 0;
}

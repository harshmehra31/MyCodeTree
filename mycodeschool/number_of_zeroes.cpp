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

	printf("\nEnter loop-count:\t");
	scanf("%d",&loop_count);
    count=loop_count;
    i=1;
    while(count){
        x=0;
        printf("\nEnter number:\t");
        scanf("%d",&number);

        while(number/pow(5,i))
        {
            x+=(number/pow(5,i));
            i++;
        }
printf("\nNumber of zeroes are:\t");
        printf("%d\n",x);

        count--;
        i=1;
    }
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
/* Include other headers as needed */

void swap(int *a,int *b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}


int main()
{int a=4,b=6;
    void swap(int *a,int *b);
	
	swap(&a,&b);
	printf("a->%d:b->%d",a,b);
    
    getch();
    return 0;
}

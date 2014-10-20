#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int abs(int n){
	if(n<0)
	return -n;
	else
	return n;
};

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

#include<stdio.h>
#include<conio.h>
/* Include other headers as needed */

int check_prime(int a){
	int i;
	for(i=2;i<(a/2);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
};

int gcd(int a,int b){
	int r=1;

	if(a==1||b==1||(check_prime(a) && check_prime(b))){
		return 1;
	}

	int i=2;
	while(a!=1||b!=1){

		if(a%i==0 && b%i!=0){
			a=a/i;
			r=r*i;
			i++;
		}
		if(b%i==0 && a%i!=0){
			b=b/i;
			r=r*i;
			i++;
		}
		if((b%i==0)&&(a%i==0)){
			a=a/i;
			b=b/i;
			r=r*i;
			i++;
		}
		i++;
		
	}
	return r;
};

int main()
{int a,b;
	printf("Enter numbers:\t");
	scanf("%d%d",&a,&b);
	
	printf("%d= %d\n",a,check_prime(a));
	printf("%d = %d\n",b,check_prime(b));
	printf("\nGCD of %d and %d is %d",a,b,gcd(a,b));

	getch();
    return 0;
}

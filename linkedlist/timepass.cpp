#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
  char string[]="CProgramming";
  int i;
  
  for(i=1;i<=strlen(string);i++){
		printf("%-12.*s",i,string);
		printf("\n");
  }
  for(i=strlen(string);i>=1;i--){
		printf("%-12.*s",i,string);
		printf("\n");
  }
getch();
return 0;

	}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

int i=1;
char s[26],c[26][2];
char b;
puts("Enter string..\n");
while(i<=26){
	s[i]=getchar();
	printf("%c",s[i]);
	i++;
}

for(i=1;i<=26;i++){
if(i<10){
	c[i][0]=0;
	c[i][1]=i;
}
c[i]=i;
	
}

printf("\nDesignated value..");
for(i=1;i<=26;i++){
	printf("\n%c -> %d",s[i],c[i]);
}

getch();
return 0;
}

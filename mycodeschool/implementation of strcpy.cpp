#include<stdio.h>
#include<conio.h>

char *myStrcpy(char *src,char *dst)
{char *ptr;
ptr=dst;

while(*dst++=*src++);

return ptr;

}

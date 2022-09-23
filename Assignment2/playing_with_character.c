#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    
char a;
char A[20];
char s[100];
scanf("%c%s",&a,A);
scanf("\n");
scanf("%[^\n]%*c",s);
printf("%c\n%s\n%s",a,A,s);        
    return 0;
}

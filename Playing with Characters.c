#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[50];
    char s[100];
    char sen[50];
    scanf("%s\n%s\n%[^\n]%*c",ch,&s,&sen);
    printf("%s\n%s\n%s",ch,s,sen);
    scanf("\n");   
    return 0;
}

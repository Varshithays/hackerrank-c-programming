#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int greater;
    
    if((a>b)&&(a>c)&&(a>d))
    {
        greater=a;
    }
    if((b>c)&&(b>d)&&(b>a)){
        
        greater=b;
    }
    if((c>d)&&(c>a)&&(c>b)){
        
        greater=c;
    }
    if((d>a)&&(d>b)&&(d>c)){
        
        greater=d;
        
    }
    return greater;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

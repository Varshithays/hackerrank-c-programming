//https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int v1 = *a + *b;
    int v2 = abs(*a - *b);
    *a=v1;
    *b=v2;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

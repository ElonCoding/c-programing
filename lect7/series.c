#include <stdio.h>
int main(){
    int n=5;
    int t1=0; 
    int t2=1; 
    int nextTerm;
    printf("Fibonacci Series: \n");
    for (int i = 1; i <= n; ++i) {
        printf("%d\n", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
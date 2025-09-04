#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d", &n);
    if (n==0){
        count=1;
    }
    while (n > 0) {
        count++;
        printf("%d\n", n*n);
        n /= 10;
        
    }
    printf("Total digits: %d\n", count);
    return 0;
}
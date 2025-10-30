#include <stdio.h>
int sum(int a){
    if(a==0){
        return 0;
    }
    return a + sum(a-1);
}
int main() {
    int result = sum(3);
    printf("%d\n", result);
    return 0;
}
#include <stdio.h>
void sum(int a){
    if(a>0){
        printf("%d\n",a);
        sum(a-1);
    }
}
int main() {
    sum(3); 
}
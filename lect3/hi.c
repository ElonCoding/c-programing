#include <stdio.h>

int main() {
    int a , b ;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a>75 && b>75) {
        printf("A\n");
    } else if(a>75 && b<75 && b>65){
        printf("B\n");
    } else if (a>75 && b<65 && b>55){
        printf("C\n");
    } else if (a>75 && b<55 && b>45){
        printf("D\n");
    } else if (a>75 && b<55 && b>45){
        printf("D\n");
    } else if (a>75 && b<45 && b>35){
        printf("E\n");
    } else
    printf("F Fail");
    return 0;
}
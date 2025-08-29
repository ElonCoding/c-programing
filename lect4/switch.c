#include <stdio.h>
int main(){
    int a = 5;
    switch (a)
    {
    case 1:
        printf("Hello\n");
        break;
    case 2:
        printf("World\n");
        break;
    default:
        printf("Bye world\n");
        break;
    }
}
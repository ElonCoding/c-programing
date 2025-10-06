#include<stdio.h>
int area(int len,int bre){
    return len*bre;
}
int premeter(int len,int bre){
    return 2*(len+bre);
}
int main()
{
    int length, breadth;
    printf("enter the length:");
    scanf("%d",length);
    printf("enter the breadth:");
    scanf("%d",breadth);
    printf("area: %d", area(length,breadth));
    printf("premeter:%d", perimeter(length,breadth));
}
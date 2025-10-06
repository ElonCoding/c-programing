#include<stdio.h>
int main(){
int num=256;    
int res=0;
while(num!=0)
{
    int lastD= num%10;
    res= res*10+lastD;
    num= num/10;
}
if (original==res){
    printf("polindrommmm");
}
else{
    printf("not");
}

}

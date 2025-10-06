#include<stdio.h>
int main(){
int arr[5]={1,-4,6,7,3};
int k=3;
int wsum=0;
for(int i=0;i<k;i++){
    wsum+=arr[i];
}
int maxsum=wsum;
for(int i=k;i<5;i++)
{
    wsum=wsum+arr[i]-arr[i-k];
    if(wsum>maxsum){
        maxsum=wsum;
    }
}
printf("%d",maxsum);
}



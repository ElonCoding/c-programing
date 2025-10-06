#include<stdio.h>
int main(){
    int arr[2][2]={{2,4},{5,6}};
    int arr1[4];
    int k=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr1[k]=arr[i][j];
            k++;
        }
    }
    for(int i=0;i<4;i++){
        printf("%d",arr1[i]);
    }

    // int arr[3][3]={{1,2,3},{4,5,6}};
    // int arr1[6];
    // int k=1;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         arr1[k]=arr[i][j];
    //         k++;
    //     }
    // }
    // for(int i=0;i<6;i++){
    //     printf("%d",arr1[i]);
    // }

    // for(int i=6;i>0;i--){
    //     printf("%d",arr1[i]);
    // }

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
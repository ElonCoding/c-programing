#include<stdio.h>
int main(){
int arr[3][3]={{1,2,3},{4,5,6}};
    int arr1[6];
    int k=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[k]=arr[i][j];
            k++;
        }
    }
    for(int i=0;i<6;i++){
        printf("%d",arr1[i]);
    }

    for(int i=6;i>0;i--){
        printf("%d",arr1[i]);
    }
}
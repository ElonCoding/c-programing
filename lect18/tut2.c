#include<stdio.h>
int main(){
  int num =65;
  for(int i=0;i<4;i++){
    {
    for(int j=0;j<i;j++){
      printf(" ");
    }
    for(int k=3;k>=i;k--){
      printf("%c",num++);
    }
     for(int m=2;m>=i;m--){
      printf("%c",num++);
    }
    printf("\n");
  }
  }}
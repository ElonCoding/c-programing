int arr[8]={12,-1,-7,8,-15,30,16,28};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
for(int i=0;i<=n-k;i++){
    int found=0;
    for(int j=i;j<i+k;j++){
        if(arr[i]<0){
            printf("%d",arr[j]);
            found=1;
            break;
        }
    }
    if(!found){
        printf("0");
    }  
}


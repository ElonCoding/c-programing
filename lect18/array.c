int arr[]={1,3,-1,-3,5,3,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
int k=2;
for(int i=0;i<=n-k;i++){
    int max=arr[i];
    for(int j=1;j<k;j++){
        if(arr[i+j]>max){
            max=arr[i+j];
        }
        printf("%d",max);
    }
}
printf("\n");
return 0;
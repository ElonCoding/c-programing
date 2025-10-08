#include<stdio.h>
#include<string.h>
 int main(){
    char str[]="hello";
    int ln=strlen(str);
    int count;
    for(int i=0; i<ln;i++){
        count=0;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
            count++;
            break;}
        }
        if(count==0){
            printf("%c",str[i]);
        }
    }
    printf("\n");
    char str2[]="hello";

    int ln2=strlen(str2);
    for(int i=0;i<ln2;i++){
        for(int j=i+1;j<ln2;j++){
            if(str2[i]==str2[j]){
                str2[j]='\0';
            }
        }
    }
    for(int i=0;i<ln2;i++){
        if(str2[i]!='\0'){
            printf("%c",str2[i]);
        }
    }
    printf("\n");
    return 0;
}
        printf("%c", name[i]);
    {
    printf("\n");
    
    char data[10];
    for (int i = 0; name[i] != '\0'; i++)
    {
        data[i] = name[i];
    }
    printf("%s\n", data);

    int ln = strlen(name);
    int isTrue = 1;
    for (int i = 0; i < ln / 2; i++)
    {
        if (name[i] != name[ln - i - 1])
        {
            isTrue = 0;
            break;
        }
    }
    if (isTrue == 1)
    {
        printf("is palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }

    for (i = 0; name[i] != '\0'; i++)
    {
        // This loop is empty, possibly intended for further processing
    }

    return 0;
}
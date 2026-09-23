#include<stdio.h>
int main(){
    int n,key,i,flag=-1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");  
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at index %d\n", i);
            flag=1;
        }
    }
   
    if(flag==-1){
        printf("Element not found");
    }
    return 0;
}
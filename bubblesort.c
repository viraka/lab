#include<stdio.h>

void main(){
    int a[50],n,i,j,temp;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++){
        for(j=0;j<=n-i;j++){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("The array in sorted order is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
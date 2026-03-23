#include<stdio.h>
int main(){
    int i,n,k,j,item;
    int a[100];

    printf("Insert the item: ");
    scanf("%d",&item);

    printf("Insert the position of the item: ");
    scanf("%d",&k);

    printf("Insert the no of Elements: ");
    scanf("%d",&n);

    printf("Insert the array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    j=n;
    while(j>k){
        a[j]=a[j-1];
        j=j-1;
    }
    a[k]=item;
    n=n+1;
    printf("The new Array:\n");

    for(i=0;i<n;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}
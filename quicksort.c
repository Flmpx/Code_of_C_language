#include <stdio.h>
//快速排序_挖坑法
int Partition(int a[],int l,int r){
    int privot=a[l];
    while(l<r){
        while(l<r&&a[r]>=privot) r--;
        a[l]=a[r];
        while(l<r&&a[l]<=privot) l++;
        a[r]=a[l];
    }
    a[l]=privot;
    return l;
}

void quicksort(int a[],int l,int r){
    if(l<r){
        int i=Partition(a,l,r);
        quicksort(a,l,i-1);
        quicksort(a,i+1,r);
    }
}

void print(int a[],int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main ()
{
    return 0;
}

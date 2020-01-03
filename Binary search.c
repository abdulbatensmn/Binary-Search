#include<stdio.h>

int recurbinary(int a[],int s,int e,int x)
{
  int mid;

    if(s<=e){
        mid=(s+e)/2;

        if(a[mid]>x){
            return recurbinary(a,s,mid-1,x);

        }
        else if(a[mid]<x){
            return recurbinary(a,mid+1,e,x);

        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
 int a[10]={10,20,25,31,36,39,78};
 int i,s,e,x=39,flag=0;
 s=0, e=7;

 flag=recurbinary(a,s,e,x);

    if(flag!=-1){
        printf("Data found at index a[%d]",flag);
    }
    else{
        printf("Data not found");
    }
 return 0;
}

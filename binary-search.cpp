#include<stdio.h>
#include<iostream>

using namespace std;

int binary(int a[],int n,int m,int l,int u);

int main(){

    int i,n,m,c,l,u;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of the array: " );
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&m);

    l=0,u=n-1;
    c=binary(a,n,m,l,u);
    if(c==0)
         printf("Number is not found.");
    else
         printf("Number is found. %d",c);

    return 0;
 }

int binary(int a[],int n,int m,int l,int u){

     int mid,c=0;

     if(l<=u){
          mid=(l+u)/2;
          if(m==a[mid]){
              c=mid;
          }
          else if(m<a[mid]){
              return binary(a,n,m,l,mid-1);
          }
          else
              return binary(a,n,m,mid+1,u);
     }
     else
       return c;
}
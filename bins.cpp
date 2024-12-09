#include<iostream>
using namespace std;

int bins(int *ptr,int key,int n){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(ptr[mid]==key){
            return key;
        }else if(ptr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int a=bins(arr,5,n);
    cout<<a;
    return 0;
}
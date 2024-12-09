#include<iostream>
using namespace std;

int linears(int *ptr,int key,int n){
    for(int i=0;i<n;i++){
        if(ptr[i]==key){
            return key;
        }   
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int a=linears(arr,6,n);
    cout<<a;
    return 0;
}
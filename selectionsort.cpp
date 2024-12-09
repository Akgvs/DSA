#include<iostream>
using namespace std;

void selectionSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[minidx]>arr[j]){
            minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=5;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
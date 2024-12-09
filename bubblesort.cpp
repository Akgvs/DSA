#include<iostream>
using namespace std;

void sort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=5;
    sort(arr,n);
    cout<<"[";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<"]";
    return 0;
}
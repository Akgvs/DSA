#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter the values: ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
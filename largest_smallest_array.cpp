#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements to be entered: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]<=smallest){
            smallest=arr[i];
        }
    }
    cout<<"Largest no. is: "<<largest<<endl;
    cout<<"Smallest no. is: "<<smallest;
    return 0;
}
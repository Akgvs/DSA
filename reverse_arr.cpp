#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,4,6,3,8};
    int st=0,end=(sizeof(arr)/sizeof(int)-1);
    while(st<end){
        swap(arr[st],arr[end]);
        st++,end--;
    }
    cout<<"[";
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(i!=4){
        cout<<arr[i]<<",";
        }else{
            cout<<arr[i];
        }
    }
    cout<<"]";
    return 0;
}
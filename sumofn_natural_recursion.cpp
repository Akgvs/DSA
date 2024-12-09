#include<iostream>
using namespace std;


int sumOFn(int n){
    if(n==0){
        return 0;
    }
    return n+sumOFn(n-1);
}

int main(){
    int s=sumOFn(5);
    cout<<s;
    return 0;
}
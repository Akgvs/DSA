#include<iostream>
using namespace std;

int main(){
    int count=0,ldigit;
    int nums=7;
    while(nums>0){
        ldigit=nums & 1;
        count+=ldigit;
        nums=nums>>1;
    }
    cout<<count<<endl;
    return 0;
}
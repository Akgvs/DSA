#include<iostream>
using namespace std;

void last_i_bits_clear(int num, int i){
    for(int j=0;j<i;j++){
        num=(num & ~(1<<j));
    }
    cout<<num;
}

int main(){
    last_i_bits_clear(15,2);
    return 0;
}
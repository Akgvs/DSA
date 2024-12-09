#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int> v,int target,int i){
    if(i==v.size()){
        return -1;
    }
    if(v[i]==target){
        return i;
    }
    return firstoccurence(v,target,i+1);
}


int main(){
    vector<int> v={1,2,3,4,3,5};
    int target=3;
    cout<<firstoccurence(v,target,0);
    return 0;
}
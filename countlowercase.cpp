#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int count=0;
    cout<<"Enter the string: ";
    getline(cin,str);
    for (int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            count++;
        }
    }
    cout<<"The number of lowercase are: "<<count<<endl;
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[50];
    int palindrome=0,st=0;
    cout<<"Enter the word: ";
    cin>>ch;
    int end=strlen(ch)-1;
    while(st<=end){
        if(ch[st]==ch[end]){
            palindrome=1;
            st++,end--;
            continue;
        }
        if(ch[st]!=ch[end]){
            palindrome=0;
            break;
        }
    }
    if(palindrome==1){
        cout<<"Palindrome number";
    }else{
        cout<<"Not a Palindrome number";
    }
    return 0;
}
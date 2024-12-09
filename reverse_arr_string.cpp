#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[50];
    cout<<"Enter the word: ";
    cin.getline(ch,50);
    cout<<ch<<endl;
    int st=0;
    int end=strlen(ch)-1;
    while(st<end){
        swap(ch[st],ch[end]);
        st++;
        end--;
    }
    cout<<ch;
    return 0;
}
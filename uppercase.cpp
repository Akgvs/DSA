#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the word: ";
    char word[500];
    cin.getline(word,500);
    int n=500;
    for (int i=0;i<n;i++){
        if(word[i]>='a'&&word[i]<='z'){
            word[i]=(word[i]-'a')+'A';
        }
    }
    cout<<word;
    return 0;
}
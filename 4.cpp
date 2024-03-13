#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int p=n/2,q=n-1;
    char temp;
    while(p<q){
        temp=s[p];
        s[p]=s[q];
        s[q]=temp;
        p++;
        q--;
    }
    cout<<s;
}
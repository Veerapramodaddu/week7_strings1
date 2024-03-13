#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int p=0,q=n-1;
    bool flag=false;
    while(p<q){
        if (s[p]!=s[q]){
           flag=false;
           break;
        }
        else{
            flag=true;
            p++;
            q--;
        }
        
    }
    if(flag==true) cout<<"yes";
    else cout<<"No";
}

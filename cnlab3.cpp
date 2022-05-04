#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>hex>>a>>dec;
    char c[100];
    itoa(a,c,16);
    int i=0;
    int l;
    int acc=0;
    while(c[i]!='\0'){
        char s[100];
        s[0]=c[i]; s[1]='\0';
        acc+=stoi(s,nullptr,16);
        cout<<stoi(s,nullptr,16)<<" ";
        i++;
    }
    int tt=acc;
    acc=~acc;
    acc=acc%100;
    cout<<acc+tt+1<<endl;
}
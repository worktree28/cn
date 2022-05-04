#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>hex>>a>>dec;
    char c[100];
    itoa(a,c,16);
    //cout<<strlen(c)+1<<c;
    c[0]==strlen(c)+48?cout<<"yes":cout<<"no";
    return 0;
}

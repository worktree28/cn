#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>hex>>a>>dec;
    cout<<a<<endl;
    char res[100];
    itoa(a,res,2);
    int i=0;
    int count=0;
    while(res[i]!='\0'){
        //cout<<res[i];
        if(res[i]=='1'){
            count++;
        }
        else{
            count=0;
        }
        if(count==5){
            //cout<<0;
            int temp=res[i+1],temp1;
            res[i+1]='0';
            for(int j=i+1;res[j]!='\0';j++){
                temp1=res[j+1];
                res[j+1]=temp;
                temp=temp1;
            }
            count=0;
        }
        i++;
    }
    cout<<res<<endl;
    cout<<stoi(res,nullptr,2);
    return 0;
}
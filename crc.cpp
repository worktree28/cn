#include<bits/stdc++.h>
using namespace std;


string xor1(string a, string b)
{
     
    // Initialize result
    string result = "";
    int n = b.length();
    for(int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
            result += "0";
        else
            result += "1";
    }
    return result;
}
 
// Performs Modulo-2 division
string mod2div(string divident, string divisor)
{
     
    // Number of bits to be XORed at a time.
    int pick = divisor.length();
    // Slicing the divident to appropriate length for particular step
    string tmp = divident.substr(0, pick); 
    int n = divident.length(); 
    while (pick < n)
    {
        if (tmp[0] == '1')
            tmp = xor1(divisor, tmp) + divident[pick];
        else
            tmp = xor1(std::string(pick, '0'), tmp) +
                  divident[pick];           
        pick += 1;
    }
     
    // For the last n bits, we have to carry it out
    // normally as increased value of pick will cause
    // Index Out of Bounds.
    if (tmp[0] == '1')
        tmp = xor1(divisor, tmp);
    else
        tmp = xor1(std::string(pick, '0'), tmp);
         
    return tmp;
}
int main(){
    char c[100], c1[100];
    cout<<"Enter the number:";
    cin>>c;
    cout<<"generating poly";
    cin>>c1;
    int len=strlen(c);
    for(int i=len;i<len+strlen(c1)-1;i++){
        c[i]='0';
    }
    c[len+strlen(c1)-1]='\0';
    cout<<mod2div(c,c1);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
char ch;
cin>>ch;

if(ch>='A' && ch<='Z'){
    ch=tolower(ch); // convert 'ch' to lowercase
    cout<<ch<<endl;
    
}
else if(ch>='a' && ch<='z'){
    ch=toupper(ch); //convert 'ch' to uppercase
    cout<<ch<<endl;
}
    

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int A,B;
char S;
cin>>A>>S>>B;
if(S == '+'){
    cout<<A+B<<endl;
}else if(S == '-'){   
    cout<<A-B<<endl;
}else if(S == '*'){
    cout<<A*B<<endl;
}else if(S == '/'){
    cout<<A/B<<endl;
}
    
    return 0;
}
//(+,-,*,/) are arithmetic operators

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    char ch;
    cin>>ch;
    if (ch>='A' && ch<='Z') {   //two statement conditions using (&&) operator
        
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
        
    }else if(ch>='a' && ch<='z'){
        
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
      
    }else if(ch>='0' && ch<='9'){
       
      cout<<"IS DIGIT"<<endl;
    }
  
     return 0;
}

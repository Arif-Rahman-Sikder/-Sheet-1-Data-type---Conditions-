#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int A,B,C,temp;
    cin>>A>>B>>C;
    
    if (A>B){
        temp=A ;
        A=B ;
        B=temp;
        
    }if (A>C){
        
        temp=A ;
        A=C ;
        C=temp;
    }if (B>C){
        
        temp=B ;
        B=C ;
        C=temp;
    }
    cout<<A<<" "<<C<<endl;

    
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    int count=0;

    cin>>a>>b>>c;
    
    if(a>1) a=1;
    if(b>1) b=1;
    if(c>1) c=1;

    if((a&b)==c){
        cout<<"AND\n";
        count=1;
    }
    if((a|b)==c){
        cout<<"OR\n";
        count=1;
    }
    if((a^b)==c){
        cout<<"XOR\n";
        count=1;
    }
    if(count==0)
        cout<<"IMPOSSIBLE\n";
    return 0;
}
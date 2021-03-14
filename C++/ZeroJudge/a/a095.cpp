#include<iostream>
using namespace std;

int main(){
    int N, M;

    while(cin>>N>>M){
        if(N==M)
            cout<<N<<endl;
        else
            cout<<M+1<<endl;
    }
    return 0;
}
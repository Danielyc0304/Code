#include<iostream>
using namespace std;

int main(){
    int N, a;
    long int b, c;
    int i;

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>a>>b>>c;

        if(a==1)
            cout<<b+c<<endl;
        else if(a==2)
            cout<<b-c<<endl;
        else if(a==3)
            cout<<b*c<<endl;
        else
            cout<<b/c<<endl;
    }
    return 0;
}
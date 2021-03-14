#include<iostream>
using namespace std;

int main(){
    int people[46], a, b, c;
    int i;

    cin>>a>>b;

    for(i=1; i<=b; ++i){
        cin>>c;

        people[c]=1;
    }
    for(i=1; i<=a; ++i)
        if(people[i]==0)
            cout<<i<<' ';
    cout<<endl;

    return 0;
}
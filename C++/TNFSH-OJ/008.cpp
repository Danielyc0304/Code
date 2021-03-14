#include<iostream>
using namespace std;

int main(){
    string S;
    int N;
    int size;
    int i, j;

    while(cin>>N){
        cin.get();
        getline(cin, S);

        if(S.length()%N==0)
            size=S.length();
        else
            size=(S.length()/N+1)*N;
        for(i=0; i<N; ++i)
            for(j=i; j<size; j+=N)
                cout<<S[j];
        cout<<endl;
    }
    return 0;
}
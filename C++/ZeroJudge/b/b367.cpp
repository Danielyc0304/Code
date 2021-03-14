#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num[11][11], T, N, M;
    int tmp[11], c=0;
    int i, j, k;

    cin>>T;

    for(i=0; i<T; ++i){
        cin>>N>>M;

        for(j=0; j<N; ++j)
            for(k=0; k<M; ++k)
                cin>>num[j][k];
        for(j=0; j<N-j; ++j){
            for(k=0; k<M; ++k)
                tmp[k]=num[j][k];
            reverse(num[N-j-1], num[N-j-1]+M);

            for(k=0; k<M; ++k)
                if(tmp[k]!=num[N-j-1][k]){
                    c=1;

                    break;
                }
            if(c==1)
                break;
        }
        if(c==0)
            cout<<"go forward\n";
        else
            cout<<"keep defending\n";
        c=0;
    }
    return 0;
}
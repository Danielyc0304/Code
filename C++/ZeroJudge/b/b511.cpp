#include<iostream>
using namespace std;

int N;
int ans[6];

void combination(int face[], int money, int j){
    int i;

    if(money==0){
        cout<<'(';

        for(i=0; i<N-1; ++i)
            cout<<ans[i]<<',';
        cout<<ans[N-1]<<')'<<endl;

        return;
    }
    else if(j==N || money<0)
        return;
    for(i=0; i<=money/face[j]; ++i){
        ans[j]=i;

        combination(face, money-face[j]*i, j+1);
    }
}
int main(){
    int face[6], money;
    int i;

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>face[i];
    cin>>money;

    combination(face, money, 0);

    return 0;
}
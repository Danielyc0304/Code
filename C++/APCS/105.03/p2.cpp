#include<iostream>
using namespace std;

int num[11][11], R, C;
int tmp[11][11];

void spin(){
    int i, j;

    memcpy(tmp, num, sizeof(num));

    swap(R, C);

    for(i=0; i<R; ++i)
        for(j=0; j<C; ++j)
            num[i][j]=tmp[j][R-i-1];
}
void flip(){
    int i, j;

    memcpy(tmp, num, sizeof(num));

    for(i=0; i<R; ++i)
        for(j=0; j<C; ++j)
            num[i][j]=tmp[R-i-1][j];
}
int main(){
    int action[11], M;
    int i, j;

    cin>>R>>C>>M;

    for(i=0; i<R; ++i)
        for(j=0; j<C; ++j)
            cin>>num[i][j];
    for(i=0; i<M; ++i)
        cin>>action[i];
    for(i=M-1; i>=0; --i){
        if(action[i]==0)
            spin();
        else
            flip();
    }
    cout<<R<<' '<<C<<endl;
    for(i=0; i<R; ++i){
        for(j=0; j<C-1; ++j)
            cout<<num[i][j]<<' ';
        cout<<num[i][j]<<endl;
    }
    return 0;
}
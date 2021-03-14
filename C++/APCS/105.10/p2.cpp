#include<iostream>
using namespace std;

int main(){
    int num[21][21], N, M;
    int mnum[21], max=0;
    int ans2[21]={0}, ans1=0;
    int i, j;

    cin>>N>>M;

    for(i=0; i<N; ++i){
        for(j=0; j<M; ++j)
            cin>>num[i][j];
        for(j=0; j<M; ++j)
            if(num[i][j]>max)
                max=num[i][j];
        ans1+=max;

        mnum[i]=max;
        max=0;
    }
    cout<<ans1<<endl;

    j=0;

    for(i=0; i<N; ++i)
        if(ans1%mnum[i]==0){
            ans2[j]=mnum[i];
            ++j;
        }
    if(ans2[0]==0)
        cout<<-1<<endl;
    else{
        for(i=0; i<j-1; ++i)
            cout<<ans2[i]<<' ';
        cout<<ans2[i]<<endl;
    }
    return 0;
}
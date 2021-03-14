#include<iostream>
#include<algorithm>
#include<cstring>
#include<ctime>
using namespace std;

int num[31], n, m;
int c=0;
int ans[31];
int j=0, k, l=0;

void DFS(int sum, int i){
    if(sum>m || i==n){
        --j;

        return;
    }
    else if(sum==m){
        ans[j]=num[i];

        while(num[i]==num[i+l]){
            for(k=0; k<=j; ++k)
                cout<<ans[k]<<' ';
            cout<<endl;

            ++l;
        }
        --j;
        c=1, l=0;

        return;
    }
    ans[j]=num[i];
    ++j;

    DFS(sum+num[i+1], i+1);
    DFS(sum+num[i+1]-num[i], i+1);
}
int main(){
    int i;

    cin>>n>>m;

    for(i=0; i<n; ++i)
        cin>>num[i];
    sort(num, num+n);

    DFS(num[0], 0);

    if(c==0)
        cout<<-1<<endl;
    return 0;
}
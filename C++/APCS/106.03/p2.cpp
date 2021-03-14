#include<iostream>
#include<vector>
using namespace std;

vector<int> num;
int used[50001]={0};
int ans=0;
int i;

void group(int node){
    if(used[node]!=0){
        ++ans;

        return;
    }
    used[node]=1;

    group(num[node]);
}
int main(){
    int N, fri;

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>fri;
        num.push_back(fri);
    }
    for(i=0; i<N; ++i)
        if(used[i]==0)
            group(i);
    cout<<ans<<endl;

    return 0;
}
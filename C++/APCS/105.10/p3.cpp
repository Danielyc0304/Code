#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num;
    int N, M, K;
    int eli=0;
    int i, j;

    cin>>N>>M>>K;

    for(i=1; i<=N; ++i)
        num.push_back(i);
    for(i=0; i<K; ++i){
        eli=(eli+M-1)%num.size();

        num.erase(num.begin()+eli);
    }
    if(num.size()==1 || eli==num.size())
        cout<<num[0];
    else
        cout<<num[eli];
    return 0;
}
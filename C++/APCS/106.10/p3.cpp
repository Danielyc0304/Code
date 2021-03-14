#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> tree;

int DFS(int node){
    int hei=0;
    int i;

    if(tree[node].size()==0)
        return 0;
    for(i=0; i<tree[node].size(); ++i)
        hei=max(hei, DFS(tree[node][i])+1);
    return hei;
}
int main(){
    vector<int> tmp;
    int n, k, num;
    int child[100001]={0};
    int ans=0;
    int i, j;

    cin>>n;
    tree.push_back(tmp);

    for(i=0; i<n; ++i){
        cin>>k;

        for(j=0; j<k; ++j){
            cin>>num;

            child[num]=1;

            tmp.push_back(num);
        }
        tree.push_back(tmp);
        tmp.clear();
    }
    for(i=1; i<=n; ++i){
        ans+=DFS(i);

        if(child[i]==0)
            cout<<i<<endl;
    }
    cout<<ans<<endl;

    return 0;
}
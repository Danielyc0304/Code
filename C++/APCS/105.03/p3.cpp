#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<pair<int, int>> num;
    int N, a, b;
    int ans=0;
    int i;

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>a>>b;
        num.push_back(make_pair(a, b));
    }
    sort(num.begin(), num.end());

    i=0;
    ans+=num[i].second-num[i].first;
    for(++i; i<num.size(); ++i){
        if(num[i].second<=num[i-1].second){
            num[i].first=num[i-1].first;
            num[i].second=num[i-1].second;
        }
        else if(num[i].first<num[i-1].second)
            ans+=num[i].second-num[i-1].second;
        else
            ans+=num[i].second-num[i].first;
    }
    cout<<ans<<endl;

    return 0; 
}
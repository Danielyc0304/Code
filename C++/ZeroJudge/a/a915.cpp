#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<pair<int, int>> num;
    int n, x, y;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>x>>y;
        num.push_back(make_pair(x, y));
    }
    sort(num.begin(), num.end());
    
    for(i=0; i<num.size(); ++i)
        cout<<num[i].first<<' '<<num[i].second<<endl;
    return 0;
}
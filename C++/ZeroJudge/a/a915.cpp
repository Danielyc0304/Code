#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){//二维点排序
    vector<pair<int, int>> num;//num座標
    int n, x, y;//n座標總數; x, y座標
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>x>>y;
        num.push_back(make_pair(x, y));
    }
    sort(num.begin(), num.end());//排序
    
    for(i=0; i<num.size(); ++i)
        cout<<num[i].first<<' '<<num[i].second<<endl;//輸出結果
    return 0;
}
/*
Input:
4
2 4
1 2
3 4
2 3
Output:
1 2
2 3
2 4
3 4
*/
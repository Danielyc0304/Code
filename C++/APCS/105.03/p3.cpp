#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<pair<int, int>> num;//num線段範圍
    int N, a, b;//N線段總數; a線段起始點; b線段結束點
    int ans=0;//ans答案
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>a>>b;
        num.push_back(make_pair(a, b));
    }
    sort(num.begin(), num.end());//排序線段範圍，從小的起點開始

    i=0;//初始化
    ans+=num[i].second-num[i].first;//計算第一條線段長度
    for(++i; i<num.size(); ++i){
        if(num[i].second<num[i-1].second)//如果上一條線段的結束點在此條線段的結束點後面
            num[i].second=num[i-1].second;//此條線段的結束點改為上一條線段的結束點
        else if(num[i].first<num[i-1].second)//如果上一條線段的結束點在此條線段的起始點後面
            ans+=num[i].second-num[i-1].second;//計算上一條線段的結束點到此條線段的結束點的距離
        else//如果線段不重疊
            ans+=num[i].second-num[i].first;//直接計算線段長度
    }
    cout<<ans<<endl;//輸出線段覆蓋的長度

    return 0; 
}
/*
Input:
5
160 180
150 200
280 300
300 330
190 210
Output:
110
*//*
Input:
1
120 120
Output:
0
*/
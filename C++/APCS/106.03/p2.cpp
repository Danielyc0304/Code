#include<iostream>
#include<vector>
using namespace std;

vector<int> num;//num好友編號
int use[50000]={0};//use已經被處理過的人
int ans=0;//ans答案

void group(int node){//尋找團體; node節點
    if(use[node]!=0){//如果已經找到完整的團體
        ++ans;

        return;
    }
    use[node]=1;

    group(num[node]);//尋找該位的好友
}
int main(){
    int N, fri;//N人數; fri朋友
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>fri;
        num.push_back(fri);
    }
    for(i=0; i<N; ++i)
        if(use[i]==0)//如果還沒被處理
            group(i);
    cout<<ans<<endl;//輸出團體個數

    return 0;
}
/*
Input:
10
4 7 2 9 6 0 8 1 5 3
Output:
4
*//*
Input:
3
0 2 1
Output:
2
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){//定時K彈
    vector<int> num;//num數字
    int N, M, K;//N人數; M淘汰間隔; K淘汰人數
    int eli=0;//eli被淘汰的人
    int i;//i旗標

    cin>>N>>M>>K;

    for(i=1; i<=N; ++i)
        num.push_back(i);//輸入數字
    for(i=0; i<K; ++i){
        eli=(eli+M-1)%num.size();//計算下一個淘汰的人

        num.erase(num.begin()+eli);//淘汰
    }
    if(num.size()==1 || eli==num.size())//如果剩一位或被淘汰的下一位沒有人
        cout<<num[0];
    else
        cout<<num[eli];
    return 0;
}
/*
Input:
5 2 4
Output:
3
*//*
Input:
8 3 6
Output:
4
*/
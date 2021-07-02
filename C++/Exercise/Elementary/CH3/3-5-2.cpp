#include<iostream>
#include<vector>
using namespace std;

int main(){//定時K彈(10510第3題)
    vector<int> num;
    int N, M, K;//N人數; M淘汰間隔; K淘汰人數
    int eli=0;//eli被淘汰的人
    int i;//i旗標

    while(cin>>N>>M>>K){
        for(i=1; i<=N; ++i)
            num.push_back(i);
        for(i=0; i<K; ++i){
            eli=(eli+M-1)%num.size();//計算下一個淘汰的人

            num.erase(num.begin()+eli);//淘汰
        }
        eli%=num.size();

        cout<<num[eli]<<endl;//輸出下一個人

        num.clear();
        eli=0;//初始化
    }
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
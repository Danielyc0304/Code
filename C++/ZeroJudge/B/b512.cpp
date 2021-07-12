#include<iostream>
#include<map>
using namespace std;

int main(){//高維度稀疏向量
    int tmp1, tmp2;//tmp1, tmp2暫存值
    map<int, int> num;//num數字
    int ans=0;//ans答案

    while(scanf("%d:%d", &tmp1, &tmp2)!=EOF){//輸入第一個向量
        if(tmp1==0)//如果輸入到0:0，停止運行
            break;
        num[tmp1]=tmp2;
    }
    while(scanf("%d:%d", &tmp1, &tmp2)!=EOF){//輸入第二個向量
        if(tmp1==0)//如果輸入到0:0，停止運行
            break;
        auto it=num.find(tmp1);

        if(it!=num.end())//如果有找到相同位置的數字
            ans+=tmp2*it->second;
    }
    cout<<ans<<endl;//輸出數字

    return 0;
}
/*
Input:
1:5 1000:55 1000000:555 0:0 
10:6 10000:66 100000:666 1000000:2 0:0
Output:
1110
*/
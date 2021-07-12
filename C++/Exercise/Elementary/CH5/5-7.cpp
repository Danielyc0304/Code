#include<iostream>
using namespace std;

int ans2[8], ans1=1;//ans1, ans2答案

void location(int i){//排列組合; i旗標
    int j, k;//j, k旗標

    if(i<8){
        for(j=0; j<8; ++j)//現在預設位置(第i列第j行)
            for(k=0; k<i; ++k){//檢查到第k列的棋子
                if(j==ans2[k])//如果在同一行
                    break;
                if(abs(j-ans2[k])==i-k)//如果在對角線(垂直距離與水平距離相等)
                    break;
                if(k==i-1){//如果都檢查完了
                    ans2[i]=j;

                    location(i+1);
                }
            }
    }
    else{
        cout<<ans1<<"  ";
        for(j=0; j<8; ++j)
            cout<<ans2[j]+1<<' ';
        cout<<endl;//輸出排列組合

        ++ans1;
    }
}
int main(){//8-queen問題
    int i;//i旗標

    for(i=0; i<8; ++i){
        ans2[0]=i;

        location(1);//排列組合，從第2列開始找
    }
    cout<<endl;

    return 0;
}
/*
Output(全部共有92個解，輸出後面12個):
81  7 1 3 8 6 4 2 5
82  7 2 4 1 8 5 3 6
83  7 2 6 3 1 4 8 5
84  7 3 1 6 8 5 2 4
85  7 3 8 2 5 1 6 4
86  7 4 2 5 8 1 3 6
87  7 4 2 8 6 1 3 5
88  7 5 3 1 6 8 2 4 
89  8 2 4 1 7 5 3 6
90  8 2 5 3 1 7 4 6
91  8 3 1 6 2 5 7 4
92  8 4 1 3 6 2 7 5
*/
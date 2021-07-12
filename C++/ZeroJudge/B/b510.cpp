#include<iostream>
#include<cstring>
using namespace std;

int M, N;//M皇后個數; N城堡個數
int che[10];//che棋盤
int ans=0;//ans答案

void location(int queen, int castle, int i){//排列組合; queen皇后; castle城堡; i旗標
    bool c=false;//c判斷
    int j, k, l;//j, k, l旗標

    if(i<M+N)
        for(j=1; j<=M+N; ++j)//現在預設位置(第i列第j行)
            for(k=0; k<i; ++k){//檢查到第k列的棋子
                if(j==abs(che[k]))//如果在同一行
                    break;
                if(che[k]>0)//如果是皇后
                    if(abs(j-che[k])==i-k)//如果在對角線(垂直距離與水平距離相等)
                        break;
                if(k==i-1){//如果都檢查完了
                    if(queen>0){//如果下一顆棋子是皇后
                        for(l=0; l<i; ++l)
                            if(che[l]<0)//如果檢查到的棋子是城堡
                                if(abs(j+che[l])==i-l){//檢查是不是在下一顆棋子的對角線
                                    c=true;

                                    break;
                                }
                        if(c==false){
                            che[i]=j;

                            location(queen-1, castle, i+1);
                        }
                        c=false;//初始化
                    }
                    if(castle>0){
                        che[i]=-j;

                        location(queen, castle-1, i+1);
                    }
                }
            }
    else
        ++ans;
}
int main(){//M皇后N城堡
    int i;//i旗標

    cin>>M>>N;
    
    for(i=1; i<=M+N; ++i){
        if(M>0)
            che[0]=i, location(M-1, N, 1);
        if(N>0)
            che[0]=-i, location(M, N-1, 1);
    }
    cout<<ans<<endl;//輸出可能的排列組合總數

    return 0;
}
/*
Input:
3 1
Output:
8
*/
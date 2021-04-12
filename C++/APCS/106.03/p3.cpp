#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> num;//num數字
    vector<int> tmp;//tmp暫存值
    int N, act, a;//N邊長; act動作; a數字
    int dir[5][2]={{0, -1}, {-1, 0}, {0, 1}, {1, 0}, {0, -1}};//dir方向，第1項與第5項重複是為了判斷
    int i, j;//i, j旗標

    cin>>N>>act;

    for(i=0; i<N; ++i){
        for(j=0; j<N; ++j){
            cin>>a;
            tmp.push_back(a);
        }
        num.push_back(tmp);
        tmp.clear();
    }
    i=N/2, j=N/2;//從陣列中間正中間開始
    while(1){
        cout<<num[i][j];//輸出數字

        num[i][j]=-1;//輸出過的數字更改為-1
        i+=dir[act][0], j+=dir[act][1];

        if(i==-1 || i==N || j==-1 || j==N)//如果處理完所有資料
            break;
        if(num[i+dir[act+1][0]][j+dir[act+1][1]]!=-1){//如果下個方向的資料尚未處理
            ++act;//轉換方向

            if(act==4)//如果四種方向都走過
                act=0;
        }
    }
    cout<<endl;//輸出換行
    
    return 0;
}
/*
Input:
5
0
3 4 2 1 4
4 2 3 8 9
2 1 9 5 6
4 2 3 7 8
1 2 6 4 3
Output:
9123857324243421496834621
*//*
Input:
3
1
4 1 2
3 0 5
6 7 8
Output:
012587634
*/
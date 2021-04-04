#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[503][503];//a圖案
    int n, m, x, y;//n圖案邊長; m座標總數; x, y座標
    int tmpx=0, tmpy=0;//tmpx, tmpy座標暫存值
    int i, j, k;//i, j, k旗標
    
    memset(a, ' ', sizeof(a));//初始化a為空格

    while(cin>>n>>m){
        for(i=0; i<=n+1; ++i){
            a[0][i]='-';
            a[n+1][i]='-';

            if(i>0 && i<n+1){
                a[i][0]='|';
                a[i][n+1]='|';
            }//定出範圍
        }
        for(i=0; i<m; ++i){
            cin>>x>>y;

            if(x==tmpx){//如果x座標一樣
                if(y>tmpy)//如果y座標比暫存值大
                    for(j=tmpy; j<=y; ++j)//從tmpy開始畫
                        a[x][j]='*';
                else//如果y座標比暫存值小
                    for(j=y; j<=tmpy; ++j)//從y開始畫
                        a[x][j]='*';
            }
            else{//如果y座標一樣
                if(x>tmpx)//如果x座標比暫存值大
                    for(j=tmpx; j<=x; ++j)//從tmpx開始畫
                        a[j][y]='*';
                else//如果x座標比暫存值小
                    for(j=x; j<=tmpx; ++j)//從x開始畫
                        a[j][y]='*';
            }
            tmpx=x;
            tmpy=y;//把座標存到暫存值
        }
        for(i=0; i<=n+1; ++i){
            for(j=0; j<=n+1; ++j)
                cout<<a[i][j];
            cout<<endl;//輸出結果
        }
        memset(a, ' ', sizeof(a));
        tmpx=0, tmpy=0;//初始化
    }
    return 0;
}
/*
Input:
4 5
1 1
1 4
4 4
4 1
1 1
4 5
1 1
1 4
4 4
4 1
1 1
Output:
------
|****|
|*  *|
|*  *|
|****|
------
------
|****|
|*  *|
|*  *|
|****|
------
*/
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main(){
    int T, N, M;//T測資總數; N大小; M方向
    int num[100][100]={0}, dir[4][2]={{0, 1}, {1, 0}, {0, -1}, {-1, 0}}, s=1;//num數字; dir方向; s計算值
    int i, j=0, k=0, l;//i, j, k, l旗標

    cin>>T;

    for(i=0; i<T; ++i){
        cin>>N>>M;

        if(M==1){//順時針方向
            l=0;

            while(1){
                num[j][k]=s;
                ++s;

                if(num[j+dir[l][0]][k+dir[l][1]]!=0 || j+dir[l][0]==-1 || j+dir[l][0]==N || k+dir[l][1]==-1 || k+dir[l][1]==N){
                    ++l;

                    if(l==4)
                        l=0;
                    if(num[j+dir[l][0]][k+dir[l][1]]!=0)
                        break;
                }
                j+=dir[l][0], k+=dir[l][1];
            }
        }
        else{//逆時針方向
            l=3;

            while(1){
                num[j][k]=s;
                ++s;

                if(num[j-dir[l][0]][k-dir[l][1]]!=0 || j-dir[l][0]==-1 || j-dir[l][0]==N || k-dir[l][1]==-1 || k-dir[l][1]==N){
                    --l;

                    if(l==-1)
                        l=3;
                    if(num[j-dir[l][0]][k-dir[l][1]]!=0)
                        break;
                }
                j-=dir[l][0], k-=dir[l][1];
            }
        }
        for(j=0; j<N; ++j){
            for(k=0; k<N; ++k)
                cout<<setw(5)<<num[j][k];
            cout<<endl;//輸出結果
        }
        memset(num, 0, sizeof(num));
        s=1, j=0, k=0;//初始化
    }
    return 0;
}
/*
Input:
2
3 1
2 2
Output:
    1    2    3
    8    9    4
    7    6    5

    1    4
    2    3
*/
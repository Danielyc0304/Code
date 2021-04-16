#include<iostream>
#include<cstring>
using namespace std;

#define Size 101

int main(){
    bool a[Size]={0};//a是否被淘汰
    int n, p;//n人數; p淘汰間隔
    int eli=0, c=0;//eli淘汰人數; c計數
    int i=2, j;//i, j旗標

    while(cin>>n>>p){
        while(eli<n-1){//當未被淘汰的人大於一人時，持續執行
            while(c<p){//當未達淘汰間隔時，持續執行
                if(a[i]==0){//如果第i個人未被淘汰
                    ++c;

                    if(i<n)//如果未到最後一個人
                        ++i;
                    else//已到最後一個人
                        i=1;
                }
                else{//如果第i個人被淘汰了
                    if(i<n)//如果未到最後一個人
                        ++i;
                    else//已到最後一個人
                        i=1;
                }
            }
            while(a[i]==1){//達到淘汰間隔時，尋找下一個未被淘汰的人
                if(i<n)//如果未到最後一個人
                    ++i;
                else//已到最後一個人
                    i=1;
            }
            a[i]=1;//淘汰
            ++eli;//淘汰人數+1

            c=0;//初始化
        }
        for(j=1; j<=n; ++j)
            if(a[j]==0){
                cout<<j<<endl;//輸出最後一個人

                break;
            }
        memset(a, 0, sizeof(a));
        eli=0; i=2;//初始化
    }
    return 0;
}
/*
Input:
11 3
Output:
10
*/
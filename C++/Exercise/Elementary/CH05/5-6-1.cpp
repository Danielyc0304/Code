#include<iostream>
#include<algorithm>
using namespace std;

int num[100], n;//num數字; n數字總數
int ans[100];//ans答案

void Sort(int i){//排列組合; i旗標
    bool c=true;//c判斷
    int j, k;//j, k旗標

    if(i==n){//如果到總數
        for(j=0; j<n; ++j)
            cout<<num[ans[j]]<<' ';
        cout<<endl;//輸出排列組合
    }
    for(j=0; j<n; ++j){
        for(k=0; k<i; ++k)
            if(ans[k]==j){//如果有重複
                c=false;

                break;
            }
        if(c){//如果可行
            ans[i]=j;

            Sort(i+1);
        }
        c=true;//初始化
    }        
}
int main(){//排列
    int i;//i旗標
    
    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        sort(num, num+n);//排序

        Sort(0);//排列組合
    }
    return 0;
}
/*
Input:
3 5 4 6
Output:
4 5 6
4 6 5
5 4 6
5 6 4
6 4 5
6 5 4
*/
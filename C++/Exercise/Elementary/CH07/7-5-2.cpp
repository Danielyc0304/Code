#include<iostream>
#include<cstring>
using namespace std;

string a, b;//a, b字串
int map[101][101];//map遍歷路線
string ans2;//ans2答案

void traverse(int i, int j){//遍歷路徑; i, j旗標
    if(i==0 || j==0)
        return;
    if(map[i][j]==1){
        ans2+=a[i-1];

        traverse(i-1, j-1);
    }
    else if(map[i][j]==2)
        traverse(i, j-1);
    else
        traverse(i-1, j);
}
int main(){//最長共同子序列—考慮最佳解路徑
    int ans1[101][101]={0};//ans1答案
    int i, j;//i, j旗標
    
    while(getline(cin, a) && getline(cin, b)){
        for(i=0; i<a.length(); ++i)
            for(j=0; j<b.length(); ++j){
                if(a[i]==b[j]){//如果相同
                    ans1[i+1][j+1]=ans1[i][j]+1;//當遍歷到a[i], b[j]相等的時候，相同的長度一定比a[i-1], b[j-1]多1
                    map[i+1][j+1]=1;
                }
                else{//如果不相同，尋找上一時刻的最大長度
                    if(ans1[i+1][j]>ans1[i][j+1]){
                        ans1[i+1][j+1]=ans1[i+1][j];
                        map[i+1][j+1]=2;
                    }
                    else{
                        ans1[i+1][j+1]=ans1[i][j+1];
                        map[i+1][j+1]=3;
                    }
                }
            }
        cout<<ans1[a.length()][b.length()]<<endl;//輸出最長共同子序列

        traverse(a.length(), b.length());

        for(i=ans2.length()-1; i>=0; --i)
            cout<<ans2[i];
        cout<<endl;//輸出共同子序列

        memset(ans1, 0, sizeof(ans1));
        ans2.clear();//初始化
    }
    return 0;
}
/*
Input:
comp
zope
Output:
2
op
*/
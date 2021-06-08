#include<iostream>
#include<cstring>
using namespace std;

int main(){//最長共同子序列—不考慮最佳解路徑
    string a, b;//a, b字串
    int ans[101][101];//ans答案
    int i, j;//i, j旗標

    memset(ans, 0, sizeof(ans));//初始化c為0

    while(getline(cin, a) && getline(cin, b)){
        for(i=0; i<a.length(); ++i)
            for(j=0; j<b.length(); ++j){
                if(a[i]==b[j])//如果相同
                    ans[i+1][j+1]=ans[i][j]+1;//當遍歷到a[i], b[j]相等的時候，相同的長度一定比a[i-1], b[j-1]多1
                else//如果不相同
                    ans[i+1][j+1]=max(ans[i+1][j], ans[i][j+1]);//尋找上一時刻的最大長度
            }
        cout<<ans[a.length()][b.length()]<<endl;//輸出最長共同子序列

        memset(ans, 0, sizeof(ans));//初始化
    }
    return 0;
}
/*
Input:
comp
zope
Output:
2
*/
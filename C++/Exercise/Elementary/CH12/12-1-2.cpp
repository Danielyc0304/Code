#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<cstring>
using namespace std;

vector<string> ans;//ans答案

int num_conversion(string a){//轉換成數字; a字串
    auto it=find(ans.begin(), ans.end(), a);//宣告vector<string>的迭代器
    
    if(it<ans.end())//如果有找到a
        return it-ans.begin();
    ans.push_back(a);//建立新資料

    return ans.size()-1;
}
int main(){//選課順序
    string a, b;//a, b課程，a先b後，建立有向圖
    int n, m;//n課程總數; m順序總數
    deque<int> edg[50];//edg邊
    int c1[50]={0}, c2=0;//c1, c2計數
    int i, j;//i, j旗標

    while(cin>>n>>m){
        for(i=0; i<m; ++i){
            cin>>a>>b;
            edg[num_conversion(a)].push_back(num_conversion(b));//建立有向圖
            ++c1[num_conversion(b)];//連到b點的邊總數+1
        }
        for(i=0; i<n; ++i){
            if(c1[i]==0){//如果沒有邊連到i點
                cout<<ans[i]<<endl;//輸出課程排列

                ++c2;
                for(j=0; j<edg[i].size(); ++j)//刪除從i點連出的邊
                    --c1[edg[i][j]];
            }
            if(c2==n)//如果所有點都已找到
                break;
            else if(i==n-1)//如果已經遍歷完，但未找到所有點
                i=0;
        }
        ans.clear();
        for(i=0; i<n; ++i)
            edg[i].clear();
        memset(c1, 0, sizeof(c1));
        c2=0;//初始化
    }
    return 0;
}
/*
Input:
5 5
IntroductionToComputerScience Compiler
IntroductionToComputerScience Programming
Programming Database
Programming Compiler
Programming DataStructure
Output:
IntroductionToComputerScience
Programming
Database
DataStructure
Compiler
*/
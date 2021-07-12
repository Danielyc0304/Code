#include<iostream>
using namespace std;

int N;//N數字
char ans[27];//ans答案

void DFS(int left, int right, int i){//深度優先搜尋; left左括號; right右括號; i旗標
    if(left>N || left<right)//如果左括號大於數字或小於右括號
        return;
    if(i==2*N){//如果執行結束
        ans[i]='\0';//加上結束字符
        printf("%s\n", ans);

        return;
    }
    ans[i]='(', DFS(left+1, right, i+1);//加上左括號
    ans[i]=')', DFS(left, right+1, i+1);//加上右括號
}
int main(){//括號匹配問題
    while(scanf("%d", &N)!=EOF)
        DFS(0, 0, 0);//輸出結果
    return 0;
}
/*
Input:
1
2
3
4
Output:
()
 
(())
()()
 
((()))
(()())
(())()
()(())
()()()

(((())))
((()()))
((())())
((()))()
(()(()))
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()
*/
#include<iostream>
using namespace std;

int N;
char ans[27];

void DFS(int left, int right, int i){
    if(left>N || left<right)
        return;
    else if(i==2*N){
        ans[i]='\0';
        printf("%s\n", ans);

        return;
    }
    ans[i]='(', DFS(left+1, right, i+1);
    ans[i]=')', DFS(left, right+1, i+1);
}
int main(){
    while(scanf("%d", &N)!=-1)
        DFS(0, 0, 0);
    return 0;
}
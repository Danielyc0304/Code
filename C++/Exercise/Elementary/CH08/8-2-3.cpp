#include<iostream>
#include<stack>
using namespace std;

int main(){//括弧的配對
    string a;//a字串
    stack<char> bra;//bra括號
    int ans=0;//ans答案
    int i;//i旗標

    while(getline(cin, a)){
        for(i=0; i<a.length(); ++i){
            if(a[i]=='{')//如果是{
                bra.push('{');
            else{//如果是}
                if(bra.size()>0){//如果裡面還有{
                    bra.pop();//取出

                    ++ans;
                }
                else{//如果沒有{
                    ans=-1;//無法配對

                    break;
                }
            }
        }
        if(ans>=0)
            cout<<"共有"<<ans<<"對的大括號\n";
        else
            cout<<"配對失敗\n";//輸出結果
        while(!bra.empty())
            bra.pop();
        ans=0;
    }
    return 0;
}
/*
Input:
{{{}{}}{{}}}
Output:
共有6對的大括號
*/
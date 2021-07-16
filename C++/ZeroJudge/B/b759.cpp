#include<iostream>
using namespace std;

int main(){//我明明就有說過= =
    string a;//a字串
    bool c=false;//c判斷
    int i, j;//i, j旗標

    cin>>a;

    for(i=0; i<a.length(); ++i){
        for(j=i; j!=i || c==false; ++j){//以i為起點完全輸出一次，c==false避免第一次直接不執行
            cout<<a[j];

            if(j==a.length()-1)
                j=-1;
            c=true;
        }
        cout<<endl;//輸出結果

        c=false;
    }
    return 0;
}
/*
Input:
xndrf
Output:
xndrf
ndrfx
drfxn
rfxnd
fxndr
*/
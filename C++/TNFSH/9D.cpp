#include<iostream>
using namespace std;

int main(){
    int r, m, n;//r路長, m樹木間距, n路燈間距
    int i, j;//i, j旗標

    cin>>r>>m>>n;

    if(r/m==0){
        cout<<"Bumbler government is not a necessary evil. It is just evil.";

        return 0;
    }
    cout<<'S';

    for(i=0; i<r/m/(n+1); ++i){//排得滿樹木+路燈
        for(j=0; j<n; ++j)
            cout<<'T';
        cout<<'X';
    }
    if((r/m)%(n+1)!=0)//如果排不滿樹木+路燈
        for(i=0; i<(r/m)%(n+1); ++i)
            cout<<'T';//輸出結果
    return 0;
}
/*
Input:
37 3 2
Output:
STTXTTXTTXTTX
*//*
Input:
43 5 3
Output:
STTTXTTTX
*//*
Input:
10 20 3
Output:
Bumbler government is not a necessary evil. It is just evil.
*/
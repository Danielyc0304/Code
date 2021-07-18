#include<iostream>
using namespace std;

int main(){
    int n, x, y;//n測資總數; x, y座標
    int i;//i旗標

    cin>>n;
    for(i=0; i<n; ++i){
        cin>>x>>y;

        if(100-(x+y)>0 && 100-(x+y)<=30)//100-sqrt(x+y)*sqrt(x+y)
            cout<<"sad!\n";
        else if(100-(x+y)>30 && 100-(x+y)<=60)
            cout<<"hmm~~\n";
        else if(100-(x+y)>60 && 100-(x+y)<100)
            cout<<"Happyyummy\n";
        else
            cout<<"evil!!\n";//輸出結果
    }
    return 0;
}
/*
Input:
1
20 20
Output:
hmm~~
*/
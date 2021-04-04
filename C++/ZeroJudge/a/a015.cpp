#include<iostream>
using namespace std;

int main(){
    int num[99][99], a, b;//num數字; a列; b行
    int i, j;//i, j旗標

    while(cin>>a>>b){
        for(i=0; i<a; ++i)
            for(j=0; j<b; ++j)
                cin>>num[i][j];
        for(j=0; j<b; ++j){
            for(i=0; i<a; ++i)
                cout<<num[i][j]<<' ';
            cout<<endl;//輸出翻轉陣列
        }
    }
    return 0;
}
/*
Input:
2 3
3 1 2
8 5 4
Output:
3 8
1 5
2 4
*/
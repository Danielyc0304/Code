#include<iostream>
using namespace std;

int main(){
    int N, M;//N犯人; M紅帽

    while(cin>>N>>M){
        if(N==M)
            cout<<N<<endl;
        else
            cout<<M+1<<endl;//輸出結果
    }
    return 0;
}
/*
Input:
10 1
10 2
Output:
2
3
*/
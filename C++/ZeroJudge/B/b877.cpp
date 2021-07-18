#include<iostream>
using namespace std;

int main(){//我是電視迷
    int a, b;//a現在頻道; b目標頻道

    cin>>a>>b;
    cout<<(b+100-a)%100<<endl;//輸出結果
    
    return 0;
}
/*
Input:
5 10
Output:
5
*/
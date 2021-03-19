#include<iostream>
using namespace std;

int main(){
    int x, y;//x起始數字, y結束數字
    long int ans=0;//ans答案

    cin>>x>>y;

    if(x>y)
        swap(x, y);
    for(; x<=y; ++x)
        ans+=x;
    cout<<ans<<endl;//輸出累加

    return 0;
}
/*
Input:
2
4
Output:
9
*//*
Input:
4
3
Output:
7
*//*
Input:
9
9
Output:
9
*/
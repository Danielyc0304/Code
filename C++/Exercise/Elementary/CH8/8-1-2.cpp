#include<iostream>
#include<queue>
using namespace std;

int main(){//Queue使用STL實作
    queue<int> a;//a數字
    int i;//i旗標

    for(i=1; i<=4; ++i)
        a.push(i);
    while(!a.empty()){
        cout<<a.front()<<' ';//輸出第一項

        a.pop();//刪除第一項
    }
    return 0;
}
/*
Output:
1 2 3 4
*/
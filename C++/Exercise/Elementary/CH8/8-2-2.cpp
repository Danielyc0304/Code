#include<iostream>
#include<stack>
using namespace std;

int main(){//Stack使用STL實作
    stack<int> a;//a數字
    int i;//i旗標

    for(i=1; i<=4; ++i)
        a.push(i);//輸入
    while(!a.empty()){
        cout<<a.top()<<' ';//輸出結果

        a.pop();
    }
    cout<<endl;

    return 0;
}
/*
Output:
4 3 2 1
*/
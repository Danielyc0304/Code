#include<iostream>
#include<sstream>
using namespace std;

int main(){//二進位制轉換
    int a;//a數字
    stringstream ss;//ss字串串流
    string num;//num數字
    string ans;//ans答案

    while(cin>>a){
        while(a!=0){
            ss<<a%2;
            ss>>num;
            ss.clear();

            ans.insert(0, num);

            a/=2;
        }
        cout<<ans<<endl;//輸出二進制數字

        ans.clear();//初始化
    }
    return 0;
}
/*
Input:
3
Output:
11
*//*
Input:
6
Output:
110
*/
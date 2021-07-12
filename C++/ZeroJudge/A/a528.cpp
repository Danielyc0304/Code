#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp1(string a, string b){//負數排序規則; a, b字串
    int i;//i旗標

    if(a.length()==b.length())//如果位數相同
        for(i=0; i<a.length(); ++i)
            if(a[i]!=b[i])
                return a[i]>b[i];//數字大的在前面
    return a.length()>b.length();//長度長的在前面
}
bool cmp2(string a, string b){//正數排序規則; a, b字串
    int i;//i旗標

    if(a.length()==b.length())
        for(i=0; i<a.length(); ++i)
            if(a[i]!=b[i])
                return a[i]<b[i];//數字小的在前面
    return a.length()<b.length();//長度短的在前面
}
int main(){//大數排序
    vector<string> num1, num2;//num1負數; num2正數
    string tmp;//tmp數字
    int N;//N數字總數
    int i;//i旗標

    while(cin>>N){
        cin.get();

        for(i=0; i<N; ++i){
            getline(cin, tmp);

            if(tmp[0]=='-')//如果是負數
                num1.push_back(tmp);
            else//如果是正數
                num2.push_back(tmp);
        }
        sort(num1.begin(), num1.end(), cmp1);
        sort(num2.begin(), num2.end(), cmp2);

        for(i=0; i<num1.size(); ++i)
            cout<<num1[i]<<endl;
        for(i=0; i<num2.size(); ++i)
            cout<<num2[i]<<endl;//輸出排序結果
        num1.clear(), num2.clear();//初始化
    }
    return 0;
}
/*
Input:
5
1
3
2
5
0
4
222222222222222222222222222
111111111111111
-44444444444444444444444444444444444444444444444444444
33333333333333333333333333333333333333333333
Output:
0
1 
2 
3 
5
-44444444444444444444444444444444444444444444444444444
111111111111111
222222222222222222222222222
33333333333333333333333333333333333333333333
*/
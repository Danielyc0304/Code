#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){//排序規則; a, b數字
    return a<b;//數字小的在前面
}
int main(){//工作排程 3 最小平均等待時間
    int x[99], n;//x工作時間; n工作總數
    int s1=0;//s1計算值
    double s2=0;//s2計算值
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>x[i];
        sort(x, x+n, cmp);//排序

        for(i=0; i<n-1; ++i){//貪婪演算法，工作時間短的排在前面
            s1+=x[i];
            s2+=s1;//第i個工作有n-i次等待-->加n-i次
        }
        cout<<s2/n<<endl;//輸出平均等待時間

        s1=0, s2=0;//初始化
    }
    return 0;
}
/*
Input:
5
10
4
6
5
9
Output:
10.4
*/
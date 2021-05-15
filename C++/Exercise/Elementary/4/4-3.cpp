#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){//排序規則; a, b數字
    return a<b;//數字小的在前面
}
int main(){//工作排程3 最小平均等待時間
    int x[99], n;//x工作時間; n工作總數
    int s=0;
    double ans=0;
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>x[i];
        sort(x, x+n, cmp);

        for(i=0; i<n-1; ++i){
            s+=x[i];
            ans+=s;
        }
    }
    return 0;
}
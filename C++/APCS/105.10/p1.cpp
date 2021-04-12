#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[3];//a三角形三邊長
    int i;//i旗標

    for(i=0; i<3; ++i)
        cin>>a[i];
    sort(a, a+3);//排序

    for(i=0; i<2; ++i)
        cout<<a[i]<<' ';
    cout<<a[2]<<endl;//輸出排序後的三邊長

    if(a[0]+a[1]<=a[2])
        cout<<"No\n";
    else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])
        cout<<"Obtuse\n";
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
        cout<<"Right\n";
    else if(a[0]*a[0]+a[1]*a[1]>a[2]+a[2])
        cout<<"Acute\n";//判斷、輸出三角形類型
    return 0;
}
/*
Input:
3 4 5
Output:
3 4 5
Right
*//*
Input:
101 100 99
Output:
99 100 101
Acute
*//*
Input:
10 100 10
Output:
10 10 100
No
*/
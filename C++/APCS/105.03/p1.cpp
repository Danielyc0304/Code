#include<iostream>
#include<algorithm>
using namespace std;

int main(){//成績指標
    int gra[20], a;//gra成績; a成績總數
    int i;//i旗標

    cin>>a;

    for(i=0; i<a; ++i)
        cin>>gra[i];
    sort(gra, gra+a);//成績排序

    for(i=0; i<a-1; ++i)
            cout<<gra[i]<<' ';
    cout<<gra[i]<<endl;//輸出排序後的成績，最後一個不空格

    for(i=0; gra[i]<60 && i<a; ++i);//找及格的邊界

    if(gra[0]>=60)//如果排序後第一項及格
        cout<<"best case\n";
    else
        cout<<gra[i-1]<<endl;//輸出最高不及格成績
    if(gra[a-1]<60)//如果排序後第一項不及格
        cout<<"worst case\n";
    else
        cout<<gra[i]<<endl;//輸出最低及格成績
    return 0;
}
/*
Input:
10
0 11 22 33 55 66 77 99 88 44
Output:
0 11 22 33 44 55 66 77 88 99
55
66
*//*
Input:
1
13
Output:
13
13
worst case
*//*
Input:
2
73 65
Output:
65 73
best case
65
*/
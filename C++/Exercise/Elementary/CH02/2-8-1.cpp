#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){//排序規則; a, b數字
    return a<b;//數字小的在前面
}
int main(){//成績指標(10503第1題)
    int score[20], n;//score成績, n成績總數
    int ans1=-1, ans2=-1;//ans1, ans2答案
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>score[i];
        sort(score, score+n, cmp);//排序

        for(i=0; i<n; ++i)
            if(score[i]<60)
                ans1=score[i];//找出最高不及格分數
        for(i=n-1; i>=0; --i)
            if(score[i]>=60)
                ans2=score[i];//找出最低及格分數
        cout<<score[0];
        for(i=1; i<n; ++i)
            cout<<' '<<score[i];//輸出排序後的成績
        cout<<endl;

        if(ans1!=-1)//如果找到不及格的人
            cout<<ans1<<endl;
        else//如果找不到不及格的人
            cout<<"best case"<<endl;
        if(ans2!=-1)//如果找到及格的人
            cout<<ans2<<endl;
        else//如果找不到不及格的人
            cout<<"worst case"<<endl;
        ans1=-1, ans2=-1;//初始化
    }
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
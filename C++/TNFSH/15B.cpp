#include<iostream>
using namespace std;

int main(){
    int grade[51], N;//grade[51]成績, N總數
    int c1=0, c2=0, c3=0;//c1, c2, c3計數
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>grade[i];

        if(grade[0]>grade[i])
            ++c1;
        else if(grade[0]==grade[i])
            ++c2;
        else
            ++c3;
    }
    cout<<c1<<endl<<c2-1<<endl<<c3<<endl;//輸出比第一項低、同分、高的人數

    return 0;
}
/*
Input:
10
42 71 63 73 1 52 8 40 38 88
Output:
4
0
5
*/
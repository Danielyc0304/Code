#include<iostream>
using namespace std;

int main(){//You Cannot Pass?!
    int n, grade;//n成績總數; grade成績
    double sum=0;//sum總和
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>grade;
            sum+=grade;
        }
        if(sum/n>59)
            cout<<"no\n";
        else
            cout<<"yes\n";//判斷平均成績、輸出結果
        sum=0;//初始化
    }
    return 0;
}
/*
Input:
1 60
3 0 80 75
5 61 61 61 61 55
Output:
no
yes
no
*/
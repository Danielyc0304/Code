#include<iostream>
using namespace std;

int main(){//You shall not pass!!
    int n, grade;//n成績總數; grade成績
    int c=0;//c判斷
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>grade;

        if(grade<60)
            c=1;
    }
    if(c==0)
        cout<<"HAHA, I PASS!!! Bite me!!!\n";
    else
        cout<<"Oh, No!!!\n";//判斷、輸出結果
    return 0;
}
/*
Input:
3
60
80
12
Output:
Oh, No!!!
*//*
Input:
2
80
90
Output:
HAHA, I PASS!!! Bite me!!!
*/
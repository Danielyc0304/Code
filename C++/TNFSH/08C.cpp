#include<iostream>
using namespace std;

int main(){//You shall not pass!!
    int n, gra;//n成績總數; gra成績
    bool c=false;//c判斷
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>gra;

        if(gra<60)
            c=true;
    }
    if(c==false)
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
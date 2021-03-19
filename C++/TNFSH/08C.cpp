#include<iostream>
using namespace std;

int main(){
    int n, grade;//n總數, grade成績
    int c=0;//c計數
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
        cout<<"Oh, No!!!\n";//判斷成績
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
#include<iostream>
using namespace std;

int main(){
    int X, Y;//X, Y座標

    cin>>X>>Y;

    if(X!=0 && Y!=0){
        cout<<"The coordinate point ("<<X<<','<<Y<<") lies in the ";
        if(X>0 && Y>0)
            cout<<"First";
        else if(X<0 && Y>0)
            cout<<"Second";
        else if(X<0 && Y<0)
            cout<<"third";
        else
            cout<<"fourth";
        cout<<" quandrant.\n";
    }
    else
        cout<<"The coordinate point ("<<X<<','<<Y<<") lies at the origin.";//判斷座標位置
    return 0;
}
/*
Input:
7 9
Output:
The coordinate point (7,9) lies in the First quandrant.
*//*
Input:
0 0
Output:
The coordinate point (0,0) lies at the origin.
*/
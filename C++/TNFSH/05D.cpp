#include<iostream>
using namespace std;

int main(){//Red King
    int a, b, c, d;

    cin>>a>>b>>c>>d;

    if((a+b>=c+d || c+d>17) && a+b<=17)//如果莊家點數大於等於玩家或玩家點數大於17，且莊家點數小於等於17
        cout<<"Banker wins.\n";//莊家獲勝
    else if((a+b<c+d || a+b>17) && c+d<=17)//如果玩家點數大於莊家或莊家點數大於17，且玩家點數小於等於17
        cout<<"Player wins.\n";//玩家獲勝
    else
        cout<<"Draw.\n";//平手
    return 0;
}
/*
Input:
7 9 11 1
Output:
Banker wins.
*//*
Input:
13 12 2 1
Output:
Player wins.
*/
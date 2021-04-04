#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
    char a[8];//a字串
    int i;//i旗標

    while(cin>>a){
        for(i=0; i<strlen(a)-1; ++i)
            cout<<abs((int)a[i]-(int)a[i+1]);
        cout<<endl;//輸出字母差
    }
    return 0;
}
/*
Input:
POKEMON
Output:
146821
*//*
Input:
TYPHOON
Output:
598701
*/
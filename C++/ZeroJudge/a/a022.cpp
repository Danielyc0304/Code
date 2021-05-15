#include<iostream>
#include<cstring>
using namespace std;

int main(){//迴文
    char a[1000];//a字串
    bool c=false;//c判斷
    int i;//i旗標

    while(cin.get(a, sizeof(a))){
        for(i=0; i<strlen(a)-i; ++i)
            if(a[i]!=a[strlen(a)-i-1]){
                c=true;

                break;
            }
        if(c==false)
            cout<<"yes\n";
        else
            cout<<"no\n";//輸出結果
    }
    return 0;
}
/*
Input:
abba
Output:
yes
*//*
Input:
abcd
Output:
no
*/
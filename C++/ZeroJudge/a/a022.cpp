#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1000];//a字串
    int c=0;//c判斷
    int i;//i旗標

    while(cin.get(a, sizeof(a))){
        for(i=0; i<strlen(a)-i; ++i)
            if(a[i]!=a[strlen(a)-i-1]){
                c=1;

                break;
            }
        if(c==0)
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
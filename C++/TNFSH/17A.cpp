#include<iostream>
#include<cstring>
using namespace std;

int main(){//軍令傳遞
    char a[501];//a字串
    int n;//n平移單位
    int tmp;//tmp暫存值
    int i;//i旗標

    cin.get(a, sizeof(a));
    cin>>n;

    for(i=0; i<strlen(a); ++i){
        tmp=(int)a[i];

        if(tmp>=97 && tmp<=122){
            if(tmp+n>122)
                tmp+=n-26;
            else
                tmp+=n;
        }
        cout<<(char)tmp;
    }
    cout<<endl;//輸出結果
    
    return 0;
}
/*
Input:
~run for your life!
Output:
~twp hqt aqwt nkhg!
*//*
Input:
old soldiers never die. they just fade away.
Output:
urj yurjokxy tkbkx jok. znke payz lgjk gcge.
*/
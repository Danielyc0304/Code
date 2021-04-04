#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a;//a字串
    int i;//i旗標

    getline(cin, a);

    reverse(a.begin(), a.end());

    for(i=0; a[i]=='0'; ++i);
    a.erase(0, i);

    if(a[0]=='\0')
        a='0';
    cout<<a<<endl;//輸出反轉字串

    return 0;
}
/*
Input:
12345
Output:
54321
*//*
Input:
5050
Output:
505
*/
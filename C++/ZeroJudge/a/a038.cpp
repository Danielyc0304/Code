#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a;
    int i;

    getline(cin, a);

    reverse(a.begin(), a.end());

    for(i=0; a[i]=='0'; ++i);
    a.erase(0, i);

    if(a[0]=='\0')
        a='0';
    cout<<a<<endl;

    return 0;
}
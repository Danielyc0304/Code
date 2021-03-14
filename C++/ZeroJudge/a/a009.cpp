#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string a;
    int i;

    getline(cin, a);

    for(i=0; i<a.length(); ++i)
        cout<<(char)((int)a[i]-7);
    cout<<endl;

    return 0;
}
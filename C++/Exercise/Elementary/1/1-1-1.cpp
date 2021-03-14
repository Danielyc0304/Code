#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string a, tmp;
    stringstream ss;
    int i;

    while(getline(cin, a)){
        for(i=0; i<a.length(); ++i){
            if(isalpha(a[i])!=0)
                a[i]=tolower(a[i]);
            else
                a[i]=' ';
        }
        ss<<a;

        while(ss>>tmp)
            cout<<tmp<<endl;
        ss.clear();
    }
    return 0;
}
/*
No cross, no crown.
*/
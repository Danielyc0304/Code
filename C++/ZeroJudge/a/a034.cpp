#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int a;
    stringstream ss;
    string num;
    string ans;

    while(cin>>a){
        while(a!=0){
            ss<<a%2;
            ss>>num;
            ss.clear();

            ans.insert(0, num);

            a/=2;
        }
        cout<<ans<<endl;

        ans.clear();
    }
    return 0;
}
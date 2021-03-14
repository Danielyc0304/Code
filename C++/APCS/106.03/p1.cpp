#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string X;
    stringstream ss;
    int s, num1=0, num2=0;
    int ans;
    int i;

    getline(cin, X);

    for(i=0; i<X.length(); ++i){
        ss<<X[i];
        ss>>s;
        ss.clear();

        if(i%2==0)
            num1+=s;
        else
            num2+=s;
    }
    cout<<abs(num1-num2)<<endl;

    return 0;
}
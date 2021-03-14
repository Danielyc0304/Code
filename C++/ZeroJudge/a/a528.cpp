#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp1(string a, string b){
    int i;

    if(a.length()==b.length())
        for(i=0; i<a.length(); ++i)
            if(a[i]!=b[i])
                return a[i]>b[i];
    return a.length()>b.length();
}
bool cmp2(string a, string b){
    int i;

    if(a.length()==b.length())
        for(i=0; i<a.length(); ++i)
            if(a[i]!=b[i])
                return a[i]<b[i];
    return a.length()<b.length();
}
int main(){
    vector<string> num1, num2;
    string s;
    int N;
    int i;

    while(cin>>N){
        cin.get();

        for(i=0; i<N; ++i){
            getline(cin, s);

            if(s[0]=='-')
                num1.push_back(s);
            else
                num2.push_back(s);
        }
        sort(num1.begin(), num1.end(), cmp1);
        sort(num2.begin(), num2.end(), cmp2);

        for(i=0; i<num1.size(); ++i)
            cout<<num1[i]<<endl;
        for(i=0; i<num2.size(); ++i)
            cout<<num2[i]<<endl;
        num1.clear();
        num2.clear();
    }
    return 0;
}
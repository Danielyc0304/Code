#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    map<string, int> com;
    int num1[6], n;
    string num2;
    int c;
    int ans=0;
    int i, j;

    while(cin>>n){
        if(n==0)
            break;
        for(i=0; i<n; ++i){
            for(j=0; j<5; ++j)
                cin>>num1[j];
            sort(num1, num1+5);

            for(j=0; j<5; ++j)
                num2+=to_string(num1[j]);
            com[num2]+=1;

            num2.clear();
        }
        map<string, int>::iterator it;
        for(it=com.begin(); it!=com.end(); ++it){
            if((*it).second>ans){
                ans=(*it).second;
                c=0;
            }
            if((*it).second==ans)
                ++c;
        }
        cout<<ans*c<<endl;

        com.clear();
        ans=0;
    }
    return 0;
}
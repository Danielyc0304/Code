#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

vector<int> base;
stringstream ss;
int ans=0;

void take_base(char a){
    int s;
    int i;

    ss<<a;
    ss>>s;
    ss.clear();

    base.push_back(0);
    for(i=0; i<base.size(); ++i)
        base[i]+=s;
    for(i=base.size()-1; i>=0; --i)
        if(base[i]>=4){
            ++ans;

            base.erase(base.begin()+i);
        }
}
int main(){
    vector<vector<string>> sit;
    vector<string> tmp;
    string act;
    int a, b;
    int c=0;
    int i, j;

    for(i=0; i<9; ++i){
        cin>>a;

        for(j=0; j<a; ++j){
            cin>>act;
            tmp.push_back(act);
        }
        sit.push_back(tmp);
        tmp.clear();
    }
    cin>>b;

    j=0;
    for(i=0; i<9 && (i<sit[j].size() || j==9) && b>0; ++i)
        for(j=0; j<9 && i<sit[j].size() && b>0; ++j){
            if(sit[j][i][1]=='B')
                take_base(sit[j][i][0]);
            else if(sit[j][i][1]=='R')
                take_base('4');
            else{
                ++c;
                --b;
            }
            if(c==3){
                base.clear();
                c=0;
            }
        }
    cout<<ans<<endl;

    return 0;
}
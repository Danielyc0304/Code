#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    map<int, int, less<int>> mode;
    int N, num;
    int c;
    int i;

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>num;
        
        mode[num]+=1;
    }
    map<int, int>::iterator it;
    for(it=mode.begin(); it!=mode.end(); ++it)
        if((*it).second>c)
            c=(*it).second;
    for(it=mode.begin(); it!=mode.end(); ++it)
        if((*it).second==c)
            cout<<(*it).first<<' '<<c<<endl;
    return 0;
}
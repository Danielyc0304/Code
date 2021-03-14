#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> location;
int N, K;

bool judge(int range){
    int service;
    int c=0;
    int i;

    for(i=0; i<N; ){
        service=location[i]+range;
        ++c;

        if(c>K)
            return false;
        if(service>=location[N-1])
            return true;
        while(service>=location[i])
            ++i;
    }
    return false;
}
int main(){
    int tmp;
    int max, min=1;
    int i;

    cin>>N>>K;

    for(i=0; i<N; ++i){
        cin>>tmp;
        location.push_back(tmp);
    }
    sort(location.begin(), location.end());

    max=(location[N-1]-location[0])/K+1;

    while(max>min){
        if(judge((max+min)/2)==1)
            max=(max+min)/2;
        else
            min=(max+min)/2+1;
    }
    cout<<max<<endl;

    return 0;
}
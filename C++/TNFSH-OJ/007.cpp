#include<iostream>
#include<vector>
using namespace std;

vector<int> num;

void acceleration(){
    int i;

    if(num.size()==1)
        return;
    for(i=0; i<num.size()-1; ++i)
        num[i]-=num[i+1];
    num.erase(num.begin()+i);

    acceleration();
}
int main(){
    int a, N, tmp;
    int i, j;

    cin>>a;

    for(i=0; i<a; ++i){
        cin>>N;

        for(j=0; j<N+1; ++j){
            cin>>tmp;
            num.insert(num.begin(), tmp);
        }
        acceleration();

        cout<<num[0]<<endl;

        num.clear();
    }
    return 0;
}
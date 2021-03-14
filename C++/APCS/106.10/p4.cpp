#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct data{
    int weight;
    int frequency;
};
bool cmp(struct data a, struct data b){
    return a.weight*b.frequency<b.weight*a.frequency;
}
int access(struct data *a, int i){
    int sum=0;

    for(; i>=0; --i)
        sum+=a[i].weight;
    return sum;
}
int main(){
    struct data a[100001];
    int N, tmp;
    int ans=0;
    int i;

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>a[i].weight;
    for(i=0; i<N; ++i)
        cin>>a[i].frequency;
    sort(a, a+N, cmp);

    for(i=0; i<N; ++i)
        ans+=access(a, i-1)*a[i].frequency;
    cout<<ans<<endl;
    return 0;
}
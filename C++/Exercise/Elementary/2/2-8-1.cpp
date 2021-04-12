#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}
int main(){//成績指標(10503第1題)
    int score[20], n;
    int ans1=-1, ans2=-1;
    int i;

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>score[i];
        sort(score, score+n, cmp);

        for(i=0; i<n; ++i)
            if(score[i]<60)
                ans2=score[i];
        for(i=n-1; i>=0; --i)
            if(score[i]>=60)
                ans1=score[i];
        cout<<score[0];
        for(i=1; i<n; ++i)
            cout<<' '<<score[i];
        cout<<endl;

        if(ans2!=-1)
            cout<<ans2<<endl;
        else
            cout<<"best case"<<endl;
        if(ans1!=-1)
            cout<<ans1<<endl;
        else
            cout<<"worst case"<<endl;
        ans1=-1, ans2=-1;
    }
    return 0;
}
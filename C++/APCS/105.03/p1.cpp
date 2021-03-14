#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int grade[21]={0}, a;
    int ans1=0, ans2=0;
    int i;

    cin>>a;

    for(i=0; i<a; ++i)
        cin>>grade[i];
    sort(grade, grade+a);

    for(i=0; i<a-1; ++i)
            cout<<grade[i]<<' ';
    cout<<grade[i]<<endl;

    for(i=0; grade[i]<60 && i<a; ++i){}

    if(grade[0]>=60)
        cout<<"best case\n";
    else
        cout<<grade[i-1]<<endl;
    if(grade[a-1]<60)
        cout<<"worst case\n";
    else
        cout<<grade[i]<<endl;
    return 0;
}
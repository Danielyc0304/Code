#include<iostream>
using namespace std;

int main(){
    string a;
    int k;
    int pre, tmp=0, c=0;
    int ans=0;
    int i;

    cin>>k;
    cin.get();
    getline(cin, a);

    if(isupper(a[0])!=0)
        pre=0;
    else
        pre=1;
    for(i=0; i<a.length(); ++i){
        if((isupper(a[i])!=0 && pre==0) || (islower(a[i])!=0 && pre==1)){
            ++c;

            if(c==k){
                tmp+=k;

                ans=max(ans, tmp);
            }
            else if(c>k)
                tmp=k;
        }
        else{
            if(c<k)
                tmp=0;
            c=1;

            if(c==k){
                ++tmp;

                ans=max(ans, tmp);
            }
            if(isupper(a[i])!=0 && pre==1)
                pre=0;
            else
                pre=1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){//A Marvelous Pet
    int n;//n數字
    int s=0;//c計數
    int ans=0;//ans答案
    int i, j;//i, j旗標

    while(cin>>n){
        if(n==0)
            break;
        for(i=1; i<n/2+1; ++i){
            for(j=0; s<n; ++j)
                s+=i+j;
            if(s==n)
                ++ans;
            s=0;
        }
        cout<<ans<<endl;

        ans=0;
    }
    return 0;
}
/*
Input:
3
4
5
9
25
0
Output:
1
0
1
2
2
*/
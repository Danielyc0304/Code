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

/***Note
9

4 5 y
3 4 5
2 3 4 y
1 2 3 4
end
***
25

12 13 y
11 12 13
10 11 12
9 10 11
8 9 10
7 8 9 10
6 7 8 9
5 6 7 8
4 5 6 7 8
3 4 5 6 7 y
2 3 4 5 6 7
1 2 3 4 5 6 7
end
***/
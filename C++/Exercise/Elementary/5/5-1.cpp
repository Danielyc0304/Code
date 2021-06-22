#include<iostream>
#include<cstring>
using namespace std;

int main(){//統計字母數量
    string a;//a字串
    int n;//n字串總數
    int ans[26]={0};//ans答案
    int i, j;//i, j旗標

    cin>>n;
    cin.get();
    for(i=0; i<n; ++i){
        getline(cin, a);
        
        for(j=0; j<a.length(); ++j)
            if(isalpha(a[j]))//如果是字母
                ++ans[tolower(a[j])-'a'];
        for(j=0; j<26; ++j)
            if(ans[j]>0)
                cout<<(char)('a'+j)<<' '<<ans[j]<<endl;//輸出統計結果
    }
    return 0;
}
/*
Input:
1
An apple a day keeps the doctor away.
Output:
a 6
c 1
d 2
e 4
h 1
k 1
l 1
n 1
o 2
p 3
r 1
s 1
t 2
w 1
y 2
*/
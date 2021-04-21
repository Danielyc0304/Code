#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){//[福州19中]众数
    map<int, int, less<int>> fre;//fre眾數
    int N, num;//N數字總數; num數字
    int c;//c計數
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>num;
        
        fre[num]+=1;
    }
    map<int, int>::iterator it;//宣告迭代器
    for(it=fre.begin(); it!=fre.end(); ++it)
        if((*it).second>c)//找出最大的次數
            c=(*it).second;
    for(it=fre.begin(); it!=fre.end(); ++it)
        if((*it).second==c)//如果出現次數為最大次數
            cout<<(*it).first<<' '<<c<<endl;//輸出眾數
    return 0;
}
/*
Input:
12
2  4  2  3  2  5  3  7  2  3  4  3
Output:
2 4
3 4
*/
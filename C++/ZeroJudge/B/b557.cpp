#include<iostream>
#include<map>
using namespace std;

int main(){//直角三角形
    int T, N, num;//T測資總數; N木棒總數; num木棒長度
    map<int, int> a;//a數字
    int ans=0;//asn答案
    int i, j;//i, j旗標

    cin>>T;
    for(i=0; i<T; ++i){
        cin>>N;
        for(j=0; j<N; ++j){
            cin>>num;
            ++a[num];
        }
        for(auto it1=a.begin(); it1!=a.end(); ++it1)
            for(auto it2=next(it1, 1); it2!=a.end(); ++it2)
                for(auto it3=next(it2, 1); it3!=a.end(); ++it3)//遍歷所有長度
                    if(it1->first*it1->first+it2->first*it2->first==it3->first*it3->first)//判斷直角三角形
                        ans+=it1->second*it2->second*it3->second;//考慮有同樣長度的木棒
        cout<<ans<<endl;//輸出直角三角形個數

        a.clear();
        ans=0;//初始化
    }
    return 0;
}
/*
Input:
3
3
3 4 5
6
3 3 4 4 5 5
3
3 4 6
Output:
1
8
0
*/
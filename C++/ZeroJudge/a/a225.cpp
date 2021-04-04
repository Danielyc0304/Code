#include<iostream>
using namespace std;

int main(){
    int num[1000], n;//num數字; n數字總數
    int i, j;//i, j旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        for(i=0; i<n; ++i)
            for(j=i; j<n; ++j)
                if(num[i]%10>num[j]%10)
                    swap(num[i], num[j]);
        for(i=0; i<n; ++i)
            for(j=i; j<n && num[i]%10==num[j]%10; ++j)
                if(num[i]/10<num[j]/10)
                    swap(num[i], num[j]);
        for(i=0; i<n; ++i)
            cout<<num[i]<<' ';
        cout<<endl;//輸出排序結果
    }
    return 0;
}
/*
Input:
7
38 106 98 26 13 46 51
6
1 2 3 4 5 0
5
98 76 12 34 55
6
33 33 88 88 83 38
Output:
51 13 106 46 26 98 38
0 1 2 3 4 5
12 34 55 76 98
83 33 33 88 88 38
*/
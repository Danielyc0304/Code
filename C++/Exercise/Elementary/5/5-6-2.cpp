#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num[100], n;//num數字; n數字總數
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        sort(num, num+n);//排序
        
        do{
            for(i=0; i<n; ++i)
                cout<<num[i]<<' ';
            cout<<endl;//輸出字典正向排序所有密碼
        }while(next_permutation(num, num+n));//字典順序從前到後
    }
    return 0;
}
/*
Input:
3 5 4 6
Output:
4 5 6
4 6 5
5 4 6
5 6 4
6 4 5
6 5 4
*/
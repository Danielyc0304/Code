#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num[100], n;//num數字; n數字總數
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i)
            cin>>num[i];
        sort(num, num+n);
        
        do{
            for(i=0; i<n; ++i)
                cout<<num[i]<<' ';
            cout<<endl;
        }while(next_permutation(num, num+n));
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
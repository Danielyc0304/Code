#include<iostream>
using namespace std;

int main(){
    int n, num;//n總數, num數字
    int c=0;//c計數
    int i;//i旗標

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>num;

        if(num%2==0)
            c=1;
    }
    if(c==0)
        cout<<"Very Good!!!\n";
    else
        cout<<"Oh, No!!!\n";//判斷偶數
    return 0;
}
/*
Input:
3
11
13
554
Output:
Oh, No!!!
*//*
Input:
2
88641
34689
Output:
Very Good!!!
*/
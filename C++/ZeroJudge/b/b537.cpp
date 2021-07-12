#include<iostream>
using namespace std;

long int f(int a, int b){//回推法; a, b數字
    if(a==b)//如果a==b，相當於f(1)=1/1
        return 1;
    if(a>b)//當k為偶數時f(k)=1+f(k/2)>1-->a>b
        return f(a-b, b)*2;//f(k/2)=f(k)-1
    return f(b, a)+1;//當k為奇數時f(k)=1/f(k-1)，又f(k-1)為偶數>1-->f(k)=1/f(k-1)<0，a<b，f(k-1)=1/f(k)
}
int main(){//分數運算-1
    int a, b;//a分子; b分母

    while(cin>>a>>b)
        cout<<f(a, b)<<endl;
    return 0;
}
/*
Input:
1 1
2 1
1 2
3 1
1 3
3 2
2 3
4 1
1 4
4 3
30 11
Output:
1
2
3
4
5
6
7
8
9
10
236
*/
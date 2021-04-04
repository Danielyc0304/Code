#include<iostream>
using namespace std;

int main(){
    int n, m;//n起始溫度; m結束溫度

    cin>>n>>m;

    if(n>m)
        swap(n, m);
    for(; n<=m; ++n)
        cout<<n<<"C="<<(double)9/5*n+32<<"F"<<endl;//輸出溫度
    return 0;
}
/*
Input:
0 6
Output:
0C=32F
1C=33.8F
2C=35.6F
3C=37.4F
4C=39.2F
5C=41F
6C=42.8F
*//*
Input:
-13 +13
Output:
-13C=8.6F
-12C=10.4F
-11C=12.2F
-10C=14F
-9C=15.8F
-8C=17.6F
-7C=19.4F
-6C=21.2F
-5C=23F
-4C=24.8F
-3C=26.6F
-2C=28.4F
-1C=30.2F
0C=32F
1C=33.8F
2C=35.6F
3C=37.4F
4C=39.2F
5C=41F
6C=42.8F
7C=44.6F
8C=46.4F
9C=48.2F
10C=50F
11C=51.8F
12C=53.6F
13C=55.4F
*/
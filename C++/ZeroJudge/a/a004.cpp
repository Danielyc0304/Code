#include<iostream>
using namespace std;

int main(){
    int a;//a年

    while(cin>>a){
        if((a%4==0 && a%100!=0) || a%400==0)
            cout<<"閏年\n";
        else
            cout<<"平年\n";//判斷、輸出閏、平年
    }
    return 0;
}
/*
Input:
1977
Output:
平年
*//*
Input:
1980
Output:
閏年
*/
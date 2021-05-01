#include<iostream>
using namespace std;

int a1, a2;//a1第一個日期年; a2第二個日期年

bool leap_year(int year){//判斷閏年; year年
    if((year%4==0 && year%100!=0) || year%400==0)
        return true;//回傳閏年
    else
        return false;//回傳平年
}
int numA(int month, int day){//將第一個日期轉為數字; month月; day日
    int num=0;//num數字
    int i;//i旗標

    for(i=1; i<month; ++i){
        if(i<=7){
            if(i==2){
                num+=28;
                if(leap_year(a1))
                    ++num;
            }
            else{
                num+=30;
                if(i%2==1)
                    ++num;
            }
        }
        else{
            num+=30;
            if(i%2==0)
                ++num;
        }
    }
    num+=day;

    return num;//回傳數字
}
int numB(int year, int month, int day){//將第二個日期轉為數字; year年; month月; day日
    int num=0;//num數字
    int i;//i旗標
    
    for(; year<a2; ++year){
        num+=365;
        if(leap_year(year))
            ++num;
    }
    for(i=1; i<month; ++i){
        if(i<=7){
            if(i==2){
                num+=28;
                if(leap_year(year))
                    ++num;
            }
            else{
                num+=30;
                if(i%2==1)
                    ++num;
            }
        }
        else{
            num+=30;
            if(i%2==0)
                ++num;
        }
    }
    num+=day;

    return num;//回傳數字
}
int main(){//日期差幾天
    int b1, b2, c1, c2;//b1第一個日期月; b2第二個日期月; c1第一個日期日; c2第二個日期日

    while(cin>>a1>>b1>>c1>>a2>>b2>>c2){
        if(a1>a2 || (a1==a2 && b1>b2) || (a1==a2 && b1==b2 && c1>c2)){
            swap(a1, a2);
            swap(b1, b2);
            swap(c1, c2);
        }
        cout<<numB(a1, b2, c2)-numA(b1, c1)<<endl;//輸出日期差
    }
    return 0;
}
/*
Input:
2011 10 19
2011 10 18
Output:
1
*/
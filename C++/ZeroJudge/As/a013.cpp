#include<iostream>
using namespace std;

int i;//i旗標

int num1_conversion(string a){//轉換第一個數字; a字串
    int num=0;

    for(i=0; a[i]!=' '; ++i)
        switch(a[i]){
            case 'M': num+=1000; break;
            case 'D': num+=500; break;
            case 'C':{
                switch(a[i+1]){
                    case 'M': num+=900, ++i; break;
                    case 'D': num+=400, ++i; break;
                    default: num+=100;
                }
                break;
            }
            case 'L': num+=50; break;
            case 'X':{
                switch(a[i+1]){
                    case 'C':num+=90, ++i; break;
                    case 'L':num+=40, ++i; break;
                    default: num+=10;
                }
                break;
            }
            case 'V': num+=5; break;
            default:{
                switch(a[i+1]){
                    case 'X': num+=9, ++i; break;
                    case 'V': num+=4, ++i; break;
                    default: ++num;
                }
            }
        }
    return num;//回傳數字
}
int num2_conversion(string a){//轉換第二個數字; a字串
    int num=0;

    for(++i; a[i]!='\0'; ++i)
        switch(a[i]){
            case 'M': num+=1000; break;
            case 'D': num+=500; break;
            case 'C':{
                switch(a[i+1]){
                    case 'M': num+=900, ++i; break;
                    case 'D': num+=400, ++i; break;
                    default: num+=100;
                }
                break;
            }
            case 'L': num+=50; break;
            case 'X':{
                switch(a[i+1]){
                    case 'C':num+=90, ++i; break;
                    case 'L':num+=40, ++i; break;
                    default: num+=10;
                }
                break;
            }
            case 'V': num+=5; break;
            default:{
                switch(a[i+1]){
                    case 'X': num+=9, ++i; break;
                    case 'V': num+=4, ++i; break;
                    default: ++num;
                }
            }
        }
    return num;//回傳數字
}
void output(int num){//輸出結果; num數字
    if(num==0)
        cout<<"ZERO";
    for(; num>=1000; num-=1000)
        cout<<'M';
    if(num>0){
        if(num>=900){
            cout<<"CM";
            num-=900;
        }
        else if(num>=500){
            cout<<'D';
            num-=500;
        }
        else if(num>=400){
            cout<<"CD";
            num-=400;
        }
        for(; num>=100; num-=100)
            cout<<'C';
    }
    if(num>0){
        if(num>=90){
            cout<<"XC";
            num-=90;
        }
        else if(num>=50){
            cout<<'L';
            num-=50;
        }
        else if(num>=40){
            cout<<"XL";
            num-=40;
        }
        for(; num>=10; num-=10)
            cout<<'X';
    }
    if(num>0){
        if(num>=9){
            cout<<"IX";
            num-=9;
        }
        else if(num>=5){
            cout<<'V';
            num-=5;
        }
        else if(num>=4){
            cout<<"IV";
            num-=4;
        }
        for(; num>0; --num)
            cout<<'I';
    }
    cout<<endl;
}
int main(){//羅馬數字
    string a;//a羅馬數字

    while(getline(cin, a)){
        if(a[0]=='#')
            break;
        output(abs(num1_conversion(a)-num2_conversion(a)));//輸出結果
    }
    return 0;
}
/*
Input:
I I
MM II
#
Output:
ZERO
MCMXCVIII
*/
#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

int main(){//身分證檢驗
    char a[11];//a身分證字號
    stringstream ss;//ss字串串流
    int s=8, num, sum;//s計算值; num數字; sum總和
    int i;//i旗標

    cin.get(a, sizeof(a));

    if(a[0]=='A' || a[0]=='B' || a[0]=='C' || a[0]=='D' || a[0]=='E' || a[0]=='F' || a[0]=='G' || a[0]=='H' || a[0]=='J' || a[0]=='K'){
        sum=1;

        switch(a[0]){
            case 'A': num=0; break;
            case 'B': num=1; break;
            case 'C': num=2; break;
            case 'D': num=3; break;
            case 'E': num=4; break;
            case 'F': num=5; break;
            case 'G': num=6; break;
            case 'H': num=7; break;
            case 'J': num=8; break;
            default: num=9;
        }
    }
    else if(a[0]=='L' || a[0]=='M' || a[0]=='N' || a[0]=='P' || a[0]=='Q' || a[0]=='R' || a[0]=='S' || a[0]=='T' || a[0]=='U' || a[0]=='V'){
        sum=2;

        switch(a[0]){
            case 'L': num=0; break;
            case 'M': num=1; break;
            case 'N': num=2; break;
            case 'P': num=3; break;
            case 'Q': num=4; break;
            case 'R': num=5; break;
            case 'S': num=6; break;
            case 'T': num=7; break;
            case 'U': num=8; break;
            default: num=9;
        }
    }
    else{
        sum=3;

        switch(a[0]){
            case 'X': num=0; break;
            case 'Y': num=1; break;
            case 'W': num=2; break;
            case 'Z': num=3; break;
            case 'I': num=4; break;
            default: num=5;
        }
    }
    sum+=num*9;

    for(i=1; i<strlen(a)-1; ++i){
        ss<<a[i];
        ss>>num;
        ss.clear();

        sum+=num*s;
        --s;
    }
    ss<<a[9];
    ss>>num;
    ss.clear();

    sum+=num;

    if(sum%10==0)
        cout<<"real\n";
    else
        cout<<"fake\n";//判斷、輸出結果
    return 0;
}
/*
Input:
T112663836
Output:
real
*//*
Input:
S154287863
Output:
fake
*/
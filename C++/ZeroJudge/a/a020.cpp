#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

int main(){
    char a[11];
    stringstream ss;
    int s=8, num=0, sum;
    int i;

    cin.get(a, sizeof(a));

    if(a[0]=='A' || a[0]=='B' || a[0]=='C' || a[0]=='D' || a[0]=='E' || a[0]=='F' || a[0]=='G' || a[0]=='H' || a[0]=='J' || a[0]=='K'){
        sum=1;

        if(a[0]=='B') num=1;
        else if(a[0]=='C') num=2;
        else if(a[0]=='D') num=3;
        else if(a[0]=='E') num=4;
        else if(a[0]=='F') num=5;
        else if(a[0]=='G') num=6;
        else if(a[0]=='H') num=7;
        else if(a[0]=='J') num=8;
        else if(a[0]=='K') num=9;
    }
    else if(a[0]=='L' || a[0]=='M' || a[0]=='N' || a[0]=='P' || a[0]=='Q' || a[0]=='R' || a[0]=='S' || a[0]=='T' || a[0]=='U' || a[0]=='V'){
        sum=2;

        if(a[0]=='M') num=1;
        else if(a[0]=='N') num=2;
        else if(a[0]=='P') num=3;
        else if(a[0]=='Q') num=4;
        else if(a[0]=='R') num=5;
        else if(a[0]=='S') num=6;
        else if(a[0]=='T') num=7;
        else if(a[0]=='U') num=8;
        else if(a[0]=='V') num=9;
    }
    else{
        sum=3;

        if(a[0]=='Y') num=1;
        else if(a[0]=='W') num=2;
        else if(a[0]=='Z') num=3;
        else if(a[0]=='I') num=4;
        else if(a[0]=='O') num=5;
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
        cout<<"fake\n";
    return 0;
}
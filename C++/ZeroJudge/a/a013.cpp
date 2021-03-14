#include<iostream>
using namespace std;

int num1=0, num2=0;
int i;

void num1_conversion(string a){
    for(i=0; a[i]!=' '; ++i){
        if(a[i]=='M') num1+=1000;
        else if(a[i]=='D') num1+=500;
        else if(a[i]=='C'){
            if(a[i+1]=='M'){
                num1+=900;
                ++i;
            }
            else if(a[i+1]=='D'){
                num1+=400;
                ++i;
            }
            else num1+=100;
        }
        else if(a[i]=='L') num1+=50;
        else if(a[i]=='X'){
            if(a[i+1]=='C'){
                num1+=90;
                ++i;
            }
            else if(a[i+1]=='L'){
                num1+=40;
                ++i;
            }
            else num1+=10;
        }
        else if(a[i]=='V') num1+=5;
        else if(a[i]=='I'){
            if(a[i+1]=='X'){
                num1+=9;
                ++i;
            }
            else if(a[i+1]=='V'){
                num1+=4;
                ++i;
            }
            else ++num1;
        }
    }
}
void num2_conversion(string a){
    for(++i; a[i]!='\0'; ++i){
        if(a[i]=='M') num2+=1000;
        else if(a[i]=='D') num2+=500;
        else if(a[i]=='C'){
            if(a[i+1]=='M'){
                num2+=900;
                ++i;
            }
            else if(a[i+1]=='D'){
                num2+=400;
                ++i;
            }
            else num2+=100;
        }
        else if(a[i]=='L') num2+=50;
        else if(a[i]=='X'){
            if(a[i+1]=='C'){
                num2+=90;
                ++i;
            }
            else if(a[i+1]=='L'){
                num2+=40;
                ++i;
            }
            else num2+=10;
        }
        else if(a[i]=='V') num2+=5;
        else if(a[i]=='I'){
            if(a[i+1]=='X'){
                num2+=9;
                ++i;
            }
            else if(a[i+1]=='V'){
                num2+=4;
                ++i;
            }
            else ++num2;
        }
    }
}
void output(int num){
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
int main(){
    string a;

    while(getline(cin, a)){
        if(a[0]=='#')
            break;
        num1_conversion(a), num2_conversion(a);
        output(abs(num1-num2));

        num1=0, num2=0;
    }
    return 0;
}
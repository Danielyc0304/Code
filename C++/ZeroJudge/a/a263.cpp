#include<iostream>
using namespace std;

int a1, a2;
int num1=0, num2=0;

int judge(int year){
    if((year%4==0 && year%100!=0) || year%400==0)
        return 0;
    else
        return 1;
}
void numA(int month, int day){
    int i;

    for(i=1; i<month; ++i){
        if(i<=7){
            if(i==2){
                num1+=28;
                if(judge(a1)==0)
                    ++num1;
            }
            else{
                num1+=30;
                if(i%2==1)
                    ++num1;
            }
        }
        else{
            num1+=30;
            if(i%2==0)
                ++num1;
        }
    }
    num1+=day;
}
void numB(int year, int month, int day){
    int i;
    
    for(; year<a2; ++year){
        num2+=365;
        if(judge(year)==0)
            ++num2;
    }
    for(i=1; i<month; ++i){
        if(i<=7){
            if(i==2){
                num2+=28;
                if(judge(year)==0)
                    ++num2;
            }
            else{
                num2+=30;
                if(i%2==1)
                    ++num2;
            }
        }
        else{
            num2+=30;
            if(i%2==0)
                ++num2;
        }
    }
    num2+=day;
}
int main(){
    int b1, b2, c1, c2;

    while(cin>>a1>>b1>>c1>>a2>>b2>>c2){
        if(a1>a2 || (a1==a2 && b1>b2) || (a1==a2 && b1==b2 && c1>c2)){
            swap(a1, a2);
            swap(b1, b2);
            swap(c1, c2);
        }
        numA(b1, c1);
        numB(a1, b2, c2);

        cout<<num2-num1<<endl;

        num1=0, num2=0;
    }
    return 0;
}
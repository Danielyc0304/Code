#include<iostream>
#include<sstream>
using namespace std;

string brackets(string a){
    stringstream ss;
    string num3;
    int s, num1=0, num2=0, tmpi1, tmpi2, tmpi3, tmpi4;
    int i, j=-1, k=-1;

    for(i=0; i<a.length(); ++i){
        if(a[i]=='('){
            j=i;
            tmpi1=i;
        }
        else if(a[i]==')')
            k=i;
        while(j!=-1 && k!=-1){
            while(1){
                tmpi2=j;

                for(j+=2; a[j]!=' '; ++j){
                    ss<<a[j];
                    ss>>s;
                    ss.clear();

                    num1=10*num1+s;
                }
                if(a[tmpi2+2]=='-')
                    num1*=-1;
                if(a[j+1]==')'){
                    num1=0;

                    break;
                }
                if(a[j+1]=='*' || a[j+1]=='/' || a[j+1]=='%'){
                    tmpi3=j;

                    for(j+=3; a[j]!=' '; ++j){
                        ss<<a[j];
                        ss>>s;
                        ss.clear();

                        num2=10*num2+s;
                    }
                    if(a[tmpi3+3]=='-')
                        num2*=-1;
                    tmpi4=j;

                    if(a[tmpi3+1]=='*')
                        ss<<num1*num2;
                    else if(a[tmpi3+1]=='/')
                        ss<<num1/num2;
                    else
                        ss<<num1%num2;
                    ss>>num3;
                    ss.clear();

                    a.erase(tmpi2+2, j-tmpi2-2);
                    a.insert(tmpi2+2, num3);

                    j=tmpi2;
                    num2=0;
                }
                else
                    ++j;
                num1=0;
            }
            j=tmpi1;

            while(1){
                tmpi2=j;

                for(j+=2; a[j]!=' '; ++j){
                    ss<<a[j];
                    ss>>s;
                    ss.clear();

                    num1=10*num1+s;
                }
                if(a[tmpi2+2]=='-')
                    num1*=-1;
                if(a[j+1]==')'){
                    num1=0;

                    break;
                }
                tmpi3=j;

                for(j+=3; a[j]!=' '; ++j){
                    ss<<a[j];
                    ss>>s;
                    ss.clear();

                    num2=10*num2+s;
                }
                if(a[tmpi3+3]=='-')
                    num2*=-1;
                if(a[tmpi3+1]=='+')
                    ss<<num1+num2;
                else
                    ss<<num1-num2;
                ss>>num3;
                ss.clear();

                a.erase(tmpi2+2, j-tmpi2-2);
                a.insert(tmpi2+2, num3);

                j=tmpi2;
                num1=0, num2=0;
            }
            a.erase(j, 2);
            a.erase(tmpi1, 2);

            i=-1, j=-1, k=-1;
        }
    }
    return a;
}
string outside(string a){
    stringstream ss;
    string num3;
    int s, num1=0, num2=0, tmpi1, tmpi2, tmpi3, tmpi4;
    int i=-2;

    while(1){
        tmpi2=i;
        
        for(i+=2; a[i]!=' ' && a[i]!='\0'; ++i){
            ss<<a[i];
            ss>>s;
            ss.clear();

            num1=10*num1+s;
        }
        if(a[tmpi2+2]==')')
            num1*=-1;
        if(a[i]=='\0'){
            num1=0;

            break;
        }
        if(a[i+1]=='*' || a[i+1]=='/' || a[i+1]=='%'){
            tmpi3=i;

            for(i+=3; a[i]!=' ' && a[i]!='\0'; ++i){
                ss<<a[i];
                ss>>s;
                ss.clear();

                num2=10*num2+s;
            }
            if(a[tmpi3+3]=='-')
                num2*=-1;
            if(a[tmpi3+1]=='*')
                ss<<num1*num2;
            else if(a[tmpi3+1]=='/')
                ss<<num1/num2;
            else
                ss<<num1%num2;
            ss>>num3;
            ss.clear();

            a.erase(tmpi2+2, i-tmpi2-2);
            a.insert(tmpi2+2, num3);

            i=tmpi2;
            num2=0;
        }
        else
            ++i;
        num1=0;
    }
    i=-2;

    while(1){
        tmpi2=i;

        for(i+=2; a[i]!=' ' && a[i]!='\0'; ++i){
            ss<<a[i];
            ss>>s;
            ss.clear();

            num1=10*num1+s;
        }
        if(a[tmpi2+2]=='-')
            num1*=-1;
        if(a[i]=='\0'){
            num1=0;

            break;
        }
        tmpi3=i;

        for(i+=3; a[i]!=' ' && a[i]!='\0'; ++i){
            ss<<a[i];
            ss>>s;
            ss.clear();

            num2=10*num2+s;
        }
        if(a[tmpi3+3]=='-')
            num2*=-1;
        if(a[tmpi3+1]=='+')
            ss<<num1+num2;
        else
            ss<<num1-num2;
        ss>>num3;
        ss.clear();

        a.erase(tmpi2+2, i-tmpi2-2);
        a.insert(tmpi2+2, num3);

        i=tmpi2;
        num1=0, num2=0;
    }
    return a;
}
int main(){
    string a;

    while(getline(cin, a))
        cout<<outside(brackets(a))<<endl;
    return 0;
}
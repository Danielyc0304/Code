#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1001];
    char word[27]={'\0'};
    int c1=0, c2=0;
    int i;

    while(cin>>a){
        for(i=0; i<strlen(a); ++i){
            if((int)a[i]>=65 && (int)a[i]<=90){
                if(word[(int)a[i]-65]=='\0')
                    word[(int)a[i]-65]=(char)(int)a[i]+32;
                else
                    word[(int)a[i]-65]='\0';
                ++c1;
            }
            else if((int)a[i]>=97 && (int)a[i]<=122){
                if(word[(int)a[i]-97]=='\0')
                    word[(int)a[i]-97]=a[i];
                else
                    word[(int)a[i]-97]='\0';
                ++c1;
            }
        }
        for(i=0; i<26; ++i)
            if(word[i]!='\0')
                ++c2;
        if(c2>1)
            cout<<"no...\n";
        else if((c1%2==0 && c2==0) || (c1%2==1 && c2==1))
            cout<<"yes !\n";
        memset(word, '\0', sizeof(word));
        c1=0, c2=0;
    }
    return 0;
}
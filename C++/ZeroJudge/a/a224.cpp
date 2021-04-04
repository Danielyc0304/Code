#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1001];//a字串
    char word[26]={'\0'};//word字母
    int c1=0, c2=0;//c1, c2計數
    int i;//i旗標

    while(cin>>a){
        for(i=0; i<strlen(a); ++i){
            if((int)a[i]>=65 && (int)a[i]<=90){//如果是大寫
                if(word[(int)a[i]-65]=='\0')
                    word[(int)a[i]-65]=(char)(int)a[i]+32;
                else
                    word[(int)a[i]-65]='\0';
                ++c1;
            }
            else if((int)a[i]>=97 && (int)a[i]<=122){//如果是小寫
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
        if(c2>1)//如果字母表裡剩兩個以上
            cout<<"no...\n";
        else
            cout<<"yes !\n";//輸出結果
        memset(word, '\0', sizeof(word));
        c1=0, c2=0;//初始化
    }
    return 0;
}
/*
Input:
ababa
bbaaa
Level
aaabbbcc
abcdefg
HowAreYouToday
A_man,_a_plan,_a_canal:_Panama.
Output:
yes !
yes !
yes !
no...
no...
no...
yes !
*/
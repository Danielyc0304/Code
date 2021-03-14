#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");

    string a;

    while(getline(in, a))
        out<<a<<endl;
    return 0;
}
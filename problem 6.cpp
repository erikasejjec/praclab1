#include <iostream>
using namespace std;

string conpiarst(string s, string t){
    int j=tam(t);
    for (int i=0;i<j;i++)
        s[i]=t[i];
    return s;
}
int main(){
    cout<<"problem 5 \n";
    string t,s;
    cout << "Ingresa la cadena s: \n";
    getline(cin,s);
    cout << "Ingresa la cadena t: \n";
    getline(cin,t);
    cout<<conpiarst(s,t);
}

// write the program in c++ to find the size of each datatype
#include<iostream>
using namespace std;

int main(){
    int a = 12;
    float b = 12.5;
    double c = 189.999999;
    char d = a;
    bool e = true;

    cout<<"Size of integer is : " <<sizeof(a) <<" bytes"<<endl;
    cout<<"Size of float is : " <<sizeof(b)<<" bytes"<<endl;
    cout<<"Size of double is : " <<sizeof(c)<<" bytes"<<endl;
    cout<<"Size of char is : " <<sizeof(d)<<" bytes"<<endl;
    cout<<"Size of boolean is : " <<sizeof(e)<<" bytes"<<endl;

    return 0;
}
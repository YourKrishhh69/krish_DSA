#include<iostream>
using namespace std;

int main(){
    int age = 18;
    int *pointerOFAge = &age;

    cout<<"address of age is :"<<pointerOFAge<<endl;

    return 0;
}
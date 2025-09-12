#include<iostream>
using namespace std;

int main(){
    int age = 18;
    int *pointerOFAge = &age;

    //pointer to pointer

    int** pointer2 = &pointerOFAge;

    cout<<"address of age is :"<<pointerOFAge<<endl;
    cout<<"address of pointerOfAge is :"<<pointer2<<endl;

    return 0;
}
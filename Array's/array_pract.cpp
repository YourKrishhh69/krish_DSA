//in this code i will practice of some basic array question 

#include<iostream>
using namespace std;

int main(){
    int arraySize;
    cout<<"enter the size of array"<<endl;
    cin>>arraySize;
    int A[arraySize];

    for(int i = 0; i<arraySize;i++){
        int input;
        cout<<"now enter elemt in arr"<<endl;
        cin>>input;
        A[i] = input;

    }
    int j = 0;
    while(j<arraySize){
    
        cout<<A[j]<<endl;
        j++;
    }
}
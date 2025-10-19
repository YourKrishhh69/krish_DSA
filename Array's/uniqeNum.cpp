#include<iostream>
#include<vector>
using namespace std;

int findUniqe(vector<int>arr ){
    int ans = 0;
    for(int i = 0;i<arr.size();i++){
        ans  = ans ^ arr[i];
        
    }
    return ans;
}

int main(){

    //intializ vector
    vector<int>arr{4, 2, 7, 2, 4, 5, 7};

    int UniqeNum = findUniqe(arr);
    cout<<"the Uniqe no is :"<< UniqeNum;


    return 0;
}
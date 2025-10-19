#include<iostream>
#include<vector>
using namespace std;

int main(){
    //declaer of ans array
    vector<int>Ans;
    vector<int>Aarr{1,2,3,4};
    vector<int>Barr{4,5,6,7,8};
    

    for(int i = 0;i<Aarr.size();i++){
        Ans.push_back(Aarr[i]);
    }
    for(int i = 0;i<Barr.size();i++){
        Ans.push_back(Barr[i]);
    }

    for(int i = 0;i<Ans.size();i++){
        cout<<Ans[i]<<",";
    }
    cout<<"complete";
    return 0;
}
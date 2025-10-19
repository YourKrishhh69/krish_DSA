#include<iostream>
#include<vector>
using namespace std;


int main(){
    int A[] = {2,3,6,3,7};
    int B[] = {2,4,5,6,};
    int Asize = 5,Bsize = 4;

    vector<int>Ans;
    for(int i = 0;i<Asize;i++){
        for(int j = 0; j<Bsize;j++){
            if(A[i]==B[j]){
                Ans.push_back(B[j]);
            }
        }
    }

    for(int i = 0; i<Ans.size();i++){
        cout<<Ans[i]<<",";
    }


    return 0;
}
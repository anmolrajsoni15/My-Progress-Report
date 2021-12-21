#include<iostream>
#include<vector>
using namespace std;


void printdata(vector<int>& nums1){
    for(int i = 0; i< nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }
}

int main(){
    vector<int> nums1;
    // cout<<nums1.size()<<endl;
    if(nums1[0] == NULL){
        cout<<"EMPTY";
    }
    printdata(nums1);
 return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> unique;
        int count = 1;
        
        for(int i = 0; i < arr.size(); i++){
                if((i+1 < arr.size()) && (arr[i] == arr[i+1])){
                    count++;
                }
                else{
                    unique.push_back(count);
                    count = 1;
                }
        }

        int ans = 1;
        for(int j = 0; j< unique.size(); j++){
            if(j+1 < unique.size() && unique[j] == unique[j+1]){
                ans--;
            }
        }
    return ans;
    }
};

int main(){
Solution ans;
vector<int> arr = {1,2};
cout<<ans.uniqueOccurrences(arr);
 return 0;
}
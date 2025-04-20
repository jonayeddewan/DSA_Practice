#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    int st=0,en=arr.size()-1;

    int currSum=0;
    vector<int>ans;

    while(st<en){
        currSum = arr[st]+arr[en];
        if(currSum == target){
            ans.push_back(st);
            ans.push_back(en);
            return ans;
        }
        else if(currSum>target){
            en--;
        }
        else{
            st++;
        }
    }
    return ans;
}
int main(){

    vector<int>vec = {1,7,11,15};
    int target=9;

    vector<int> ans = pairSum(vec,target);

    cout << ans[0] << "," << ans[1] << endl;

    return 0;

}

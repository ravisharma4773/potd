#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if((n^1)==(n-1)) return false;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            nums[i]=nums[i]%k;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                continue;
            if(mp.size()==0)
                mp[nums[i]]++;
            else{
                int x=abs(k-nums[i]);
            if(mp.find(x)!=mp.end())
                mp.erase(x);
            else 
                mp[nums[i]]++;
            }
        }
        if(mp.size()==0) return 1;
        return 0;
    }
};

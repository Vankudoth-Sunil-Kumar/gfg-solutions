class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Optimal approach 
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;


        // // Brute Force Approach 
        // int n=nums.size();
        // int cnt=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k) cnt++;
        //     }
        // }
        // return cnt;
    }
};
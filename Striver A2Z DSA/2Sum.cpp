vector<int> twoSum(vector<int> &nums, int target){
    vector<int> a;
    
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(target==nums[i]+nums[j]){
                a.push_back(i);
                a.push_back(j);
                return a;
            }
        }
    }
    return a;
}


vector<int> 2sum2(vector<int> &nums, int target){
    vector<int> a;
    unordered_map<int,int> NumIndex;

    for(int i=0; i<nums.size(); i++){
        int sub = target - nums[i];

        if(NumIndex[sub]!=NumIndex.end()){
            a.push_back(NumIndex[sub]);
            a.push_back(i);
            return a;
        }

        // if(NumIndex.find(nums[i])==NumIndex.end())
        NumIndex(nums[i])=i;
    }
    return a;
}



vector<int> 2sum3(vector<int> &nums, int target){
    vector<int> a;

    sort(nums.begin(),nums.end());

    int i=0, j=nums.size()-1;

    while(i<=j){
        if(nums[i]+nums[j]>target){
            j--;
        } ;
        else if(nums[i] + nums[j] < target){
            i++;
        }
        else{
            a.push_back[i];
            a.push_back[j];
            return a;
        }
    }
    return a;
}
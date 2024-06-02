int missnum3(vector<int> &nums){
    int n = nums.size();

    for(int i=0; i<n; i++){
        int flag = 0;
        for(int j=0; j<n-1; j++){
            if(nums[j]==i){
                flag = 1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i=0; i<n; i++){
        if(nums[i]!=i){
            return i;
        } 
    }
    return n;
}


int missingnum(vector<int> &nums){
    int n = nums.size();
    int sum = (n*(n+1))/2;
    int sum2=0;

    for( auto i : nums){
        sum2+=i;
    }

    return sum-sum2;
}

int missnum4(vector<int> &nums){
    int n = nums.size();
    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[nums[i]]+=1;
    }

    for(int i=0;i<n;i++){
        if(hash[i]==0) return i;
    }

    return -1;
}


int missnumxor(vector<int> &nums){
    int n = nums.size();
    int xor1=0;
    int xor2=0;

    for(int i=0; i<n-1; i++){
        xor1=xor1^nums[i];
    }

    for (int i=0; i<n; i++){
        xor2=xor2^i;
    }

    return xor2^xor1;
}


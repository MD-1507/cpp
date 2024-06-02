int singleone(vector<int> &nums){
    int xoro=0;
    for (int i=0; i<nums.size(); i++){
        xoro=xoro^nums[i];
    }
    return xoro;
}

int singleone(vector<int> &nums){
	int n = nums.size();
	sort(nums.begin(), nums.end());
	for(int i=1; i< nums.size()-1; i++){
		if (nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) return nums[i];
	}
	if(n==1 || nums[0]!=nums[1]) return nums[0];
	if(nums[n-1]!=nums[n-2]) return nums[n-1];
}

int singleone(vector<int> &nums){
	int n = nums.size();
	for(int i=0; i<n; i++){
		int cnt=0;
		for(int j=0; j<n; j++){
			if(nums[j]==nums[i]) cnt++;
		}
		if(cnt == 1) return nums[i];
	}
	return -1;
}

int singleNumber(vector<int> &nums){
    int n = nums.size();
    int maxi = nums[0];

    for (int i=0; i<n; i++){
        maxi=max(maxi,nums[i]);
    }

    vector<int> hash(maxi+1,0);

    for(int i=0; i<n; i++){
        hash[nums[i]]++;
    }

    for(int i=0; i<maxi+1; i++){
        if(hash[nums[i]]==1) return nums[i];
    }

    return -1;
}

int singleOne(vector<int> &nums){
	int n = nums.size();

	map<int,int> mpp;
	for(int i=0; i<n; i++){
		mpp[nums[i]]++;
	}

	for(auto it: mpp){
		if(it.second == 1) return it.first;
	}

	return -1;
}
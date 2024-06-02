int majorityElement(vector<int> &nums){
	int m = nums.size()/2;
	unordered_map<int,int> freq;

	for(int i=0; i<nums.size(); i++){
		freq[nums[i]]++;
		if(freq[nums[i]]>=m) return nums[i];
	}
	return nums[0];
}



int majElem2(vector<int> &nums){
    int n = nums.size();
    int ret = -1;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=0; j<n; j++){
            if(nums[i]==nums[j]) c++;
        }
        if (c>(n/2)) ret = nums[i];
    }
    return ret;
}


// Moore's Voting Algorithm
int majorElem3(vector<int> &v){
	int n = v.size();
	int el;
	int cnt=0;

	for(int i=0; i<n; i++){
		if(cnt==0){
			cnt=1;
			el=*it;
		}
		else if(el==v[i]) cnt++;
		else cnt--;
	}
	return el;
}
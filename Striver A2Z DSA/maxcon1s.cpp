int maxconsecutiveones(vector<int> &nums){
	int n = nums.size();
	int k=0;
	int maxi=0;

	for(int i=0; i<n; i++){
		if(nums[i]==1) k++;
		else k=0;

		if (k>maxi) maxi = k;
	}
	return maxi;
}
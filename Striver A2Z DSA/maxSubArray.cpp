int maxSubArray(vector<int> &nums){
	int maxsum=0;
	pair<int,int> ix;
	for(int i=0; i<nums.size();i++){
		for(int j=i+1; j<nums.size();j++){
			int sum=0;
			for(int k=i; k<=j; k++){
				sum+=nums[k];
			}
			maxsum=max(maxsum,sum);
		}
	}
	return maxsum;
}

int maxSubArray2(vector<int> &nums){
	int maxsum=0;
	for(int i=0; i<nums.size(); i++){
		int sum=0;
		for(int j=i+1; j<nums.size(); j++){
			sum+=nums[i];
			maxsum=max(maxsum,sum);
		}
	}
	return maxsum;
}


int maxSumArray3(vector<int> &v){
	int maxi=INT_MIN;
	int sum=0;

	for(int i=i; i<v.size(); i++){
		sum+=v[i];

		if(sum<0) sum=0;

		maxi = max(maxi,sum);
	}
	return maxi
}


int maxSubArraySum3mod(vector<int> &v){
	int start = -1;
	int end = -1;
	int sum=0;
	int maxi = INT_MIN;

	for(int i=0; i<v.size(); i++){
		sum+=v[i];

		if(sum==0) start=i;

		if(maxi<sum){
			maxi=sum;
			end=i;
		}

		if(sum<0) sum=0;
	}
	return maxi;
}


//Kadane's algorithm for Maximum SubArray Sum
int maxSubArraySum3mod(vector<int> &v){
	int start = -1;
	int end = -1;
	int maxi = INT_MIN;
	int sum = 0;

	for(int i=0; i<v.size();i++){
		sum+=v[i];

		if(maxi<sum){
			maxi = sum;
			end = i;
		}

		if(sum<=0){
			sum = 0;
			start = i;
		}
	}

	return maxi;
}
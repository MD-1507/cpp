// vector<int> leaders(vector<int> &nums){
// 	int l=-1;
// 	vector<int> L;
// 	for(int i=nums.size()-2; i>=0; i--){
// 		if(nums[i]>nums[i+1]){
// 			l = i;
// 			L.push_back(nums[l]);
// 			break;
// 		}
// 	}
	
// 	if(l==-1) return ;

// 	for(int i = l; i>=0; i--){
// 		if(nums[i]>nums[l]){
// 			l=i;
// 			L.push_back(nums[l]);
// 		}
// 	}
// 	return nums;

// }

vector<int> leaders(vector<int> &nums){
	vector<int> ans;
	int n = nums.size();
	int max = nums[n-1];
	ans.push_back(max);

	for(int i=n-2; i>=0; i--){
		if(nums[i]>max){
			ans.push_back(nums[i]);
			max=nums[i];
		}	
	}

	return ans;
}


vector<int> leaders(vector<int>){
	vector<int> L;
	for(int i = 0; i<nums.size(); i++){
		int f=0;
		for(int j = i+1; j<=nums.size(); j++){
			if(nums[i]<=nums[j]){
				f=1;
				break;
		}
		if(f==0){
			L.push_back(nums[i]);
		}
	}
	return L;
}






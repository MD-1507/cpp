void sortColors(vector<int> &nums){
	int low=0, mid=0, high=nums.size()-1;

	while(mid<=high){
		if(nums[mid]==0){
			swap(nums[mid],nums[low]);
			low++;
			mid++;
		}
		if(nums[mid]==1){
			mid++;
		}
		if(nums[mid]=2){
			swap(nums[mid],nums[high]);
			high--;
		}
	}
}

void sortColors(vector<int> &nums){
	int a=0,b=0,c=0;

	for(int i=0; i<nums.size(); i++){
		if(nums[i]==0) a++;
		if(nums[i]==1) b++;
		if(nums[i]==2) c++;
	}

	for(int i=0; i<a; i++) nums[i]=0;

	for(int i=a; i<b; i++) nums[i]=1;

	for(int i=b; i<nums.size(); i++) nums[i]=2;
}
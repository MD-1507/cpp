vector<int> moveZeros(vector<int> &nums){
	vector<int> temp;
	int n =nums.size();

	for(int i=0; i<n; i++){
		if (nums[i]!=0) temp.push_back(nums[i]);
	}

	int nz = temp.size();

	for(int i=0; i<nz; i++){
		nums[i]=temp[i];
	}

	// copy(temp.begin(), temp.begin()+nz; nums.begin());

	for(int i=nz; i<n; i++){
		nums[i]=0;
	}

	return nums;
}


vector<int> moveZeros2(vector<int> &nums){
	int i=0;
	int j=nums.size()-1;
	if (nums.size()>1){
		while(i<=j){
			if(nums[i]!=0 && nums[j]==0){
				i++; j--;
			}
			else if(nums[i]==0 && nums[j]!=0){
				swap(nums[i], nums[j]);
				i++; j--;
			}
			else{
				i++;
			}
		}
	}
	return nums;
}


vector<int> moveZeros3(vector<int> &nums){
	int j = -1;
	int n = nums.size();

	for(int i=0; i<n; i++){
		if(nums[i]==0){
			j=i;
			break;
		}
	}

	if (j==-1) return nums;

	for (int i=j+1; i<n; i++){
		if(nums[i]!=0){
			swap(nums[i], nums[j]);
			j++;
		}
	}
}
// vector<int> permutation(vector<int> v){	
// 	public:
// 		vector<vector<int>> permut;

// 	private:
// 		if(v.size()==2){
// 			return v;
// 			swap(v[0],v[1]);
// 			return v;
// 		}
// 		for(int i=0; i<v.size(); i++){
// 			swap(v[0],v[i]);
// 			vector<int> per;
// 			for(int i=1; i<v.size();i++){
// 				per.push_back(v[i]);
// 			}
// 			permutation(per);
// 		}
// }


// vector<vector<int>> permutation(vector<int> &nums){
// 	vector<vector<int>> allpermute;

// 	sort(nums.begin(),nums.end());
	
// 	for(int i=0; i<nums.size(); i++){
// 		for(int j=i; j<nums.size(); j++){
// 			swap(nums[i],nums[j]);
// 			vector<int> per;
// 			for(k=0; k<nums.size(); k++){
// 				per.push_back(nums[k]);
// 			}
// 			allpermute.push_back(nums[i])
// 		}
// 	}
// 	return allpermute;
// }



class Solution{
private:
	void recurPermute(int ind, vector<int> &nums, vector<vector<int>> &ans){
		if(ind==nums.size()){
			ans.push_back(nums);
			return;
		}
		for(int i=ind; i<nums.size(); i++){
			swap(nums[ind],nums[i]);
			recurPermute(ind+1, nums, ans);
			swap(nums[ind], nums[i]);
		}
	}
public:
	vector<vector<int>>allpermutations(vector<int> &nums){
		vector<vector<int>> ans;
		recurPermute(0,nums,ans);
		return ans;
	}
}




vector<int> nextPermute(vector<int> &nums){
	int n = nums.size();
	nums = next_permutation(nums.begin(),nums.end());
	// arr = next_permutation(arr, arr+n);  for an array
	return nums;
}




vector<int> next_permutatonmod2(vector<int> &nums){
	int bp = -1;
	for(int i=n-2; i>=0; i++){
		if(nums[i]<nums[i+1]){
			bp = i;
			break;
		}
	}

	if(bp == -1){
		reverse(nums.begin(), nums.end());
		return nums;
	}

	for(int i=nums.size()-1; i>bp; i--){
		if(nums[i]>nums[bp+1]){
			swap(nums[bp],nums[i]);
			break;
		}
	}
	reverse(nums.begin()+bp+1, nums.end());

	return nums;
}






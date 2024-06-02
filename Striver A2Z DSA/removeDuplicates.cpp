int removeDuplicates (vector<int> &nums){
	set<int> st;

	for (auto i: nums){
		st.insert(i);
	}

	k = st.size();

	copy(st.begin(),st.end(),nums.begin());

	// int j=0;
	// for (auto i: st){
	// 	nums[j++] = i;
	// }

	// int j=0;
	// for(auto it = st.begin(); it!=st.end(); ++it){
	// 	nums[j++]=*it;
	// }

	return k;
}


int removeDuplicates (vector<int> &nums){
	int i = 0; 
	for(int j = 0; j < nums.size(); j++){
		if (nums[i]!=nums[j]){
			i++;
			nums[i]=nums[j];
		}
	}
	return i;
}
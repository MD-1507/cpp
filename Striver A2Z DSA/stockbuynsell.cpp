//Stock Buy and Sell

int maxProfit(vector<int> & prices){
	int p = 0;

	for(int i=0;i<prices.size();i++){
		for(int j=i+1;j<prices.size();j++){
			p = max(p,prices[j]-prices[i]);
		}
	}
	return p;
}

// int MaxProfit(vector<int> &prices){
// 	int start = 0;
// 	int end = prices.size()-1;
// 	int p = INT_MIN;

// 	while(start<=end){
// 		if(prices[start+1]<prices[start]) start++;
// 		if(prices[end-1]>prices[end]) end--;
// 		p = max(p,prices[end]-prices[start]);
// 	}
// 	return p;
// }



// int maxProfit(vector<int> &v){
// 	int maxcur;
// 	int maxsofar;
// 	int p=0;

// 	while(int i=1; i<v.size(); i++){
// 		maxcurr = max(0,v[i]-v[i-1]);
// 		maxsofar = max(maxsofar,maxcurr);
// 	}
// 	return maxsofar;
// }

int maxProfit(vector<int> &v){
	int minp = INT_MAX;
	int p = 0;

	for(int i=0;i<v.size();i++){
		minp = min(minp,v[i]);
		p = max(p,v[i]-minp);
	}
	return p;
}


//rearrange array by sign
vector<int> rearrangevar1(vector<int> &nums){
	vector<int> p;
	vector<int> n;

	for(int i=0; i<v.size(); i++){
		if(v[i]>0) p.push_back(v[i]);
		else n.push_back(v[i]);
	}

	for(int i=0; i<(int)v.size()/2; i++){
		nums[2*i]=p[i];
		nums[2*i+1]=n[i];
	}

	return nums;
}


vector<int> rearrangevar1(vector<int> &nums){
	int p=0,n=1;
	int size = nums.size();
	int ans = vector<int>(size,0);

	for(int i=0; i<nums.size(); i++){
		if(nums[i]>0){
			ans[p]=nums[i];
			p+=2;
		}
		else{
			ans[n]=nums[i];
			n+=2;
		}
	}
	return ans;
}


vector<int> rearrange2(vector<int> &nums){
	int p=0;
	int n=1;
	int size = nums.size();
	vector<int> ans (size,0);
	i=0;

	while(i<nums.size() && p<nums.size() && n<nums.size()){
		if(nums[i]>0){
			ans[p] = nums[i];
			p+=2;
			i++;
		}
		else{
			ans[n] = nums[i];
			n+=2;
			i++;
		}
	}

	while(i<nums.size()){
		ans.push_back(nums[i]);
		i++;
	}

	return ans;
}


vector<int> rearrange2(vector<int> &nums){
	vector<int> p;
	vector<int> n;
	int size = nums.size();

	for(int i=0;i<nums.size();i++){
		if(nums[i]>0) p.push_back(nums[i]);
		else n.push_back(nums[i]);
	}

	int j=0;
	if (p.size()>n.size()){
		for(int i=0; i<n.size(); i++){
			nums[2*i] = p[i];
			nums[2*i + 1] = n[i];
			j+=2
		}
		while(j<nums.size()){
			nums[j++] = p[i++];
		}

	}
	else{
		for(int i=0; i<p.size(); i++){
			nums[2*i] = p[i];
			nums[2*i+1] = n[i];
			j+=2
		}
		while(j<nums.size()){
			nums[j++] = n[i++];
		}
	}
	return nums;
}



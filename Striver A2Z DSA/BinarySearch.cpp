int binarysearch(vector<int> &nums, int target){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int m = (l+r)/2;

	while(l<r){
		m = (l+r)/2;

		if(nums[m]<target) l = m+1;
		else if(nums[m]>target) r = m-1;
		else return m;
	}
	return -1;
}


int binarysearch(vector<int> &nums, int l, int r, int target){
	if(l>r) return -1;

	int m = (l+r)/2;
	if(nums[m]>target) binarysearch(nums, l, m-1, target);
	else if(nums[m]<target) binarysearch(nums, m+1, r, target);
	else return m;
}

int search(vetor<int> &nums, int target){
	return binarysearch(nums, 0, nums.size()-1, target);
}




//Lower Bound

int lowerbound(vector<int> &nums, int lb){
	int n = nums.size();

	for(int i = 0; i<n; i++){
		if(nums[i]>=lb) return i;
	}
	return n;
}

int lowerboundSTL(vector<int> &nums, int target){
	int n = nums.size();

	int lb_ind = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

	return lb_ind;
}


int BSlowerbound(vector<int> &nums, int lb){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int ans = n;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]<=lb){
			ans = m;
			l = m+1;
		}
		else r = m-1;
	}
	return m;
}


//Upper Bound

int upperbound(vector<int> &nums, int ub){
	int n = nums.size();

	for(int i=n-1; i>0; i--){
		if(nums[i]<=ub) return i;
	}
	return n;
}

int upperboundSTL(vector<int> &nums, int target){
	int n = nums.size();

	int ub_ind = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

	return ub_ind;
}


int BSupperbound(vector<int> &nums, int ub){
	int n = nums.size();
	int ans = 0;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[i]>=ub){
			ans = m;
			r = m-1;
		}
		else l = m+1;
	}
	return ans;
}


// Search Insert Position

int insertpos(vector<int> &nums, int num){
	int n = nums.size();
	int l = 0, r = n-1;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[i]>=num){
			ans = m;
			r=m-1;
		}
		else l=m+1;
	}
	return m;
}


// [e e e e e e lb (tar) ub e e e e e e e ] = arr
// [e e e e e e floor (num) ceil e e e e e e e e] = arr

//Floor -- LowerBound
//Ceil -- UpperBound

int floor(vector<int> &nums, int target){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int floor = nums[0];

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]<=target){
			floor = m;
			l = m+1;
		}
		else r = m+1;
	}
	return floor;
}

int ceil(vector<int> &nums, int target){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int ceil = n;;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]>=target){
			ceil = m;
			r = m-1;
		}
		else l = m+1;
	}
	return ceil;
}
         
// arr = [e0 e1 e2 e3 e4 e5 num6 num7 num8 num9 e10 e11 e12] 

// 1st occurence = ub of num = 6
// smallest of [num6 num7 num8 num9 e10 e11 e12]

// last occurence = lb of num = 9
// largest of [e0 e1 e2 e3 e4 e5 num6 num7 num8 num9]



// last occurence

int lastoccur(vector<int> &nums, int target){
	int n = nums.size();

	for(int i=n-1; i>=0; i--){
		if(nums[i]==target) return i;
	}
	return -1;
}



int lastoccur(vector<int> &nums, int target){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int ans = 0;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]==target){
			ans = m;
			l = m+1;
		}
		else if(nums[m]>target){
			r = m-1;
		}
		else{
			l = m+1;
		}
	}
	return ans;
}


int firstoccur(vector<int> &nums, int target){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int ans = 0;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]==target){
			ans = i;
			r = m+1;
		}
		else if(nums[m]<target){
			l = m+1;
		}
		else{
			r = m-1;
		}
	}
	return ans;
}


int binarysearchoccur(vector<int> &nums, int target){
	int n = nums.size();
	int lb = lastoccur(nums, target);
	int ub = firstoccur(nums, target);

	return (lb-ub+1);
}



// arr = [e0 e1 e2 e3 e4 e5 num6 num7 num8 num9 e10 e11 e12] 

// 1st occurence = ub of num = 6
// smallest of [num6 num7 num8 num9 e10 e11 e12]

// last occurence = lb of num = 9
// largest of [e0 e1 e2 e3 e4 e5 num6 num7 num8 num9]


int firstoccur(vector<int> &nums, int target){
	int n = nums.size();
	int l=0;
	int r=n-1;
	int ans = 0;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]==target){
			ans = i;

		}
		else if(nums[m]>target){

		}
	}

}


int numoccur(vector<int> &nums, int target){
	int n = nums.size();
	int cnt = 0;

	for(int i=0; i<n; i++){
		if(nums[i]==target) cnt++;
	}
	return cnt;
}


int searchrotatearr(vector<int> &nums, int target){
	int n = nums.size();
	int k=n;

	for(int i=0; i<n; i++){
		if(nums[i]==target){
			k = i;
		}
	}
	return k;
}


int searchrotateoccur(vector<int> &nums, int k){
	int n = nums.size();
	int l = 0;
	int r = n-1;
	int p = 0;

	while(l<=r){
		int m = (l+r)/2;
		
		if(nums[m]==k) return m;

		if(nums[l]<=nums[m]){
			if(nums[l]<k && k<nums[m]) r=m-1;
			else l=m+1;
		}
		else{
			if(nums[m]<k && k<nums[r]) l=m+1;
			else r=m-1;
		}
	}
	return -1;
}


int firstoccur(vector<int> &nums, int target){
	int n = nums.size();

	if(n==0) return -1;
	int f = n;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]==target){
			f = m;
			r = m-1;
		}
		else if(nums[m]<target) l = m+1;
		else r = m-1;
	}
	return f;
}


int lastoccur(vector<int> &nums, int target){
	int n = nums.size();

	if(n==0) return -1;

	int l=0, r=n-1, L=n;
	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]==target){
			L = m;
			l = m+1;
		}
		else if(nums[m]<target) l=m+1;
		else r = m-1;
	}
	return L;
}



int numoccur(vector<int> &nums, int target){
	int n = nums.size();

	int F = firstoccur(nums,target);
	int L = lastoccur(nums,target);

	return L-F;
}



int searchrotarrduplicate(vector<int> &nums, int target){
	int n = nums.size();

	int l=0, r=n-1;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[m]==target) return m;

		if(nums[l]==nums[m] && nums[m]==nums[r]){
			l=l+1;
			r=r-1;
			continue;
		}

		if(nums[l]<=nums[m]){
			if(nums[l]<=target && target<nums[m]) r=m-1;
			else l=m+1;
		}
		else{
			if(nums[m]<target && target<=nums[r]) l=m+1;
			else r=m-1;
		}
	}
	return -1;
}


int minrotarr(vector<int> &nums){
	int n = nums.size();

	int l=0, r=n-1, ans = INT_MAX;

	while(l<=r){
		int m = (l+r)/2;

		if(nums[l]<=nums[m]){
			ans = min(ans,nums[l]);
			l = m+1;
		}
		else{
			ans = min(ans,nums[m]);
			r = m-1;
		}
	}
	return ans;
}
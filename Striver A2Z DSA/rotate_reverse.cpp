void reverse1(vector<int> &nums, int a , int b){
        int n = nums.size();
        vector<int> temp;

        for (int i=0; i<n; i++){
            temp[n-1-i]=nums[i];
        }
        nums = temp;
    }
    void reverse2(vector<int>&nums, int a, int b){
        int i = a;
        int j = b;
        int temp;
        while (i<j){
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }

     void reverse3(vector<int>&nums, int a, int b){
        int i = a;
        int j = b;
        if (i<j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            reverse3( nums, i+1; j-1);
        }
     }

     reverse(nums.begin(), nums.end());

    void rotateR1(vector<int>& nums, int k) {
        rotate(nums, k, n-1);
        rotate(nums, 0, k-1);
        rotate(nums, 0, n-1);
    }

    void rotateL1(vector<int> &nums, int k){
        rotate(nums, 0, k);
        rotate(nums, k+1, n-1);
        rotate(nums, 0, n-1);
    }

    void rotateR2(vector<int> &nums, int k){
        int n = nums.size();
        k = (k % n);

        vector<int> temp;

        for(int i=0; i<n; i++){
            // if (i+k<n){
            //     temp[i+k] = nums[i];
            // }
            // else{
            //     temp[i-k-1] = nums[i];
            // }

            temp[(i+k)%n] = nums[i];
        }
        
        nums = temp;
    }

    void rotateL2(vector<int> &nums, int k){
        int n = nums.size();
        k = (k % n);

        vector<int> temp;

        for(int i=0; i<n; i++){
            // if (i+k<n){
            //     temp[i] = nums[i+k];
            // }
            // else{
            //     temp[i] = nums[i-k-1];
            // }

            temp[i] = nums[(i+k)%n];
        }
        
        nums = temp;
    }
int lenOfLongSubarr(int A[], int N, int K){
    int max=0;
    for (int i =0; i<N;i++){
        for (int j=0; j<N; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=A[k];
            }

            if(sum==K){
                if (max>(j-i+1)) max = (j-i+1);
            }
        }
    }
    return max;
}





int lenOfLongSubarr(int A[],  int N, int K) { 
    int m=0;
        
    for(int i=0; i<N; i++){
        int sum=0;
        for (int j=i; j<N; j++){
            sum+=A[j];
                
            if(sum==K) m=max(m,(j-i+1));
        }
    }
    return m;
} 




int lenOfLongSubarr(int A[], int N, int K){
    int sum=0;
    unordered_map<int,int> preSumMap;
    int m=0;

    for(int i=0; i<N; i++){
        sum+=A[i];

        if(sum==K) m=max(m,i+1);

        int rem = sum-K;

        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i - preSumMap[rem];
            m = max(m, len);
        }

        if(preSumMap.find(sum)==preSumMap.end()) preSumMap[sum]=i;

    }
    return m;
}

// we can also use map data structure here in case of 
//unordered map data structure cause the key here is the 
//prefix sum which is increasing with the index 

//search operations take O(1) best case and O(N) worst case 
//in unordered map

//same for best case is O(1) avg case O(logN) and worst case O(N) 
//for a map



int lenOfSubarr(int A[], int N, int K){
    int i=0;
    int j=0;
    int sum=0;

    while(j<N){
        while(i<=j && sum>K){
            sum-=A[i];
            i++;
        }

        if(sum==K) m=max(m,(j-i+1));


        j++;
        if(j<N) sum+=A[j];

    }
    return m;
}




// mycode fro 2 ptrs
int lenOfSubarr(int A[], int N, int K){
    int i = 0;
    int j = 0;
    int sum = 0;
    int maxLen = 0;

    // Calculate prefix sum
    for(int k = 1; k < N; k++){
        A[k] += A[k - 1];
    }

    while (i < N && j < N && i<=j) {
        sum = A[j] - (i > 0 ? A[i - 1] : 0);

        if (sum > K)
            i++;
        else if (sum < K)
            j++;
        else if (sum == K)
            maxLen = max(maxLen, (j - i + 1));
    }

    return maxLen;
}

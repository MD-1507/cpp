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


//same as for positive but 2 ptrs dont work here

//preSum also works because at even is a sum is same at a
//later index it will get stored inturn ensuring the fact that
//long length of the same occurence for K is returned
//I'll have to see this
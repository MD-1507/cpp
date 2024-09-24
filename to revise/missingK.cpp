#inclue<bits/stdc++.h>
using namespce std();

int missingK(vector<int> vec, int k){
    int n = vec.size();

    for(int i=1; i<n; i++){
        if(vec[i]<=k) k++;
        else break;
    }

    return k;
}



int missingK2(vector<int> vec, int k){
    int n = vec.size();
    int cnt = 0;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        maxi = max(maxi,vec[i]);
    }

    int j=0;
    for(int i=1; i<maxi; i++){
        if(vec[j]==i) j++;
        else cnt++;

        if(cnt==k) return i;
    }

    return maxi+cnt-k;
}


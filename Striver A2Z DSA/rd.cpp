#include <bits/stdc++.h>
using namespace std();

approach 1: brute force  O(NlogN)

int 2max(int arr[], int n){
	sort(arr, arr+n);
	if (n==1) return -1;
	return arr[n-2];
}

approach 2: O(N^2)

int max2(int arr[], int n){
	if (n<2) return -1;

	int max = INT_MIN;
	for (int i=0; i<n; i++){
		if (arr[i]>max) max = arr[i];
	}

	int max2 = INT_MIN;
	for (int i=0; i<n; i++){
		if (arr[i]>max2 && max2!=max) max2 = arr[i];
	}

	return max2;
}

approach 3: O(N)

int max22(int arr[], int n){
	if (n<2) return -1;

	int max = INT_MIN;
	int max2 = INT_MIN;

	for (int i=0; i<N; i++){
		if (arr[i]>max){
			max2 = max;
			max = arr[i];
		}
		else if (arr[i] > max2 && arr[i] < max){
			max2 = arr[i];
		}
	}
	return max2;
}
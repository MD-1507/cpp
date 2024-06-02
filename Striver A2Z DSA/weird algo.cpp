// #include<bits/stdc++.h>

// using namespace std;

// int main(){
// 	int a;
// 	cin>>a;

// 	vector<int> ans;
// 	ans.push_back(a);

// 	while(a!=1){
// 		if(a%2==0) a=a/2;
// 		else a = 3*a + 1;

// 		ans.push_back(a);
// 	}

// 	for(auto it: ans){
// 		cout<<it<<" ";
// 	}

// 	return 0;
// }



#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> ans;
    ans.push_back(a);

    while (a != 1) {
        if (a % 2 == 0)
            a = a / 2;
        else
            a = 3 * a + 1;

        ans.push_back(a);
    }

    for (auto it : ans) {
        cout << it << " ";
    }

    return 0;
}

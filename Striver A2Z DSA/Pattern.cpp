void Pattern22(int n){
	for (int i=0; i<(2*n-1); i++){
		for(int j=0; j<(2*n-1); j++){
			for(int k=0; k<n; k++){
				if(i==k || i==((2*n)-2-k) && i==)
			}
		}
	}
	cout<<endl;
}

vector<vector<int>> v;
for(int k=n; k>0; k--){
	for(int i=n-k; i<=k+1;i++){
		for(j=n-k; j<=1+k; j++){
			v[i][j]=k;
		}
	}
}

for(int i=0; i<=((2*n)-1); i++){
	for(int j=0; j<=((2*n)-1); j++){
		cout<<v[i][j]<<" ";
	}
	cout<<endl;
}


void pattern22(int n) {
	int size = (2*n)-1;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			cout<<(n-min(min(i,size-i-1),min(j,size-j-1)));
		}
		cout<<endl;
	}
}

// 33333
// 32223
// 32123
// 32223
// 33333





void Pattern21(int n) {
    for (int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            if(min(min(i,n-1-i), min(j,n-1-j))==0){
                cout<<"*";
            } else {
                cout << " ";
            }
        }
        cout<<endl;
    }
}

// *****
// *   *
// *   *
// *   *
// *****

// to get a k-th layer rectangle use min(min(i,size-i),min(j,size-j))=k;




void pattern20(int n){
	size=2*n;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(i<=n-1){ //Upper half
				if(i-j>=n-1 && i+(j-(n-1))>n-1){
					cout<<"*";
				}
				else{
					cour<<" "''
				}
			}

			if(i>n-1){
				if((i-(n-1)+j<n-1) && (i-(n-1)-j+(n-1))<n-1){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
		}
	}
}

// size = 2n *2n
// Upper Half: i = [0,n-1] && j=[0,2n-1]
// Lower Half: i = [n,2n-1] && j = [0,2n-1]
// Quad 1: i=[0,n-1] && j=[0,n-1] use i,j
// Quad 2: i=[0,n-1] && j=[n,2n-1]  use i,j-n
// Quad 3: i=[n,2n-1] && j=[0,n-1]  use i-n,j
// Quad 4: i=[n,2n-1] && j=[n,2n-1]  use i-n,j-n

// use i+j or i-j accordingly
// go down to increase i
// go right to inrease j
// refer notes


// 111111111111
// 11111  11111
// 1111    1111
// 111      111
// 11        11
// 1          1
// 11        11
// 111      111
// 1111    1111
// 11111  11111
// 111111111111

// use || in between  if two sections are intersecting
// use && in between if two parts are not intersecting

// 1          1
// 11        11
// 111      111
// 1111    1111
// 11111  11111
// 111111111111
// 11111  11111
// 1111    1111
// 111      111
// 11        11
// 1          1




void pattern19(int n){
	int size = 2*n;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(i<=n-1){
				if(i+j<=n-1 && i+(j-(n-1))<=n-1){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			if(i>n-1){
				if((i-(n-1))-j>0 && (i-(n-1)+j-(n-1)>0){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}


void pattern17(){
	string s = "ABCD";
	int n = s.size();

	for(int i=0; i<n; i++){
		for(int j=0; j<2*n; j++){
			if(i+j>=n-1 && i-(j-(n-1))>0){
				cout<<s[j-n+1];
			}
		}
	}



}

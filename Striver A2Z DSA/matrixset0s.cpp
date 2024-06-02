// //1
// void setZeroes(vector<vector<int>>& matrix) {
//     int nrows = matrix.size();
//     int ncols = matrix[0].size();
//     int a,b;

//     for(int i=0; i<nrows; i++){
//         for(int j=0; j<ncols; j++){
//             if(matrix[i][j]==0)
//             a=i;
//             b=j;
//         }
//     }

//     for(int i=0; i<ncols; i++) matrix[a][i]=0;
//     for(int i=0;i<nrows; i++) matrix[i][b]=0;
// }
// doesn't account for dynamic changing of the initial nonzero entries

//2
void markRow(vector<vector<int>> &matrix, int n, int m, int i){
    for(int j=0; j<=m; j++) matrix[i][j]=-1;
}

void markColumn(vector,vector<int>> &matrix, int n, int m, int j){
    for(int i=0; i<n; i++) matrix[i][j]=-1;
}

void setZeros(vectro<vector<int>> & matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0){
                markRow(matrix,n,m,i);
                markColumn(matrix,n,m,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==-1) matrix[i][j]=0;
        }
    }
}


//3
void ZeroMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

    int rows[n]={0};
    int cols[m]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                rows[i]=1;
                cols[j]=1;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(rows[i]||cols[j]) matrix[i][j]=0;
        }
    }
}


//4

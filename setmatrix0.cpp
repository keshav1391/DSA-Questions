//better solution for solving set matrix problem
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > zeroMatrix(vector<vector<int> > &matrix,int n, int m) {
    int col[m] = {0};
    int row[n] = {0};
    for(int i =0;i<n;i++){
        for(int j= 0;j<m;j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j= 0; j< m; j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
// optimal solution for solving set matrix zero problem 
using namespace std;
vector<vector<int> > zeroMatrix(vector<vector<int> > &matrix,int n, int m) {
    // int col[m] = {0}; -> matrix[0][..]
    // int row[n] = {0}; -> matrix[..][0]
    int colo= 1;
    for(int i =0;i<n;i++){
        for(int j= 0;j<m;j++){
            if(matrix[i][j] == 0){
                // mark the i-th row 
                 matrix[i][0] =0;
                // mark the j-th column
                if(j!=0)
                matrix[0][j] = 0;
                else{
                    colo = 0;
                }
            }
        }
    }
    for(int i = 1; i<n;i++){
        for(int j = 1; j<m ;j++){
            if(matrix[i][j] != 0){
                //check for col & row
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j= 0;j<m;j++){matrix[0][j] = 0;}
    }
    if(colo == 0){
        for(int i= 0;i<n;i++){matrix[i][0] = 0;}
    }
    return matrix;
}
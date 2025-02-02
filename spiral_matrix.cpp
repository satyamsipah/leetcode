class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> result;
    
    int srow = 0, scol = 0;
    int erow = m-1, ecol = n-1;

    while(srow <= erow && scol <= ecol) {
    //top boundries
    for(int j=scol; j<=ecol; j++) {
        result.push_back(matrix[srow][j]);
    }

    //right boundries
    for(int i=srow+1; i<=erow; i++) {
        result.push_back(matrix[i][ecol]);
    }

    //bottom boundries
    for(int j=ecol-1; j>=scol; j--) {
        if(srow == erow) { // middle matrix
            break;
        }
        result.push_back(matrix[erow][j]);
    }

    //left boundries
    for(int i=erow-1; i>=srow+1; i--) {
        if(scol == ecol) { // middle matrix
            break;
        }
        result.push_back(matrix[i][scol]);
    }
    srow++; scol++;
    erow--; ecol--;
    }
    return result;
    }
};

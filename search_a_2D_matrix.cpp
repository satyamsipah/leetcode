//Staircase method
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    int i = n - 1, j = 0;

    while(i >= 0 && j < m) {
        if(matrix[i][j] == target) {
            cout << "found your cell at (" << i << "," << j << ")" << endl;
            return true;
        }
        else if(matrix[i][j] < target) {
            j++;
        }
        else {
            i--;
        }
    }
    cout << "element is not found" << endl;
    return false;

    }
};

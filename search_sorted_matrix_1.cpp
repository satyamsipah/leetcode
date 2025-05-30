//Brute force method
#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedMatrix(vector<vector<int>> mat, int key) {
    int n = mat.size();
    vector<int> ans;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mat[i][j] == key) {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;

}

int main() {
    vector<vector<int>> mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    vector<int> res = sortedMatrix(mat,12);
    for(int i=0; i<res.size(); i++) {
        cout << res[i] << endl;
    }

    return 0;
}

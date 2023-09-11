#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*

 *
 * *
 *   *
 * * * *
 *       *
 * *     * *
 *   *   *   *
 * * * * * * * *
 *               *
 * *             * *
 *   *           *   *
 * * * *         * * * *
 *       *       *       *
 * *     * *     * *     * *
 *   *   *   *   *   *   *   *
 * * * * * * * * * * * * * * * *

*/

void writeSubmatrixIntoMatrix(vector<vector<char>>& matrix, const vector<vector<char>>& submatrix, int posY, int posX) {
    // Assuming that submatrix size is less or equal to matrix size
    for (int i = 0; i < submatrix.size(); i++) {
        for (int j = 0; j < submatrix[i].size(); j++) {
            matrix[i+posY][j+posX] = submatrix[i][j];
        }
    }
}

vector<vector<char>> generateSierpinskyTriangle(int scaleOrder) {
    if (scaleOrder == 0) {
        // Returning basic triangle
        vector<vector<char>> triangle = {{'*', ' '},
                                         {'*', '*'}};
        return triangle;
    }

    int width = pow(2, scaleOrder+1);
    vector<vector<char>> vec;
    vec.resize(width, vector<char>(width));  // setting size of matrix to scaleOrder * scaleOrder
    
    vector<vector<char>> baseTriangle = generateSierpinskyTriangle(scaleOrder-1);
    // Arrange baseTriangle into superTriangle with this arrangement
    //
    // * _
    // * *

    vector<vector<char>> emptyVec;
    
}

void printCharMatrix(const vector<vector<char>>& charMatrix) {
    for (vector<char> vec : charMatrix) {
        for (char c : vec) {
            cout << c;
        }
        cout << endl;
    }
}

int main() {
    int n;
    
    cout << "How large of a triangle you want?" << endl;
    cin >> n;
    cout << endl;

    vector<vector<char>> result = {{'1', '1', '1'}, 
                                   {'1', '1', '1'}, 
                                   {'1', '1', '1'}};
    vector<vector<char>> triangle = {{'*', ' '},
                                     {'*', '*'}};
    writeSubmatrixIntoMatrix(result, triangle, 1, 1);

    printCharMatrix(result);
}
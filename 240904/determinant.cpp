#include <iostream>
#include <vector>

using namespace std;

double determinant_3x3(const vector<vector<int>>& A) {
    double deter = 0.0;
    int m = A.size();
    int n = A[0].size();

    if (m != 3 || n != 3)
    {
        cout << "3x3 행렬이 아닙니다." << endl;
    }
    else
    {
        deter = (A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1]) - (A[0][2] * A[1][1] * A[2][0]) - (A[0][0] * A[1][2] * A[2][1]) - (A[0][1] * A[1][0] * A[2][2]);
    }

    return deter;
}

int main() {
    vector<vector<int>> A = {
        {3, 7, 8},
        {2, 7, 8},
        {3, 5, 9}
    };

    double result = determinant_3x3(A);

    cout << "Determinant: " << result << endl;


    return 0;
}
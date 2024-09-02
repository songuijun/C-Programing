#include <iostream>
#include <vector>

using namespace std;

// ��� ��� �Լ�
void printMatrix(const vector<vector<int>>& matrix, const string& name)
{
    cout << name << ":" << endl;
    for (const auto& row : matrix)
    {
        for (int elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << "//////////" << endl;
}

// ��� ���� �Լ�
vector<vector<int>> addMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B)
{
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

// ��� ���� �Լ�
vector<vector<int>> subtractMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B)
{
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    return result;
}

// ��� ���� �Լ�
vector<vector<int>> multiplyMatrix(const vector<vector<int>>& A, const vector<vector<int>>& B)
{
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    vector<vector<int>> result(rowsA, vector<int>(colsB));

    for (int i = 0; i < rowsA; ++i)
    {
        for (int j = 0; j < colsB; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

// ��ġ ��� �Լ�
vector<vector<int>> transposeMatrix(const vector<vector<int>>& A)
{
    int rows = A.size();
    int cols = A[0].size();
    vector<vector<int>> result(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[j][i] = A[i][j];
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> A = { {1, 2, 3}, {4, 5, 6} };
    vector<vector<int>> B = { {7, 8, 9}, {10, 11, 12} };

    printMatrix(A, "�迭A");
    printMatrix(B, "�迭B");

    vector<vector<int>> sum = addMatrix(A, B);
    cout << "A + B:" << endl;
    printMatrix(sum, "");

    vector<vector<int>> difference = subtractMatrix(A, B);
    cout << "A - B:" << endl;
    printMatrix(difference, "");

    vector<vector<int>> product = multiplyMatrix(A, transposeMatrix(B));  // ��ġ��� ���
    cout << "A * B^T:" << endl;
    printMatrix(product,"");

    vector<vector<int>> transpose = transposeMatrix(A);
    cout << "Transpose of A:" << endl;
    printMatrix(transpose,"");

    return 0;
}

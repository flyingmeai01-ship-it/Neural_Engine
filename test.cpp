#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Rows = mat.size();
    // Columns = mat[i].size();
    int r = mat.size(), c = mat[0].size();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
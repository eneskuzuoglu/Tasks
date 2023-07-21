#include <iostream>
#include <functional>
#include <vector>

template<typename T>
std::vector<std::vector<T>> creatematrix(const T& x, int rows,int cols){
	std::vector<std::vector<T>> matrix(rows, std::vector<T>(cols, x))
		return matrix;
}


int main() {
	//ornek
	int value = 10;
	int rows = 2;
	int colums = 2;

	std::vector<std::vector<int>> int_matrix = creatematrix(value, rows, colums);

	// fonskiyonu yazdýrmak için 
	for (size_t i = 0; i < int_matrix.size(); i++) {
		for (size_t j = 0; j < int_matrix[i].size(); j++) {
			std::cout << int_matrix[i][j] << " ";
		}
		std::cout << std::endl;

	}


	return 0;
}
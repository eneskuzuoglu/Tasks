#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

int main() {
	std::string Afile = "A.txt";
	std::string bfile = "b.txt";

    std::ifstream A_input(Afile);
    std::string line;
    int N = 0; 

    while (std::getline(A_input, line)) {
        ++N;
    }
    std::vector<std::vector<int>> A(N, std::vector<int>(N, 0));
    std::vector<int> b(N, 0);

    A_input.clear();
    A_input.seekg(0, std::ios::beg);
    for (int i = 0; i < N; ++i) {
        std::getline(A_input, line);
        std::stringstream ss(line);
        for (int j = 0; j < N; ++j) {
            ss >> A[i][j];
        }
    }
    A_input.close();

    std::ifstream b_input(bfile);

    for (int i = 0; i < N; ++i) {
        std::getline(b_input, line);
        b[i] = std::stoi(line);
    }
    b_input.close();
    std::cout << "Matris A:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Vector b:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << b[i] << std::endl;
    }

    return 0;
}


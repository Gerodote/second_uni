#include <algorithm>
#include <array>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <random>
#include <string>
#include <vector>

int main() {
  std::vector<int> numbers(25);
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 100);

  // Fill vector with random numbers
  std::generate(numbers.begin(), numbers.end(),
                [&dist, &gen]() { return dist(gen); });

  // Find minimum element in the vector
  auto min_it = std::min_element(numbers.begin(), numbers.end());

  // Swap first element with minimum element
  std::iter_swap(numbers.begin(), min_it);

  // Print the resulting vector
  std::cout << "3.1: Resulting vector: ";
  for (const auto &num : numbers) {
    std::cout << num << " ";
  }
  std::cout << "\n\n";

  const int rows = 10;
  const int cols = 10;
  std::array<std::array<int, cols>, rows> matrix;

  // Fill the matrix with random numbers
  std::uniform_int_distribution<> dis(-100, 100);
  for (auto &row : matrix) {
    for (auto &cell : row) {
      cell = dis(gen);
    }
  }

  // Modify the matrix
  for (auto &row : matrix) {
    auto min_iter = std::min_element(row.begin(), row.end());
    auto max_iter = std::max_element(row.begin(), row.end());
    std::swap(row[0], *min_iter);
    std::swap(row[cols - 1], *max_iter);
  }

  // Print the matrix
  std::cout << "3.2: print matrix:\n";
  for (const auto &row : matrix) {
    for (const auto &cell : row) {
      std::cout << cell << ' ';
    }
    std::cout << '\n';
  }

  std::string inputString;
  std::cout << "Enter a string: ";
  std::getline(std::cin, inputString);

  std::vector<std::string> words;
  boost::split(words, inputString, boost::is_any_of(" "));
  int wordCount = words.size();

  std::cout << "Word count: " << wordCount << std::endl;

  std::string input_str;
  std::cout << "Enter a string: ";
  std::getline(std::cin, input_str);

  // Extract digits from the string and print them
  std::string digits_str;
  for (char c : input_str) {
    if (std::isdigit(c)) {
      digits_str += c;
    }
  }
  std::cout << "Digits in the input string: " << digits_str << std::endl;

  return 0;
}

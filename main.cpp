#include <iostream>
#include <string>
#include <vector>

#include "printit.hpp"
#include "insertion.hpp"

int main() {
  std::vector<int> arr1 {23, 42, 1, 345, 123, 67, 13};
  print(arr1, "Input: ");
  insertion::sort(arr1);
  print(arr1, "Sorted: "); 

  std::vector<std::string> food { "Lemon", "Apple", "Zucchini", "Pear", "Banana" };
  print(food, "Food: ");
  insertion::sort(food);
  print(food, "Sorted food: ");
}

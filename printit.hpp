#ifndef SEBWINK_REPLIT_PRINTIT_HPP
#define SEBWINK_REPLIT_PRINTIT_HPP

template <typename T>
void print(const T& it, std::string prefix) {
  std::cout << prefix;
  for (const auto& elem : it) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

#endif

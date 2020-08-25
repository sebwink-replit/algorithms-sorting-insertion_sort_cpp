#ifndef SEBWINK_REPLIT_INSERTION_HPP
#define SEBWINK_REPLIT_INSERTION_HPP

namespace insertion {

  template <
    typename Array,
    typename ValueType=typename Array::value_type,
    typename SizeType=typename Array::size_type 
  >
  void sort(Array& arr) {
    for (SizeType i = 1; i < arr.size(); i++) {
      const ValueType ei = arr[i];
      SizeType j = i - 1;
      while (j >= 0 && arr[j] > ei) {
        std::swap(arr[j+1], arr[j]);
        j--;
      }
    }
  }

}

#endif
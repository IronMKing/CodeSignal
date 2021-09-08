///all_code////////////////////////////////////////////////////
std::vector<int> mergeKArrays(std::vector<std::vector<int>> arrays) {
  std::vector<int> firstUnused(arrays.size(), 0);
  std::vector<int> result;
  int n = 0;
  for (size_t i = 0; i < arrays.size(); i++) {
    n += static_cast<int>(arrays[i].size());
  }
  for (int i = 0; i < n; i++) {
    int minIndex = -1;
    int minValue = 0;
    for (size_t j = 0; j < arrays.size(); j++) {
      if (firstUnused[j] < static_cast<int>(arrays[j].size())) {
        if ( minIndex < 0 || (minIndex >= 0 && arrays[j][firstUnused[j]] < minValue) ) {
          minIndex = j;
          minValue = arrays[j][firstUnused[j]];
        }
      }
    }
    result.push_back(minValue);
    firstUnused[minIndex]++;
  }
  return result;
}
//!all_code////////////////////////////////////////////////////

///code that you need to write at empty place///////////////////
  minIndex < 0 || (minIndex >= 0 && arrays[j][firstUnused[j]] < minValue)
//!code that you need to write at empty place///////////////////
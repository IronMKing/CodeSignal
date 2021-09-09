///all_code////////////////////////////////////////////////////
std::vector<int> bubbleSort(std::vector<int> items) {

  int len = items.size();

  for (int i = 0; i < len; i++) {
    for (int j = 0, stop = len - i; j < stop - 1; j++) {
      if (items[j] > items[j + 1]) {
        std::swap(items[j], items[j + 1]);
      }
    }
  }

  return items;
}
//!all_code////////////////////////////////////////////////////

///code that you need to write at empty place///////////////////
 int len = items.size();
//!code that you need to write at empty place///////////////////

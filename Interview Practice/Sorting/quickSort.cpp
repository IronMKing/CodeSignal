///all_code////////////////////////////////////////////////////
void quickSortWithReference(std::vector<int>& a, int l, int r) {
  if (l >= r) {
    return;
  }

  int x = a[l];
  int i = l;
  int j = r;

  while (i <= j) {
    while (a[i] < x) {
      i++;
    }
    while (a[j] > x) {
      j--;
    }
    if (i <= j) {
      int t = a[i];
      a[i] = a[j];
      a[j] = t;
      i++;
      j--;
    }
  }
    quickSortWithReference(a, l, j);
    quickSortWithReference(a, l+1, r);
    
}

std::vector<int> quickSort(std::vector<int> a, int l, int r) {
  quickSortWithReference(a, l, r);
  return a;
}
//!all_code////////////////////////////////////////////////////

///code that you need to write at empty place///////////////////
    quickSortWithReference(a, l, j);
    quickSortWithReference(a, l+1, r);
//!code that you need to write at empty place///////////////////

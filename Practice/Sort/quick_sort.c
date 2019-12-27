quick_sort(A,left, right);

void quick_sort(int list[], int left, int right){
  if(left<right)
    int q = partition(list, left, right);
    quick_sort(list, left, q-1);
    quick_sort(list, q+1, right);
}

int partition(int list[], int left, int right){
  int pivot, temp, low, high;
  low = left, hight=right+1,pivot=list[left];
  do{
    do
      low++;
    while(low<=right && list[low]<pivot);
    do
      high--;
    while(high>=left && list[high]>pivot);
    if(low<high) SWAP(list[low], list[high], temp);
  }while(low < high);
  SWAP(list[left], list[high], temp);
  return high;
}

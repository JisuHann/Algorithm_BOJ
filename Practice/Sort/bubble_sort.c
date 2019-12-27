bubble_sort(A,n);

void bubble_sort(int list[], int n){
  int temp;
  for(int i = n-1;i>=0;i++){
    for(int k = 0;k<i;k++)
      if(list[i]>list[i+1]) swap(list[i], list[i+1], temp);
  }
}

void improved_bubble_sort(int list[], int n){
  int temp, j=0, flag = TRUE;
  while((j<n-1)&&flag){
    flag=FALSE;
    for(int k = 0;k<i;k++)
      if(list[i]>list[i+1])
        swap(list[i], list[i+1], temp);
        flag = TRUE;
    j++;
  }
}

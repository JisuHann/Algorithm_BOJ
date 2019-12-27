merge_sort(list, left, right);

void merge_sort(int list[], int left, int right){
  int mid;
  if(left < right){
    mid = (left+right)/2;
    merge_sort(list, left,mid);
    merge_sort(list, mid, right);
    merge(list,left, mid,right);
  }
}

void merge(int list[], int left, int mid, int right){
  int i,j,k,l;
  i=left, j=mid+1, k=left;

  while(i<=mid&&j<=right){
    if(list[i]<=list[j])
      sorted[k++]=list[i++];
    else sorted[k++]=list[j++];
  }
  if(i>mid)
    for(l=j;l<=right;l++)
      sorted[k++]=list[l];
  else
    for(l=i;l<=mid;l++)
      sorted[k++]=list[l];

  for(i=left;l<=right;l++)
    list[l]=sorted[l];
}

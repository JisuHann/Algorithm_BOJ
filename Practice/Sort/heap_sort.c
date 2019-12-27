#define SWAP(x,y,t)((t)=(x), (x)=(y), (y)=(t))

//heap sort 힙 정렬
void heap_sort(int list[], int n){
  int i;
  for(i=(n-1)/2;i>=0;i--)
    adjust(list,i,n);
  for(i=n-2;i>=0;i--){
    SWAP(&list[0], &list[i+1]);
    adjust(list, 0,i);
  }
}

void adjust(int list[], int root, int n){
  int child, rootkey;
  rootkey = list[root];
  child = 2*root+1;
  while(child <=n-1){
    if((child<n-1)&&(list[child]<list[child+1])) child++;
    if(rootkey > list[child]) break;
    else{
      list[(child-1)/2]=list[child];
      child=2*child+1;
    }
  }
  list[(child-1)/2]=rootkey;
}

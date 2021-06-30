void swap_max(int arr[], int l, int pos) {
  int x = 0;
  int max = pos;
  for (int i = pos; i<1; i++) {
    if(arr[i] > arr[max]) {
     max = i;
    }
  }
  x = arr[max];
  arr[max] = arr[pos];
  arr[pos] = x;
}

void ssort(int arr[], int l) {
  for (int i = 0; i<1; i++) {
    swap_max(arr,l,i);
  }
  for (int i = 0; i<1; i++) {
    printf("| %i |",arr[i]);
  }
  printf("\n");
}

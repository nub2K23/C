#include <stdio.h>
#include <stdlib.h>
void avg_sum(int *, int);
int main() {
  int n, *arr;
  printf("Enter the number of elements to be stored:\n");
  scanf("%d", &n);
  arr = (int *) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  avg_sum(arr, n);
  return 0;
}

void avg_sum(int *ptr, int n) {
  float avg, sum = 0;
  for (int i = 0; i < n; i++) {
    sum += *(ptr + i);
  }
  avg = sum / n;
  printf("Avg. of elements = %.2f\nSum of elements = %.2f\n", avg, sum);
}

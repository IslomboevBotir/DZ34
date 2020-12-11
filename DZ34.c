#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int i, j, k, y, g, h;
  int N;
  //scanf("%d", &N);
  N = rand();
  printf("N = %d \n", N);
  int* arr = (int*)malloc(N * sizeof(int));
    for (i = 0; i < N; ++i)
    {
      arr[i] = rand();
      printf("%d ", arr[i]);
    }
  int d = N / 2;// шаг разбиения
    while (d > 0)
    {
      k = 0;
        while (k < d) 
        {
          for (i = k; i < N; i = i + d)
          {
          h = i;
            while (h > k&& arr[h - d] > arr[h])
            {
            int t = arr[h - d];
            arr[h - d] = arr[h];
            arr[h] = t;
            h = h - d;
            }
          }
          k++;
        }
        d = d / 2;
    }
printf("\n");
for (i = 0; i < N; i++)
printf("%d ", arr[i]);
free(arr);
return 0;
}

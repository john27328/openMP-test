#include <iostream>
#include <omp.h>

#define N 10000

int main(int argc, char *argv[])
{
  long long i;
  omp_set_dynamic(0);      // запретить библиотеке openmp менять число потоков во время исполнения
  omp_set_num_threads(10); // установить число потоков в 10

  // вычисляем сумму массивов
#pragma omp parallel for
  for (i = 0; i < N; i++){
      double c = i + 1./i;
  }
    std::cout << N << std::endl;
  return 0;
}

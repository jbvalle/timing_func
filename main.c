#include <stdio.h>
#include <time.h>

int m(int n){
    int s = 0;
    for(int i = 0; i < (n-1); i++){
      for (int j = 1; j < (n-1); j++) {
        s++;
      }
    }
    return s;
}

int main(void){

    int start, end, n[5] = {100,200,300,400,500};
    double duration_per_clock_tick = 1000./(float)CLOCKS_PER_SEC;
    double runtime;

    for(int i = 0; i < 5; i++){
      //Start der Clock messung
      start = clock();
      int m_return = m(n[i]);
      //Ende der Clockmessung
      end = clock();
      //Formel zu Laufzeitberechnung in [ms]
      runtime = duration_per_clock_tick * (double)(end - start);
      printf("\nInput: %d | Time: %fms\n", n[i], runtime);
    }
    return 0;
}

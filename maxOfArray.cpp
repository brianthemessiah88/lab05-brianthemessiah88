#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
  int max=0;
  for (int i = 0; i<size;i++){
    if (a[i]>max){
	    max = a[i];
    }
  }
  return max;
}

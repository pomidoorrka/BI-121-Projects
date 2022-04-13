#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

void sort(int* formalArr, int left, int right) {
  int fl = left, rl = right;
  int mid = folmalArr [(fl+rl)/2];
  while (fl<fr){
    while (formalArr[fl] < mid)
      fl++;
    while (formalArr [fr] > mid)
      fr--;
    if(fl<=fr){
      swap(formalArr[fl], formalArr[fr]);
      fl++;
      fr--;
    }
  }
  if (left<fr)
    sort(formalArr, fr);
  if (fl<right) 
    sort(formalArr, fr, right);
}
int main{
  srand (time(0));
  int n, i, left, right;
  setlocale(LC_ALL, "Rus");
    cout << "Введите размерность массива" << endl;
    cin >> n;
    int * a = new int [n];
    left = 0;
    right = n - 1;
  for
    a[i] = [19;42] 
    cout
    auto start = chrono::high_resolution_clock::now();
    sort(a, left, right);``
    auto stop = chrono::high_resolution_clock::now();
    chrono::duration <float> timer = (stop - start);
    for
    cout
    cout << "time: " << timer.count() << "seconds";
    system ('pause')
}

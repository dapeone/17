#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int N, M, etag = 1, number = 3;
  cout << "Введите количество этажей";
  cin >> N;
  cout << "Введите квартиру";
  cin >> M;

  if (M > N * 3) {
    cerr << "Error";
    return 0;
  }

  while (number < M) {
    etag += 2;
    number += 6;
  }
  if (etag > N) {
    cout << etag - 2;
  }
  else{
    cout << etag;
  }
}
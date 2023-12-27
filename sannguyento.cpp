#include <stdio.h>
 
int main() {
  int N = 1000;
  bool check[N + 1];
  // Kh?i t?o t?t c? các s? [2...N] ð?u là s? nguyên t?
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
 
  // Thu?t toán sàng nguyên t?
  // N?u m?t s? là s? nguyên t?, th? t?t c? các b?i c?a nó không ph?i s? nguyên t?
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
  }
  // In ra các s? là s? nguyên t?
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      printf("%d ", i);
    }
  }
}

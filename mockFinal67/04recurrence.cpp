#include <iostream>
using namespace std;
int S(int n, int k) {
// Stirling numbers of the second kind
}
int B(int n) {
// Bell number
}
int T(int n, int x) {
// Chebyshev polynomials
}
int main() {
string fn;
int i, j;
while (cin >> fn) {
if (fn == "S") {
cin >> i >> j;
printf("S(%d, %d) = %d\n", i, j, S(i,j));
} else if (fn == "B") {
cin >> i;
printf("B(%d) = %d\n", i, B(i));
} else if (fn == "T") {
cin >> i >> j;
printf("T(%d, %d) = %d\n", i, j, T(i,j));
}
}
return 0;
}